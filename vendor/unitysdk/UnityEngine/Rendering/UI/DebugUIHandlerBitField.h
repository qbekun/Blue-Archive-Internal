#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FE6750)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9FE6780)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FE6810)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FE6840)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9FE6890)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE6C80)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FE6CC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FE7170)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FE71A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_NEXT_OFFSET UNITYSDK_OFFSET(0x9FE7410)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerBitField_TypeDefinitionIndex = 34140;

	class DebugUIHandlerBitField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		Il2CppObject* toggles; // 0x68
		BitField* m_Field; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x78

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONACTION_OFFSET))(nullptr);
		}

		::System::Boolean GetValue(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERBITFIELD_NEXT_OFFSET))(nullptr);
		}

	};
}

