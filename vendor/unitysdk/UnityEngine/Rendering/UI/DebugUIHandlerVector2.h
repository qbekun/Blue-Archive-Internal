#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FEFA10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_2_OFFSET UNITYSDK_OFFSET(0x9FEFA40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9FEFA60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FEFB20)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEFB50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_NEXT_OFFSET UNITYSDK_OFFSET(0x9FEFC40)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_0_OFFSET UNITYSDK_OFFSET(0x9FEFD00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_1_OFFSET UNITYSDK_OFFSET(0x9FEFD50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_3_OFFSET UNITYSDK_OFFSET(0x9FEFD70)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FEFE00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEFE50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x9FF00E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FF0220)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_0_OFFSET UNITYSDK_OFFSET(0x9FF0250)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF0270)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_2_OFFSET UNITYSDK_OFFSET(0x9FF0290)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_1_OFFSET UNITYSDK_OFFSET(0x9FF02E0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVector2_TypeDefinitionIndex = 34170;

	class DebugUIHandlerVector2 : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldX; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldY; // 0x70
		Vector2Field* m_Field; // 0x78
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x80

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Single _SetupSettings_b__8_2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_2_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONACTION_OFFSET))(nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_NEXT_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__6_0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_0_OFFSET))(nullptr);
		}

		::System::Single _SetupSettings_b__8_1()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_1_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__6_3(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_3_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_SETUPSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Single _SetupSettings_b__8_0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETUPSETTINGS_B__8_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2_.CTOR_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__6_2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_2_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__6_1(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR2__SETWIDGET_B__6_1_OFFSET))(arg, nullptr);
		}

	};
}

