#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class BaseRuntimePanel; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine { class Touch; }
namespace UnityEngine { class EventModifiers; }

#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GET_ISAPPFOCUSED_OFFSET UNITYSDK_OFFSET(0xA312070)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GET_INPUT_OFFSET UNITYSDK_OFFSET(0xA312080)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GETDEFAULTINPUT_OFFSET UNITYSDK_OFFSET(0xA3120C0)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SHOULDIGNOREEVENTSONAPPNOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xA312290)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GET_FOCUSEDPANEL_OFFSET UNITYSDK_OFFSET(0xA3122B0)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SET_FOCUSEDPANEL_OFFSET UNITYSDK_OFFSET(0xA3122C0)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA312570)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SENDIMGUIEVENTS_OFFSET UNITYSDK_OFFSET(0xA312BB0)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SENDINPUTEVENTS_OFFSET UNITYSDK_OFFSET(0xA3131B0)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SENDFOCUSBASEDEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SENDPOSITIONBASEDEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_UPDATEFOCUSEDPANEL_OFFSET UNITYSDK_OFFSET(0xA313940)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_MAKETOUCHEVENT_OFFSET UNITYSDK_OFFSET(0xA313A30)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_PROCESSTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0xA3125D0)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GETRAWMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xA313BD0)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SHOULDSENDMOVEFROMINPUT_OFFSET UNITYSDK_OFFSET(0xA313600)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GETLOCALSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xA3135D0)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA313F40)
#define UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA314040)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DefaultEventSystem_TypeDefinitionIndex = 30082;

	class DefaultEventSystem : public Il2CppObject
	{
	public:
		Il2CppObject* IsEditorRemoteConnected; // 0x0
		IInput* m_Input; // 0x10
		::System::String* m_HorizontalAxis; // 0x18
		::System::String* m_VerticalAxis; // 0x20
		::System::String* m_SubmitButton; // 0x28
		::System::String* m_CancelButton; // 0x30
		::System::Single m_InputActionsPerSecond; // 0x38
		::System::Single m_RepeatDelay; // 0x3C
		::System::Boolean m_SendingTouchEvents; // 0x40
		::UnityEngine::Event* m_Event; // 0x48
		::UnityEngine::UIElements::BaseRuntimePanel* m_FocusedPanel; // 0x50
		::System::Int32 m_ConsecutiveMoveCount; // 0x58
		::UnityEngine::Vector2* m_LastMoveVector; // 0x5C
		::System::Single m_PrevActionTime; // 0x64

		::System::Boolean get_isAppFocused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GET_ISAPPFOCUSED_OFFSET))(nullptr);
		}

		IInput* get_input()
		{
			return (return (IInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GET_INPUT_OFFSET))(nullptr);
		}

		IInput* GetDefaultInput()
		{
			return (return (IInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GETDEFAULTINPUT_OFFSET))(nullptr);
		}

		::System::Boolean ShouldIgnoreEventsOnAppNotFocused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SHOULDIGNOREEVENTSONAPPNOTFOCUSED_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::BaseRuntimePanel* get_focusedPanel()
		{
			return (return (::UnityEngine::UIElements::BaseRuntimePanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GET_FOCUSEDPANEL_OFFSET))(nullptr);
		}

		::System::Void set_focusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseRuntimePanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SET_FOCUSEDPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void Update(UpdateMode* arg)
		{
			((::System::Void(*)(UpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SendIMGUIEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SENDIMGUIEVENTS_OFFSET))(nullptr);
		}

		::System::Void SendInputEvents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SENDINPUTEVENTS_OFFSET))(nullptr);
		}

		::System::Void SendFocusBasedEvent(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SENDFOCUSBASEDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendPositionBasedEvent(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Int32, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SENDPOSITIONBASEDEVENT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseRuntimePanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_UPDATEFOCUSEDPANEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::EventBase* MakeTouchEvent(::UnityEngine::Touch* arg, ::UnityEngine::EventModifiers* arg)
		{
			return (return (::UnityEngine::UIElements::EventBase*(*)(::UnityEngine::Touch*, ::UnityEngine::EventModifiers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_MAKETOUCHEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ProcessTouchEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_PROCESSTOUCHEVENTS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetRawMoveVector()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GETRAWMOVEVECTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSendMoveFromInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_SHOULDSENDMOVEFROMINPUT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetLocalScreenPosition(::UnityEngine::Event* arg, Il2CppObject&* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Event*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_GETLOCALSCREENPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTEVENTSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

