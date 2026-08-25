#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class DropdownMenu; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class ContextualMenuManager; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_GET_MENU_OFFSET UNITYSDK_OFFSET(0xA3E4040)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_SET_MENU_OFFSET UNITYSDK_OFFSET(0xA3E4050)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_GET_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0xA3E4070)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_SET_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0xA3E4080)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xA3E40A0)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_LOCALINIT_OFFSET UNITYSDK_OFFSET(0xA3E4150)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3E41D0)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0xA3E4280)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ContextualMenuPopulateEvent_TypeDefinitionIndex = 30506;

	class ContextualMenuPopulateEvent : public ::ToyWebViewServer::ILogger
	{
	public:
		::UnityEngine::UIElements::DropdownMenu* _menu_k__BackingField; // 0xB8
		::UnityEngine::UIElements::EventBase* _triggerEvent_k__BackingField; // 0xC0
		::UnityEngine::UIElements::ContextualMenuManager* m_ContextualMenuManager; // 0xC8

		::UnityEngine::UIElements::DropdownMenu* get_menu()
		{
			return (return (::UnityEngine::UIElements::DropdownMenu*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_GET_MENU_OFFSET))(nullptr);
		}

		::System::Void set_menu(::UnityEngine::UIElements::DropdownMenu* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DropdownMenu*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_SET_MENU_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::EventBase* get_triggerEvent()
		{
			return (return (::UnityEngine::UIElements::EventBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_GET_TRIGGEREVENT_OFFSET))(nullptr);
		}

		::System::Void set_triggerEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_SET_TRIGGEREVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_LOCALINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUPOPULATEEVENT_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

	};
}

