#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERMESSAGEBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FED560)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERMESSAGEBOX_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FED580)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERMESSAGEBOX_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FED590)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERMESSAGEBOX_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FED730)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerMessageBox_TypeDefinitionIndex = 34159;

	class DebugUIHandlerMessageBox : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		MessageBox* m_Field; // 0x60
		::UnityEngine::Color32* k_WarningBackgroundColor; // 0x0
		::UnityEngine::Color32* k_WarningTextColor; // 0x4
		::UnityEngine::Color32* k_ErrorBackgroundColor; // 0x8
		::UnityEngine::Color32* k_ErrorTextColor; // 0xC

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERMESSAGEBOX_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERMESSAGEBOX_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERMESSAGEBOX_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERMESSAGEBOX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

