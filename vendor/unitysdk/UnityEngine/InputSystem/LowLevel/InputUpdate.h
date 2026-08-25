#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_SAVE_OFFSET UNITYSDK_OFFSET(0x9F5F710)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9F5F760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ISPLAYERUPDATE_OFFSET UNITYSDK_OFFSET(0x9F5F7F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_RESTORE_OFFSET UNITYSDK_OFFSET(0x9F5F800)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_GETUPDATETYPEFORPLAYER_OFFSET UNITYSDK_OFFSET(0x9F5F880)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9F5F8A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdate_TypeDefinitionIndex = 28807;

	class InputUpdate : public Il2CppObject
	{
	public:
		::System::UInt32 s_UpdateStepCount; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* s_LatestUpdateType; // 0x4
		UpdateStepCount* s_PlayerUpdateStepCount; // 0x8

		SerializedState* Save()
		{
			return (return (SerializedState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_SAVE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ONUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ISPLAYERUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Restore(SerializedState* arg)
		{
			((::System::Void(*)(SerializedState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_RESTORE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputUpdateType* GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputUpdateType*(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_GETUPDATETYPEFORPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATE_ONBEFOREUPDATE_OFFSET))(arg, nullptr);
		}

	};
}

