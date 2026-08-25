#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FED220)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FED2E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FED350)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x9FED230)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FED4C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FED3F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FED4D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FED540)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerIntField_TypeDefinitionIndex = 34158;

	class DebugUIHandlerIntField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		IntField* m_Field; // 0x68

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeValue(::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_CHANGEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINTFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

