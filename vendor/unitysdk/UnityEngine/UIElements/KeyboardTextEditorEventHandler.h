#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class TextEditorEngine; }
namespace UnityEngine::UIElements { class ITextInputField; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusEvent; }
namespace UnityEngine::UIElements { class BlurEvent; }
namespace UnityEngine::UIElements { class MouseDownEvent; }
namespace UnityEngine::UIElements { class MouseUpEvent; }
namespace UnityEngine::UIElements { class MouseMoveEvent; }
namespace UnityEngine::UIElements { class KeyDownEvent; }
namespace UnityEngine::UIElements { class ValidateCommandEvent; }
namespace UnityEngine::UIElements { class ExecuteCommandEvent; }

#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_GET_ISCLICKING_OFFSET UNITYSDK_OFFSET(0xA3A8950)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_SET_ISCLICKING_OFFSET UNITYSDK_OFFSET(0xA3A8960)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A89A0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0xA3A8A20)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONFOCUS_OFFSET UNITYSDK_OFFSET(0xA3A8F80)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONBLUR_OFFSET UNITYSDK_OFFSET(0xA3A9100)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0xA3A9110)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0xA3A9560)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONMOUSEMOVE_OFFSET UNITYSDK_OFFSET(0xA3A96C0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_PROCESSDRAGMOVE_OFFSET UNITYSDK_OFFSET(0xA3AA750)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_MOVEDISTANCEQUALIFIESFORDRAG_OFFSET UNITYSDK_OFFSET(0xA3AA720)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA3A9820)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONVALIDATECOMMANDEVENT_OFFSET UNITYSDK_OFFSET(0xA3A9E30)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONEXECUTECOMMANDEVENT_OFFSET UNITYSDK_OFFSET(0xA3AA1A0)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_PREDRAWCURSOR_OFFSET UNITYSDK_OFFSET(0xA3AA870)
#define UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_POSTDRAWCURSOR_OFFSET UNITYSDK_OFFSET(0xA3AABB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int KeyboardTextEditorEventHandler_TypeDefinitionIndex = 30340;

	class KeyboardTextEditorEventHandler : public Il2CppObject
	{
	public:
		::System::Boolean m_Changed; // 0x20
		::System::Boolean m_Dragged; // 0x21
		::System::Boolean m_DragToPosition; // 0x22
		::System::Boolean m_SelectAllOnMouseUp; // 0x23
		::System::String* m_PreDrawCursorText; // 0x28
		::System::Boolean m_IsClicking; // 0x30
		::UnityEngine::Vector2* m_ClickStartPosition; // 0x34
		::UnityEngine::Event* m_ImguiEvent; // 0x40

		::System::Boolean get_isClicking()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_GET_ISCLICKING_OFFSET))(nullptr);
		}

		::System::Void set_isClicking(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_SET_ISCLICKING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::TextEditorEngine* arg, ::UnityEngine::UIElements::ITextInputField* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextEditorEngine*, ::UnityEngine::UIElements::ITextInputField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnFocus(::UnityEngine::UIElements::FocusEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void OnBlur(::UnityEngine::UIElements::BlurEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BlurEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONBLUR_OFFSET))(arg, nullptr);
		}

		::System::Void OnMouseDown(::UnityEngine::UIElements::MouseDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONMOUSEDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnMouseUp(::UnityEngine::UIElements::MouseUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONMOUSEUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnMouseMove(::UnityEngine::UIElements::MouseMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONMOUSEMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessDragMove(::UnityEngine::UIElements::MouseMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_PROCESSDRAGMOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveDistanceQualifiesForDrag(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_MOVEDISTANCEQUALIFIESFORDRAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ValidateCommandEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONVALIDATECOMMANDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ExecuteCommandEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_ONEXECUTECOMMANDEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreDrawCursor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_PREDRAWCURSOR_OFFSET))(str, nullptr);
		}

		::System::Void PostDrawCursor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_KEYBOARDTEXTEDITOREVENTHANDLER_POSTDRAWCURSOR_OFFSET))(nullptr);
		}

	};
}

