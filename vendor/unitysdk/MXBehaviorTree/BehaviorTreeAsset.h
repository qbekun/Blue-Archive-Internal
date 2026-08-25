#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BehaviorTree; }

#define MXBEHAVIORTREE_BEHAVIORTREEASSET_LOADBEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x9402F50)
#define MXBEHAVIORTREE_BEHAVIORTREEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9403050)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BehaviorTreeAsset_TypeDefinitionIndex = 36730;

	class BehaviorTreeAsset : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* serializedBehaviorTree; // 0x18

		::MXBehaviorTree::BehaviorTree* LoadBehaviorTree()
		{
			return (return (::MXBehaviorTree::BehaviorTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEASSET_LOADBEHAVIORTREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

