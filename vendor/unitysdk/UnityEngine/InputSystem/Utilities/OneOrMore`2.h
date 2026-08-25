#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int OneOrMore`2_TypeDefinitionIndex = 28948;

	class OneOrMore`2 : public Il2CppObject
	{
	public:
		::System::Boolean m_IsSingle; // 0x0
		Il2CppObject* m_Single; // 0x0
		Il2CppObject* m_Multiple; // 0x0

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Implicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Implicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_ONEORMORE`2_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

