#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FE9EE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEA610)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_3_OFFSET UNITYSDK_OFFSET(0x9FEA700)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_UPDATECOLOR_OFFSET UNITYSDK_OFFSET(0x9FEA550)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FEA810)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FEA840)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FEA890)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_2_OFFSET UNITYSDK_OFFSET(0x9FEA8C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x9FEA8E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_6_OFFSET UNITYSDK_OFFSET(0x9FEA900)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9FEA720)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_5_OFFSET UNITYSDK_OFFSET(0x9FEA960)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_1_OFFSET UNITYSDK_OFFSET(0x9FEA980)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEA9A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_1_OFFSET UNITYSDK_OFFSET(0x9FEA9C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x9FEA410)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_0_OFFSET UNITYSDK_OFFSET(0x9FEA9F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_7_OFFSET UNITYSDK_OFFSET(0x9FEAA50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_NEXT_OFFSET UNITYSDK_OFFSET(0x9FEAA70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_2_OFFSET UNITYSDK_OFFSET(0x9FEAB30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_4_OFFSET UNITYSDK_OFFSET(0x9FEAB90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FEABF0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerColor_TypeDefinitionIndex = 34146;

	class DebugUIHandlerColor : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::UI::Image* colorImage; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldR; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldG; // 0x78
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldB; // 0x80
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldA; // 0x88
		ColorField* m_Field; // 0x90
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x98

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _SetWidget_b__9_3(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_3_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_UPDATECOLOR_OFFSET))(nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Single _SetupSettings_b__11_2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_2_OFFSET))(nullptr);
		}

		::System::Single _SetupSettings_b__11_0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_0_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__9_6()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_6_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void _SetWidget_b__9_5(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_5_OFFSET))(arg, nullptr);
		}

		::System::Single _SetupSettings_b__11_1()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETUPSETTINGS_B__11_1_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__9_1(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_SETUPSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Single _SetWidget_b__9_0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_0_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__9_7(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_7_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_NEXT_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__9_2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_2_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__9_4()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR__SETWIDGET_B__9_4_OFFSET))(nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERCOLOR_ONACTION_OFFSET))(nullptr);
		}

	};
}

