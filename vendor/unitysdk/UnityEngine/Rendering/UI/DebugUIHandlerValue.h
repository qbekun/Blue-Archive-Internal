#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FEF600)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FEF670)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEF680)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FEF710)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEF7B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEF7D0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerValue_TypeDefinitionIndex = 34168;

	class DebugUIHandlerValue : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		Value* m_Field; // 0x68
		::System::Single m_Timer; // 0x70

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVALUE_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

