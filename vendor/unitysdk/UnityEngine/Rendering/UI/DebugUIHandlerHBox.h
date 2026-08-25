#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_NEXT_OFFSET UNITYSDK_OFFSET(0x9FECBB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FECC60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FECD00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FECD20)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerHBox_TypeDefinitionIndex = 34155;

	class DebugUIHandlerHBox : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x58

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_NEXT_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERHBOX_SETWIDGET_OFFSET))(arg, nullptr);
		}

	};
}

