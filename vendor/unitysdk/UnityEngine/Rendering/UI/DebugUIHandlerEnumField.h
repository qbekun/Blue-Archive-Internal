#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FEB0C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FEB190)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FEB2E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEB300)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEB450)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FEB4F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEB680)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FEB6A0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerEnumField_TypeDefinitionIndex = 34149;

	class DebugUIHandlerEnumField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nextButtonText; // 0x58
		::UnityEngine::UI::Text* previousButtonText; // 0x60
		::UnityEngine::UI::Text* nameLabel; // 0x68
		::UnityEngine::UI::Text* valueLabel; // 0x70
		EnumField* m_Field; // 0x78

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONACTION_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERENUMFIELD_ONINCREMENT_OFFSET))(arg, nullptr);
		}

	};
}

