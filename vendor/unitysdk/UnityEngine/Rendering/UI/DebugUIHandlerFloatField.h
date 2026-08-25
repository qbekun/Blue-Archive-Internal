#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FEBF60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FEC030)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEC040)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FEC060)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEC0D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x9FEBF70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEC220)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FEC170)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerFloatField_TypeDefinitionIndex = 34152;

	class DebugUIHandlerFloatField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		FloatField* m_Field; // 0x68

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeValue(::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_CHANGEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERFLOATFIELD_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

	};
}

