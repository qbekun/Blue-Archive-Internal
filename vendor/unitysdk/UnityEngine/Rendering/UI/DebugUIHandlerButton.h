#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FE7660)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FE76F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FE7740)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE7780)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FE77A0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerButton_TypeDefinitionIndex = 34141;

	class DebugUIHandlerButton : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		Button* m_Field; // 0x60

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBUTTON_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

