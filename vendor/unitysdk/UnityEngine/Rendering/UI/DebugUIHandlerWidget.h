#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FF1990)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x9FF19A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FF1A40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_NEXTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x9FF1A50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FF1A60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FF1A70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FF1A80)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_NEXTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x9FF1A90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PARENTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x9FF1AA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PREVIOUSUIHANDLER_OFFSET UNITYSDK_OFFSET(0x9FF1AB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FF1AC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FF1AD0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PARENTUIHANDLER_OFFSET UNITYSDK_OFFSET(0x9FF1AE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_NEXT_OFFSET UNITYSDK_OFFSET(0x9FE74D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE6CA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FF1AF0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PREVIOUSUIHANDLER_OFFSET UNITYSDK_OFFSET(0x9FF1B00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_CASTWIDGET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerWidget_TypeDefinitionIndex = 34173;

	class DebugUIHandlerWidget : public Il2CppObject
	{
	public:
		::UnityEngine::Color* colorDefault; // 0x18
		::UnityEngine::Color* colorSelected; // 0x28
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _parentUIHandler_k__BackingField; // 0x38
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _previousUIHandler_k__BackingField; // 0x40
		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* _nextUIHandler_k__BackingField; // 0x48
		Widget* m_Widget; // 0x50

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONACTION_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Previous()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_PREVIOUS_OFFSET))(nullptr);
		}

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_nextUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_NEXTUIHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_nextUIHandler()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_NEXTUIHANDLER_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_parentUIHandler()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PARENTUIHANDLER_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* get_previousUIHandler()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GET_PREVIOUSUIHANDLER_OFFSET))(nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		Widget* GetWidget()
		{
			return (return (Widget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_GETWIDGET_OFFSET))(nullptr);
		}

		::System::Void set_parentUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PARENTUIHANDLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_NEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void set_previousUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_SET_PREVIOUSUIHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CastWidget()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERWIDGET_CASTWIDGET_OFFSET))(nullptr);
		}

	};
}

