#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class IMECompositionString; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ITEXTINPUTRECEIVER_ONIMECOMPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ITEXTINPUTRECEIVER_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int ITextInputReceiver_TypeDefinitionIndex = 28750;

	class ITextInputReceiver : public Il2CppObject
	{
	public:
		::System::Void OnIMECompositionChanged(::UnityEngine::InputSystem::LowLevel::IMECompositionString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IMECompositionString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ITEXTINPUTRECEIVER_ONIMECOMPOSITIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnTextInput(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_ITEXTINPUTRECEIVER_ONTEXTINPUT_OFFSET))(arg, nullptr);
		}

	};
}

