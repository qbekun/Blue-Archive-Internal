#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define NPA_EDITOR_NXPINPUTFIELDHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D97170)
#define NPA_EDITOR_NXPINPUTFIELDHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D971E0)
#define NPA_EDITOR_NXPINPUTFIELDHANDLER_UNITYENGINE.EVENTSYSTEMS.ISELECTHANDLER.ONSELECT_OFFSET UNITYSDK_OFFSET(0x9D975A0)
#define NPA_EDITOR_NXPINPUTFIELDHANDLER_UNITYENGINE.EVENTSYSTEMS.IDESELECTHANDLER.ONDESELECT_OFFSET UNITYSDK_OFFSET(0x9D976C0)
#define NPA_EDITOR_NXPINPUTFIELDHANDLER_DELAYENABLENAVIGATION_OFFSET UNITYSDK_OFFSET(0x9D97640)
#define NPA_EDITOR_NXPINPUTFIELDHANDLER_SENDNAVIGATION_OFFSET UNITYSDK_OFFSET(0x9D97430)
#define NPA_EDITOR_NXPINPUTFIELDHANDLER_CALCULATEAXISDIRECTION_OFFSET UNITYSDK_OFFSET(0x9D97330)
#define NPA_EDITOR_NXPINPUTFIELDHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D97730)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPInputFieldHandler_TypeDefinitionIndex = 26326;

	class NXPInputFieldHandler : public Il2CppObject
	{
	public:
		::UnityEngine::UI::InputField* _inputField; // 0x18
		::System::Boolean _activateNavigation; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPINPUTFIELDHANDLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPINPUTFIELDHANDLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.EventSystems.ISelectHandler.OnSelect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPINPUTFIELDHANDLER_UNITYENGINE.EVENTSYSTEMS.ISELECTHANDLER.ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.EventSystems.IDeselectHandler.OnDeselect(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPINPUTFIELDHANDLER_UNITYENGINE.EVENTSYSTEMS.IDESELECTHANDLER.ONDESELECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* DelayEnableNavigation(::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPINPUTFIELDHANDLER_DELAYENABLENAVIGATION_OFFSET))(arg, nullptr);
		}

		::System::Void SendNavigation(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPINPUTFIELDHANDLER_SENDNAVIGATION_OFFSET))(str, nullptr);
		}

		::System::String* CalculateAxisDirection()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPINPUTFIELDHANDLER_CALCULATEAXISDIRECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPINPUTFIELDHANDLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

