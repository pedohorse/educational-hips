#include "SOP_MyFirstNode.h"

#include <PRM/PRM_Range.h>
#include <OP/OP_AutoLockInputs.h>

//static functions implementation, defining node interface

OP_Node *SOP_MyFirstNode::makeMe(OP_Network *net, const char *name, OP_Operator *op)
{
	return new SOP_MyFirstNode(net, name, op);
}

static PRM_Name prmName_StringParm("stringparm", "String Parm");
static PRM_Default prmDef_StringParm(0, "default string value");
static PRM_Name prmName_FloatParm("floatparm", "Float Parm");
static PRM_Default prmDef_FloatParm(1.234);
static PRM_Range prmRng_FloatParm(PRM_RANGE_RESTRICTED, 1.0, PRM_RANGE_UI, 9.0);

PRM_Template SOP_MyFirstNode::myParamTemplate[] = {
	PRM_Template(PRM_STRING, 1, &prmName_StringParm, &prmDef_StringParm, 0),
	PRM_Template(PRM_FLT, 1, &prmName_FloatParm, &prmDef_FloatParm, 0, &prmRng_FloatParm),
	PRM_Template()
};

//node implementation

SOP_MyFirstNode::SOP_MyFirstNode(OP_Network *net, const char *name, OP_Operator *op):SOP_Node(net, name, op)
{
	//init resources
}


SOP_MyFirstNode::~SOP_MyFirstNode()
{
	//release resources
}


OP_ERROR SOP_MyFirstNode::cookMySop(OP_Context &context)
{

	OP_AutoLockInputs inputs(this);
	if (inputs.lock(context) >= UT_ERROR_ABORT)return error(context);
	duplicateSource(0, context);

	return error(context);
}