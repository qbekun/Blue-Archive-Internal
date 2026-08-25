#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FEF2A0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FEF370)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FEF3E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x9FEF400)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FEF4D0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FEF4E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FEF550)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_SETWIDGET_OFFSET UNITYSDK_OFFSET(0x9FEF560)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerUIntField_TypeDefinitionIndex = 34167;

	class DebugUIHandlerUIntField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		UIntField* m_Field; // 0x68

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDESELECTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ChangeValue(::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_CHANGEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetWidget(Widget* arg)
		{
			((::System::Void(*)(Widget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERUINTFIELD_SETWIDGET_OFFSET))(arg, nullptr);
		}

	};
}

