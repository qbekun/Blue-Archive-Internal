#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class PropertyName; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class Label; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class CustomStyleResolvedEvent; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }
namespace UnityEngine { class Rect; }

#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_VISUALINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_VISUALINPUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_LABELELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_LABELELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_SHOWMIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_MIXEDVALUELABEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_ONATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_ONCUSTOMSTYLERESOLVED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_ONINSPECTORFIELDGEOMETRYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_ALIGNLABEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_UPDATEMIXEDVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_ONVIEWDATAREADY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_GETTOOLTIPRECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEFIELD`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseField`1_TypeDefinitionIndex = 30295;

	class BaseField`1 : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x0
		::System::String* inputUssClassName; // 0x0
		::System::String* noLabelVariantUssClassName; // 0x0
		::System::String* labelDraggerVariantUssClassName; // 0x0
		::System::String* mixedValueLabelUssClassName; // 0x0
		::System::String* alignedFieldUssClassName; // 0x0
		::System::String* inspectorFieldUssClassName; // 0x0
		::System::String* mixedValueString; // 0x0
		::UnityEngine::PropertyName* serializedPropertyCopyName; // 0x0
		Il2CppObject* s_LabelWidthRatioProperty; // 0x0
		Il2CppObject* s_LabelExtraPaddingProperty; // 0x0
		Il2CppObject* s_LabelBaseMinWidthProperty; // 0x0
		::System::Single m_LabelWidthRatio; // 0x0
		::System::Single m_LabelExtraPadding; // 0x0
		::System::Single m_LabelBaseMinWidth; // 0x0
		::UnityEngine::UIElements::VisualElement* m_VisualInput; // 0x0
		Il2CppObject* m_Value; // 0x0
		::UnityEngine::UIElements::Label* _labelElement_k__BackingField; // 0x0
		::System::Boolean m_ShowMixedValue; // 0x0
		::UnityEngine::UIElements::Label* m_MixedValueLabel; // 0x0
		::UnityEngine::UIElements::VisualElement* m_CachedInspectorElement; // 0x0
		::System::Int32 m_CachedListAndFoldoutDepth; // 0x0

		::UnityEngine::UIElements::VisualElement* get_visualInput()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_VISUALINPUT_OFFSET))(nullptr);
		}

		::System::Void set_visualInput(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_VISUALINPUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_rawValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_RAWVALUE_OFFSET))(nullptr);
		}

		::System::Void set_rawValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_RAWVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Label* get_labelElement()
		{
			return (return (::UnityEngine::UIElements::Label*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_LABELELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_labelElement(::UnityEngine::UIElements::Label* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Label*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_LABELELEMENT_OFFSET))(arg, nullptr);
		}

		::System::String* get_label()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_LABEL_OFFSET))(nullptr);
		}

		::System::Void set_label(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_SET_LABEL_OFFSET))(str, nullptr);
		}

		::System::Boolean get_showMixedValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_SHOWMIXEDVALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Label* get_mixedValueLabel()
		{
			return (return (::UnityEngine::UIElements::Label*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_GET_MIXEDVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_ONATTACHTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_ONCUSTOMSTYLERESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_ONINSPECTORFIELDGEOMETRYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void AlignLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_ALIGNLABEL_OFFSET))(nullptr);
		}

		::System::Void UpdateMixedValueContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_UPDATEMIXEDVALUECONTENT_OFFSET))(nullptr);
		}

		::System::Void SetValueWithoutNotify(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void OnViewDataReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_ONVIEWDATAREADY_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* GetTooltipRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_GETTOOLTIPRECT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEFIELD`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

