#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseInputModule; }

#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_SET_SELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0xA48F710)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_SELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0xA48F970)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA48F6A0)
#define UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_CURRENTINPUTMODULE_OFFSET UNITYSDK_OFFSET(0xA48F990)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int BaseEventData_TypeDefinitionIndex = 34890;

	class BaseEventData : public ::Mono::Security::Interface::TlsProtocolCode
	{
	public:
		::UnityEngine::EventSystems::EventSystem* m_EventSystem; // 0x18

		::System::Void set_selectedObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_SET_SELECTEDOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_selectedObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_SELECTEDOBJECT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::EventSystems::EventSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::EventSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::BaseInputModule* get_currentInputModule()
		{
			return (return (::UnityEngine::EventSystems::BaseInputModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_BASEEVENTDATA_GET_CURRENTINPUTMODULE_OFFSET))(nullptr);
		}

	};
}

