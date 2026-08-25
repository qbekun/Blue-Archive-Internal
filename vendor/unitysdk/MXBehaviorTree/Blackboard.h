#pragma once
#include "../unitysdk.h"

#define MXBEHAVIORTREE_BLACKBOARD_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BLACKBOARD_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BLACKBOARD_GETVALUETYPEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXBEHAVIORTREE_BLACKBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9405640)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int Blackboard_TypeDefinitionIndex = 36738;

	class Blackboard : public Il2CppObject
	{
	public:
		Il2CppObject* valueTypeDic; // 0x10
		Il2CppObject* referenceTypeDic; // 0x18

		Il2CppObject* GetValue(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARD_GETVALUE_OFFSET))(str, nullptr);
		}

		::System::Void SetValue(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARD_SETVALUE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetValueTypeDictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARD_GETVALUETYPEDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

