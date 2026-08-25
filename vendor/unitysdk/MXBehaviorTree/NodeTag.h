#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class NodeTag; }

namespace MXBehaviorTree
{
	inline static constexpr unsigned int NodeTag_TypeDefinitionIndex = 36777;

	class NodeTag : public Il2CppObject
	{
	public:
		::System::UInt16 value__; // 0x10
		::MXBehaviorTree::NodeTag* Root; // 0x0
		::MXBehaviorTree::NodeTag* Selector; // 0x0
		::MXBehaviorTree::NodeTag* Sequence; // 0x0
		::MXBehaviorTree::NodeTag* Subtree; // 0x0
		::MXBehaviorTree::NodeTag* Wait; // 0x0
		::MXBehaviorTree::NodeTag* DebugLog; // 0x0
		::MXBehaviorTree::NodeTag* TestNode; // 0x0
		::MXBehaviorTree::NodeTag* BlackboardConstCompare; // 0x0
		::MXBehaviorTree::NodeTag* BlackboardCompare; // 0x0
		::MXBehaviorTree::NodeTag* End; // 0x0

	};
}

