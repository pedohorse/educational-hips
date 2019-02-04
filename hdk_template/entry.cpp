#include <UT\UT_DSOVersion.h>
#include <OP\OP_OperatorTable.h>

#include "SOP_MyFirstNode.h"

// Note file paths.prop. You must set there the path to your houdini installation
// you can either open it in notepad as xml, or open propertiy manager in  View --> Other Windows --> Properties Manager
// there you will see property called "paths". double click it. there locate User Macros and change value of HoudiniPath macro to your houdini installation dir

// Note that you can use post-build event like 
//    xcopy  "$(OutputPath)$(TargetFileName)" "$(SolutionDir)..\..\dso\." /Y
// if you want to copy produced DLL somewhere where you have setup houdini to look for it.
// in this example, it copies dll 2 directories up into dso folder just because i have my usual testing projects setup in this way

//ALL REGISTRATIONS CAN GO HERE

void newSopOperator(OP_OperatorTable* ot) {
	OP_Operator *opGvdbCreate = new OP_Operator(
		"myFirstNode",	 // internal name
		"My First Node", // interface name
		SOP_MyFirstNode::makeMe,
		SOP_MyFirstNode::myParamTemplate,
		1U, //min inputs number
		1U //max inputs number
	);

	ot->addOperator(opGvdbCreate);
}