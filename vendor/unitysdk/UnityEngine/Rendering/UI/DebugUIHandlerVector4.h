#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_0_OFFSET UNITYSDK_OFFSET(0x9FF0DC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_NEXT_OFFSET UNITYSDK_OFFSET(0x9FF0DE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_1_OFFSET UNITYSDK_OFFSET(0x9FF0EA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FF0FA0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x9FF1440)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FF1580)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FF15B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_0_OFFSET UNITYSDK_OFFSET(0x9FF15E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_1_OFFSET UNITYSDK_OFFSET(0x9FF1640)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF1660)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_6_OFFSET UNITYSDK_OFFSET(0x9FF1680)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_7_OFFSET UNITYSDK_OFFSET(0x9FF16E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_2_OFFSET UNITYSDK_OFFSET(0x9FF1700)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FF1720)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_2_OFFSET UNITYSDK_OFFSET(0x9FF1750)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9FF0EC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_5_OFFSET UNITYSDK_OFFSET(0x9FF17B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FF17D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_4_OFFSET UNITYSDK_OFFSET(0x9FF1820)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_3_OFFSET UNITYSDK_OFFSET(0x9FF1880)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FF18A0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVector4_TypeDefinitionIndex = 34172;

	class DebugUIHandlerVector4 : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldX; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldY; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldZ; // 0x78
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldW; // 0x80
		Vector4Field* m_Field; // 0x88
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x90

		::System::Single _SetupSettings_b__10_0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_0_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_NEXT_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__8_1(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETUPSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONACTION_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__8_0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_0_OFFSET))(nullptr);
		}

		::System::Single _SetupSettings_b__10_1()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_1_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_.CTOR_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__8_6()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_6_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__8_7(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_7_OFFSET))(arg, nullptr);
		}

		::System::Single _SetupSettings_b__10_2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETUPSETTINGS_B__10_2_OFFSET))(nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Single _SetWidget_b__8_2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_2_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_SETVALUE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void _SetWidget_b__8_5(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_5_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__8_4()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_4_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__8_3(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4__SETWIDGET_B__8_3_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR4_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

