#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEF840)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEF860)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEF900)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_NEXT_OFFSET UNITYSDK_OFFSET(0x9FEF960)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVBox_TypeDefinitionIndex = 34169;

	class DebugUIHandlerVBox : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVBOX_NEXT_OFFSET))(nullptr);
		}

	};
}

