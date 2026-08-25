#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class UIFoldout; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerIndirectFloatField; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerContainer; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FF0370)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_5_OFFSET UNITYSDK_OFFSET(0x9FF03A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FF04B0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FF04E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_2_OFFSET UNITYSDK_OFFSET(0x9FF05D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_1_OFFSET UNITYSDK_OFFSET(0x9FF05F0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_1_OFFSET UNITYSDK_OFFSET(0x9FF0610)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FF0630)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONACTION_OFFSET UNITYSDK_OFFSET(0x9FF0B00)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9FF03C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF0B30)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_0_OFFSET UNITYSDK_OFFSET(0x9FF0B50)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_2_OFFSET UNITYSDK_OFFSET(0x9FF0BB0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FF0C10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_4_OFFSET UNITYSDK_OFFSET(0x9FF0C60)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_3_OFFSET UNITYSDK_OFFSET(0x9FF0CC0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_NEXT_OFFSET UNITYSDK_OFFSET(0x9FF0CE0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETUPSETTINGS_OFFSET UNITYSDK_OFFSET(0x9FF09C0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_0_OFFSET UNITYSDK_OFFSET(0x9FF0DA0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerVector3_TypeDefinitionIndex = 34171;

	class DebugUIHandlerVector3 : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::Rendering::UI::UIFoldout* valueToggle; // 0x60
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldX; // 0x68
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldY; // 0x70
		::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* fieldZ; // 0x78
		Vector3Field* m_Field; // 0x80
		::UnityEngine::Rendering::UI::DebugUIHandlerContainer* m_Container; // 0x88

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void _SetWidget_b__7_5(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_5_OFFSET))(arg, nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Single _SetupSettings_b__9_2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_2_OFFSET))(nullptr);
		}

		::System::Single _SetupSettings_b__9_1()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_1_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__7_1(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETWIDGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnAction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONACTION_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::Single arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_.CTOR_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__7_0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_0_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__7_2()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_2_OFFSET))(nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Single _SetWidget_b__7_4()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_4_OFFSET))(nullptr);
		}

		::System::Void _SetWidget_b__7_3(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETWIDGET_B__7_3_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::UI::DebugUIHandlerWidget* Next()
		{
			return (return (::UnityEngine::Rendering::UI::DebugUIHandlerWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_NEXT_OFFSET))(nullptr);
		}

		::System::Void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3_SETUPSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Single _SetupSettings_b__9_0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERVECTOR3__SETUPSETTINGS_B__9_0_OFFSET))(nullptr);
		}

	};
}

