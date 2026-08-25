#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Blackboard; }

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY`1_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY`1_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreeProperty`1_TypeDefinitionIndex = 36781;

	class IBehaviorTreeProperty`1 : public Il2CppObject
	{
	public:
		Il2CppObject* GetValue(::MXBehaviorTree::Blackboard* arg)
		{
			return (return (Il2CppObject*(*)(::MXBehaviorTree::Blackboard*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY`1_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::MXBehaviorTree::Blackboard* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY`1_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

