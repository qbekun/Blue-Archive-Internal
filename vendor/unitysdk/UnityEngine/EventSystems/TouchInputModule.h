#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49B710)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_FAKETOUCHES_OFFSET UNITYSDK_OFFSET(0xA49B720)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0xA49C240)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_FORCEMODULEACTIVE_OFFSET UNITYSDK_OFFSET(0xA49C460)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_FORCEMODULEACTIVE_OFFSET UNITYSDK_OFFSET(0xA49C470)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_ISMODULESUPPORTED_OFFSET UNITYSDK_OFFSET(0xA49C480)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_UPDATEMODULE_OFFSET UNITYSDK_OFFSET(0xA49C4C0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_DEACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0xA49C660)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0xA49C670)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA49C7A0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESS_OFFSET UNITYSDK_OFFSET(0xA49CAA0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHPRESS_OFFSET UNITYSDK_OFFSET(0xA49B850)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_USEFAKEINPUT_OFFSET UNITYSDK_OFFSET(0xA49C770)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_ALLOWACTIVATIONONSTANDALONE_OFFSET UNITYSDK_OFFSET(0xA49CAF0)
#define UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_ALLOWACTIVATIONONSTANDALONE_OFFSET UNITYSDK_OFFSET(0xA49CB00)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int TouchInputModule_TypeDefinitionIndex = 34931;

	class TouchInputModule : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* m_LastMousePosition; // 0x60
		::UnityEngine::Vector2* m_MousePosition; // 0x68
		::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent; // 0x70
		::System::Boolean m_ForceModuleActive; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FakeTouches()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_FAKETOUCHES_OFFSET))(nullptr);
		}

		::System::Void ProcessTouchEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHEVENTS_OFFSET))(nullptr);
		}

		::System::Void set_forceModuleActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_FORCEMODULEACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_forceModuleActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_FORCEMODULEACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsModuleSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_ISMODULESUPPORTED_OFFSET))(nullptr);
		}

		::System::Void UpdateModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_UPDATEMODULE_OFFSET))(nullptr);
		}

		::System::Void DeactivateModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_DEACTIVATEMODULE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldActivateModule()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Process()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESS_OFFSET))(nullptr);
		}

		::System::Void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_PROCESSTOUCHPRESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UseFakeInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_USEFAKEINPUT_OFFSET))(nullptr);
		}

		::System::Boolean get_allowActivationOnStandalone()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_GET_ALLOWACTIVATIONONSTANDALONE_OFFSET))(nullptr);
		}

		::System::Void set_allowActivationOnStandalone(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_TOUCHINPUTMODULE_SET_ALLOWACTIVATIONONSTANDALONE_OFFSET))(arg, nullptr);
		}

	};
}

