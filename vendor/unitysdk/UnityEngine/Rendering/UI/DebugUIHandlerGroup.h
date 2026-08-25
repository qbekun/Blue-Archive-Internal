#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_NEXT_OFFSET UNITYSDK_OFFSET(0x9FEC940)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEC9F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FECAF0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FECB10)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerGroup_TypeDefinitionIndex = 34154;

	class DebugUIHandlerGroup : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Transform* header; // 0x60
		Container* m_Field; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x70

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_NEXT_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERGROUP_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

