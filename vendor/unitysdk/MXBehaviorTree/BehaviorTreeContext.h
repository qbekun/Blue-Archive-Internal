#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BehaviorTreeRunner; }
namespace MXBehaviorTree { class BehaviorTree; }
namespace MXBehaviorTree { class Blackboard; }
namespace MXBehaviorTree { class BehaviorTreeOwner; }

#define MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GET_BEHAVIORTREE_OFFSET UNITYSDK_OFFSET(0x9405170)
#define MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GETOWNER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x9405180)
#define MXBEHAVIORTREE_BEHAVIORTREECONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9405190)
#define MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GET_BEHAVIORTREERUNNER_OFFSET UNITYSDK_OFFSET(0x9405210)
#define MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x9405220)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BehaviorTreeContext_TypeDefinitionIndex = 36736;

	class BehaviorTreeContext : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BehaviorTreeRunner* _behaviorTreeRunner_k__BackingField; // 0x10
		::MXBehaviorTree::BehaviorTree* _behaviorTree_k__BackingField; // 0x18
		::MXBehaviorTree::Blackboard* _blackboard_k__BackingField; // 0x20
		::MXBehaviorTree::BehaviorTreeOwner* _owner_k__BackingField; // 0x28

		::MXBehaviorTree::BehaviorTree* get_behaviorTree()
		{
			return (return (::MXBehaviorTree::BehaviorTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GET_BEHAVIORTREE_OFFSET))(nullptr);
		}

		Il2CppObject* GetOwner()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GETOWNER_OFFSET))(nullptr);
		}

		::MXBehaviorTree::Blackboard* get_blackboard()
		{
			return (return (::MXBehaviorTree::Blackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GET_BLACKBOARD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXBehaviorTree::BehaviorTreeRunner* arg, ::MXBehaviorTree::BehaviorTree* arg, ::MXBehaviorTree::Blackboard* arg, ::MXBehaviorTree::BehaviorTreeOwner* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::BehaviorTreeRunner*, ::MXBehaviorTree::BehaviorTree*, ::MXBehaviorTree::Blackboard*, ::MXBehaviorTree::BehaviorTreeOwner*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREECONTEXT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::MXBehaviorTree::BehaviorTreeRunner* get_behaviorTreeRunner()
		{
			return (return (::MXBehaviorTree::BehaviorTreeRunner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GET_BEHAVIORTREERUNNER_OFFSET))(nullptr);
		}

		::MXBehaviorTree::BehaviorTreeOwner* get_owner()
		{
			return (return (::MXBehaviorTree::BehaviorTreeOwner*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREECONTEXT_GET_OWNER_OFFSET))(nullptr);
		}

	};
}

