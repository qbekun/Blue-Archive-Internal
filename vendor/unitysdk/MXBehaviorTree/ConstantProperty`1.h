#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Blackboard; }

#define MXBEHAVIORTREE_CONSTANTPROPERTY`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_CONSTANTPROPERTY`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_CONSTANTPROPERTY`1_GET_VALUESTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_CONSTANTPROPERTY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_CONSTANTPROPERTY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_CONSTANTPROPERTY`1_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_CONSTANTPROPERTY`1_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ConstantProperty`1_TypeDefinitionIndex = 36821;

	class ConstantProperty`1 : public TimeState
	{
	public:
		Il2CppObject* _value_k__BackingField; // 0x0

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTY`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTY`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::String* get_valueString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTY`1_GET_VALUESTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTY`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTY`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetValue(::MXBehaviorTree::Blackboard* arg)
		{
			return (return (Il2CppObject*(*)(::MXBehaviorTree::Blackboard*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTY`1_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::MXBehaviorTree::Blackboard* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTY`1_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

