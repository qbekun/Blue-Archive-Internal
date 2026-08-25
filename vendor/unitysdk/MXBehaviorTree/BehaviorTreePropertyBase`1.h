#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Blackboard; }
namespace MXBehaviorTree { class IBehaviorTreeProperty; }
namespace MXBehaviorTree { class ComparisonOperation; }

#define MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_GET_ALLOWONLYEQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BehaviorTreePropertyBase`1_TypeDefinitionIndex = 36782;

	class BehaviorTreePropertyBase`1 : public Il2CppObject
	{
	public:
		::System::Void SetValue(::MXBehaviorTree::Blackboard* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetValue(::MXBehaviorTree::Blackboard* arg)
		{
			return (return (Il2CppObject*(*)(::MXBehaviorTree::Blackboard*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Compare(::MXBehaviorTree::Blackboard* arg, ::MXBehaviorTree::IBehaviorTreeProperty* arg, ::MXBehaviorTree::ComparisonOperation* arg)
		{
			return (return (::System::Boolean(*)(::MXBehaviorTree::Blackboard*, ::MXBehaviorTree::IBehaviorTreeProperty*, ::MXBehaviorTree::ComparisonOperation*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_COMPARE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_allowOnlyEquals()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_GET_ALLOWONLYEQUALS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BEHAVIORTREEPROPERTYBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

