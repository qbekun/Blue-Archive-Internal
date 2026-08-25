#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_LOCKFORCHANGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_REMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_UNLOCKFORCHANGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int CallbackArray`1_TypeDefinitionIndex = 28911;

	class CallbackArray`1 : public Il2CppObject
	{
	public:
		::System::Boolean m_CannotMutateCallbacksArray; // 0x0
		Il2CppObject* m_Callbacks; // 0x0
		Il2CppObject* m_CallbacksToAdd; // 0x0
		Il2CppObject* m_CallbacksToRemove; // 0x0

		::System::Void LockForChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_LOCKFORCHANGES_OFFSET))(nullptr);
		}

		::System::Void RemoveCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_REMOVECALLBACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void UnlockForChanges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_UNLOCKFORCHANGES_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void AddCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_ADDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CALLBACKARRAY`1_GET_LENGTH_OFFSET))(nullptr);
		}

	};
}

