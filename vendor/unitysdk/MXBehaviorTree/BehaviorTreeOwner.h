#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Blackboard; }

#define MXBEHAVIORTREE_BEHAVIORTREEOWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9405160)
#define MXBEHAVIORTREE_BEHAVIORTREEOWNER_ONINITBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BEHAVIORTREEOWNER_ONSTART_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BehaviorTreeOwner_TypeDefinitionIndex = 36735;

	class BehaviorTreeOwner : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEOWNER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnInitBlackboard(::MXBehaviorTree::Blackboard* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEOWNER_ONINITBLACKBOARD_OFFSET))(arg, nullptr);
		}

		::System::Void OnStart(::MXBehaviorTree::Blackboard* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEOWNER_ONSTART_OFFSET))(arg, arg, nullptr);
		}

	};
}

