#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class Blackboard; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_SET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardProperty`1_TypeDefinitionIndex = 36804;

	class BlackboardProperty`1 : public ::MXUnderCover::UCSectionSetting
	{
	public:
		::System::String* _name_k__BackingField; // 0x0

		::System::Void SetValue(::MXBehaviorTree::Blackboard* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetValue(::MXBehaviorTree::Blackboard* arg)
		{
			return (return (Il2CppObject*(*)(::MXBehaviorTree::Blackboard*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTY`1_SET_NAME_OFFSET))(str, nullptr);
		}

	};
}

