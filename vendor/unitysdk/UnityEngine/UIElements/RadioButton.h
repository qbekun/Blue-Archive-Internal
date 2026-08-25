#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3B28F0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3B2930)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B2AF0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B2B00)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_INITLABEL_OFFSET UNITYSDK_OFFSET(0xA3B2D30)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_TOGGLEVALUE_OFFSET UNITYSDK_OFFSET(0xA3B2DB0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xA3B2DF0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3B2E10)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_UPDATECHECKMARK_OFFSET UNITYSDK_OFFSET(0xA3B29F0)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_UPDATEMIXEDVALUECONTENT_OFFSET UNITYSDK_OFFSET(0xA3B2E30)
#define UNITYENGINE_UIELEMENTS_RADIOBUTTON_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B2ED0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int RadioButton_TypeDefinitionIndex = 30361;

	class RadioButton : public ::TriInspector::HideReferencePickerAttribute
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x8
		::System::String* inputUssClassName; // 0x10
		::System::String* checkmarkBackgroundUssClassName; // 0x18
		::System::String* checkmarkUssClassName; // 0x20
		::System::String* textUssClassName; // 0x28
		::UnityEngine::UIElements::VisualElement* m_CheckmarkBackground; // 0x428

		::System::Boolean get_value()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void InitLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_INITLABEL_OFFSET))(nullptr);
		}

		::System::Void ToggleValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_TOGGLEVALUE_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCheckmark()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_UPDATECHECKMARK_OFFSET))(nullptr);
		}

		::System::Void UpdateMixedValueContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_UPDATEMIXEDVALUECONTENT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_RADIOBUTTON_.CCTOR_OFFSET))(nullptr);
		}

	};
}

