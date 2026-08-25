#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SAVEDSTRUCTSTATE`1_STATICDISPOSECURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SAVEDSTRUCTSTATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SAVEDSTRUCTSTATE`1_RESTORESAVEDSTATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int SavedStructState`1_TypeDefinitionIndex = 28956;

	class SavedStructState`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_State; // 0x0
		Il2CppObject* m_RestoreAction; // 0x0
		::System::Action* m_StaticDisposeCurrentState; // 0x0

		::System::Void StaticDisposeCurrentState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SAVEDSTRUCTSTATE`1_STATICDISPOSECURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject&* arg, Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SAVEDSTRUCTSTATE`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RestoreSavedState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SAVEDSTRUCTSTATE`1_RESTORESAVEDSTATE_OFFSET))(nullptr);
		}

	};
}

