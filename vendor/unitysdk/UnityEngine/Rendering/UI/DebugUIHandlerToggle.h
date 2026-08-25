#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEE6F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FEE710)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONTOGGLEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9FEE7A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FEE7F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEE890)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEE900)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FEEA20)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerToggle_TypeDefinitionIndex = 34164;

	class DebugUIHandlerToggle : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Toggle* valueToggle; // 0x60
		::UnityEngine::UI::Image* checkmarkImage; // 0x68
		BoolField* m_Field; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONACTION_OFFSET))(nullptr);
		}

		::System::Void OnToggleValueChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONTOGGLEVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERTOGGLE_ONDESELECTION_OFFSET))(nullptr);
		}

	};
}

