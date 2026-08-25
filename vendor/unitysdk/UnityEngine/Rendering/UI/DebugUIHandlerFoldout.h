#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEC290)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FEC660)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEC6A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FEC6C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FEC700)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9FEC630)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FEC740)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_NEXT_OFFSET UNITYSDK_OFFSET(0x9FEC790)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEC850)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerFoldout_TypeDefinitionIndex = 34153;

	class DebugUIHandlerFoldout : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		Foldout* m_Field; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x70
		::System::Single xDecal; // 0x0
		::System::Single xDecalInit; // 0x0

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_UPDATEVALUE_OFFSET))(nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONDESELECTION_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_NEXT_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFOLDOUT_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

