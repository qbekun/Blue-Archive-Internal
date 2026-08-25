#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Blackboard; }
namespace MXBehaviorTree { class IBehaviorTreeProperty; }
namespace MXBehaviorTree { class ComparisonOperation; }

#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_GET_ALLOWONLYEQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x94222D0)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94224D0)
#define MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int IBehaviorTreeProperty_TypeDefinitionIndex = 36780;

	class IBehaviorTreeProperty : public Il2CppObject
	{
	public:
		::System::Boolean get_allowOnlyEquals()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_GET_ALLOWONLYEQUALS_OFFSET))(nullptr);
		}

		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Compare(::MXBehaviorTree::Blackboard* arg, ::MXBehaviorTree::IBehaviorTreeProperty* arg, ::MXBehaviorTree::ComparisonOperation* arg)
		{
			return (return (::System::Boolean(*)(::MXBehaviorTree::Blackboard*, ::MXBehaviorTree::IBehaviorTreeProperty*, ::MXBehaviorTree::ComparisonOperation*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_IBEHAVIORTREEPROPERTY_COMPARE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

