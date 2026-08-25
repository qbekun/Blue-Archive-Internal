#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::Rendering::UI { class DebugUIHandlerWidget; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONDECREMENT_OFFSET UNITYSDK_OFFSET(0x9FECD80)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONSELECTION_OFFSET UNITYSDK_OFFSET(0x9FECE80)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FECEF0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_UPDATEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x9FECF10)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x9FECD90)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONINCREMENT_OFFSET UNITYSDK_OFFSET(0x9FED010)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_INIT_OFFSET UNITYSDK_OFFSET(0x9FEA9E0)
#define UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONDESELECTION_OFFSET UNITYSDK_OFFSET(0x9FED020)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIHandlerIndirectFloatField_TypeDefinitionIndex = 34156;

	class DebugUIHandlerIndirectFloatField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Text* nameLabel; // 0x58
		::UnityEngine::UI::Text* valueLabel; // 0x60
		Il2CppObject* getter; // 0x68
		Il2CppObject* setter; // 0x70
		Il2CppObject* incStepGetter; // 0x78
		Il2CppObject* incStepMultGetter; // 0x80
		Il2CppObject* decimalsGetter; // 0x88

		::System::Void OnDecrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONDECREMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnSelection(::System::Boolean arg, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONSELECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_UPDATEVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void ChangeValue(::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_CHANGEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnIncrement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONINCREMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_INIT_OFFSET))(nullptr);
		}

		::System::Void OnDeselection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIHANDLERINDIRECTFLOATFIELD_ONDESELECTION_OFFSET))(nullptr);
		}

	};
}

