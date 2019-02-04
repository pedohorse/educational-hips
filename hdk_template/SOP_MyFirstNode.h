#ifndef __SOP_MyFirstNode__
#define __SOP_MyFirstNode__

#include <SOP/SOP_Node.h>

class SOP_MyFirstNode :
	public SOP_Node
{
public:
	static OP_Node *makeMe(OP_Network *net, const char *name, OP_Operator *op);
	static PRM_Template myParamTemplate[];

protected:
	SOP_MyFirstNode(OP_Network *net, const char *name, OP_Operator *op);
	virtual ~SOP_MyFirstNode();

	virtual OP_ERROR cookMySop(OP_Context &context);
};

#endif