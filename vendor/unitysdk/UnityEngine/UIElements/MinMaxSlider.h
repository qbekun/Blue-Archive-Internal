#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_DRAGELEMENT_OFFSET UNITYSDK_OFFSET(0xA3ADDE0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_DRAGELEMENT_OFFSET UNITYSDK_OFFSET(0xA3ADDF0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_DRAGMINTHUMB_OFFSET UNITYSDK_OFFSET(0xA3ADE10)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_DRAGMINTHUMB_OFFSET UNITYSDK_OFFSET(0xA3ADE20)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_DRAGMAXTHUMB_OFFSET UNITYSDK_OFFSET(0xA3ADE40)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_DRAGMAXTHUMB_OFFSET UNITYSDK_OFFSET(0xA3ADE50)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_CLAMPEDDRAGGER_OFFSET UNITYSDK_OFFSET(0xA3ADE70)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_CLAMPEDDRAGGER_OFFSET UNITYSDK_OFFSET(0xA3ADE80)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0xA3ADEA0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0xA3ADEC0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0xA3AE000)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0xA3AE030)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3AE100)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3AE140)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3AE1F0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_LOWLIMIT_OFFSET UNITYSDK_OFFSET(0xA3AFCA0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_LOWLIMIT_OFFSET UNITYSDK_OFFSET(0xA3AFCB0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_HIGHLIMIT_OFFSET UNITYSDK_OFFSET(0xA3AFE20)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_HIGHLIMIT_OFFSET UNITYSDK_OFFSET(0xA3AFE30)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3AFFA0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3AFFD0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_CLAMPVALUES_OFFSET UNITYSDK_OFFSET(0xA3ADF90)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_UPDATEDRAGELEMENTPOSITION_OFFSET UNITYSDK_OFFSET(0xA3B06E0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_UPDATEDRAGELEMENTPOSITION_OFFSET UNITYSDK_OFFSET(0xA3AE2A0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SLIDERLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA3B0790)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SLIDERNORMALIZEVALUE_OFFSET UNITYSDK_OFFSET(0xA3B0780)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_COMPUTEVALUEFROMPOSITION_OFFSET UNITYSDK_OFFSET(0xA3B07A0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0xA3B0980)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SETSLIDERVALUEFROMDRAG_OFFSET UNITYSDK_OFFSET(0xA3B0B00)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SETSLIDERVALUEFROMCLICK_OFFSET UNITYSDK_OFFSET(0xA3B0D90)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_COMPUTEVALUEFROMDRAGGINGTHUMB_OFFSET UNITYSDK_OFFSET(0xA3B0BA0)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_UPDATEMIXEDVALUECONTENT_OFFSET UNITYSDK_OFFSET(0xA3B1060)
#define UNITYENGINE_UIELEMENTS_MINMAXSLIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B1070)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MinMaxSlider_TypeDefinitionIndex = 30351;

	class MinMaxSlider : public ::MXUnderCover::UCRuntimeObjectHandler
	{
	public:
		::UnityEngine::UIElements::VisualElement* _dragElement_k__BackingField; // 0x408
		::UnityEngine::UIElements::VisualElement* _dragMinThumb_k__BackingField; // 0x410
		::UnityEngine::UIElements::VisualElement* _dragMaxThumb_k__BackingField; // 0x418
		Il2CppObject* _clampedDragger_k__BackingField; // 0x420
		::UnityEngine::Vector2* m_DragElementStartPos; // 0x428
		::UnityEngine::Vector2* m_ValueStartPos; // 0x430
		::UnityEngine::Rect* m_DragMinThumbRect; // 0x438
		::UnityEngine::Rect* m_DragMaxThumbRect; // 0x448
		DragState* m_DragState; // 0x458
		::System::Single m_MinLimit; // 0x45C
		::System::Single m_MaxLimit; // 0x460
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x8
		::System::String* inputUssClassName; // 0x10
		::System::String* trackerUssClassName; // 0x18
		::System::String* draggerUssClassName; // 0x20
		::System::String* minThumbUssClassName; // 0x28
		::System::String* maxThumbUssClassName; // 0x30

		::UnityEngine::UIElements::VisualElement* get_dragElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_DRAGELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_dragElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_DRAGELEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_dragMinThumb()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_DRAGMINTHUMB_OFFSET))(nullptr);
		}

		::System::Void set_dragMinThumb(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_DRAGMINTHUMB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_dragMaxThumb()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_DRAGMAXTHUMB_OFFSET))(nullptr);
		}

		::System::Void set_dragMaxThumb(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_DRAGMAXTHUMB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_clampedDragger()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_CLAMPEDDRAGGER_OFFSET))(nullptr);
		}

		::System::Void set_clampedDragger(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_CLAMPEDDRAGGER_OFFSET))(arg, nullptr);
		}

		::System::Single get_minValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Void set_minValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_MINVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_maxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Void set_maxValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_MAXVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_value()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Single get_lowLimit()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_LOWLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_lowLimit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_LOWLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Single get_highLimit()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_GET_HIGHLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_highLimit(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SET_HIGHLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* ClampValues(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_CLAMPVALUES_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_UPDATEDRAGELEMENTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDragElementPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_UPDATEDRAGELEMENTPOSITION_OFFSET))(nullptr);
		}

		::System::Single SliderLerpUnclamped(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SLIDERLERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single SliderNormalizeValue(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SLIDERNORMALIZEVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ComputeValueFromPosition(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_COMPUTEVALUEFROMPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSliderValueFromDrag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SETSLIDERVALUEFROMDRAG_OFFSET))(nullptr);
		}

		::System::Void SetSliderValueFromClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_SETSLIDERVALUEFROMCLICK_OFFSET))(nullptr);
		}

		::System::Void ComputeValueFromDraggingThumb(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_COMPUTEVALUEFROMDRAGGINGTHUMB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateMixedValueContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_UPDATEMIXEDVALUECONTENT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MINMAXSLIDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

