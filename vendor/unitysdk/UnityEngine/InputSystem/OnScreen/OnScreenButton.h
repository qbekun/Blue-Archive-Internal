#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_SET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F3DB00)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9F3DB10)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_GET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x9F3DB60)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9F3DB70)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F3DBB0)

namespace UnityEngine::InputSystem::OnScreen
{
	inline static constexpr unsigned int OnScreenButton_TypeDefinitionIndex = 28651;

	class OnScreenButton : public Il2CppObject
	{
	public:
		::System::String* m_ControlPath; // 0x30

		::System::Void set_controlPathInternal(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_SET_CONTROLPATHINTERNAL_OFFSET))(str, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::String* get_controlPathInternal()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_GET_CONTROLPATHINTERNAL_OFFSET))(nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};
}

