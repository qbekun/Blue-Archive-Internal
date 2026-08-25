#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FED090)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FED100)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FED170)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FED190)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONTOGGLEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9FED1F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FE6BE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_INIT_OFFSET UNITYSDK_OFFSET(0x9FE70C0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerIndirectToggle_TypeDefinitionIndex = 34157;

	class DebugUIHandlerIndirectToggle : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Toggle* valueToggle; // 0x60
		::UnityEngine::UI::Image* checkmarkImage; // 0x68
		Il2CppObject* getter; // 0x70
		Il2CppObject* setter; // 0x78
		::System::Int32 index; // 0x80

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONACTION_OFFSET))(nullptr);
		}

		::System::Void OnToggleValueChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_ONTOGGLEVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTTOGGLE_INIT_OFFSET))(nullptr);
		}

	};
}

