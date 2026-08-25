#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class TextField; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class SliderDirection; }
namespace UnityEngine::UIElements { class KeyDownEvent; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class FocusOutEvent; }

#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_DRAGCONTAINER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_DRAGCONTAINER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_DRAGELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_DRAGELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_DRAGBORDERELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_DRAGBORDERELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_INPUTTEXTFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_INPUTTEXTFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_LOWVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_LOWVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_HIGHVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_HIGHVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SETHIGHVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_PAGESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_PAGESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_SHOWINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_SHOWINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_CLAMPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_CLAMPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_CLAMPEDDRAGGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_CLAMPEDDRAGGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_CLAMP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GETCLAMPEDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_INVERTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_INVERTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_GETCLOSESTPOWEROFTEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_ROUNDTOMULTIPLEOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SLIDERLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SLIDERNORMALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_PARSESTRINGTOVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_COMPUTEVALUEFROMKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SLIDERLERPDIRECTIONALUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SETSLIDERVALUEFROMDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_COMPUTEVALUEANDDIRECTIONFROMDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SETSLIDERVALUEFROMCLICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_ONKEYDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_COMPUTEVALUEANDDIRECTIONFROMCLICK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_ADJUSTDRAGELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATEDRAGELEMENTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_ONVIEWDATAREADY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_SAMEVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATEDRAGELEMENTPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATETEXTFIELDVISIBILITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATETEXTFIELDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_ONTEXTFIELDFOCUSOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_ONTEXTFIELDVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATEMIXEDVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASESLIDER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseSlider`1_TypeDefinitionIndex = 30299;

	class BaseSlider`1 : public ::MXUnderCover::UCPreference
	{
	public:
		::UnityEngine::UIElements::VisualElement* _dragContainer_k__BackingField; // 0x0
		::UnityEngine::UIElements::VisualElement* _dragElement_k__BackingField; // 0x0
		::UnityEngine::UIElements::VisualElement* _dragBorderElement_k__BackingField; // 0x0
		::UnityEngine::UIElements::TextField* _inputTextField_k__BackingField; // 0x0
		Il2CppObject* m_LowValue; // 0x0
		Il2CppObject* m_HighValue; // 0x0
		::System::Single m_PageSize; // 0x0
		::System::Boolean m_ShowInputField; // 0x0
		::System::Boolean _clamped_k__BackingField; // 0x0
		Il2CppObject* _clampedDragger_k__BackingField; // 0x0
		::UnityEngine::Rect* m_DragElementStartPos; // 0x0
		::UnityEngine::UIElements::SliderDirection* m_Direction; // 0x0
		::System::Boolean m_Inverted; // 0x0
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x0
		::System::String* inputUssClassName; // 0x0
		::System::String* horizontalVariantUssClassName; // 0x0
		::System::String* verticalVariantUssClassName; // 0x0
		::System::String* dragContainerUssClassName; // 0x0
		::System::String* trackerUssClassName; // 0x0
		::System::String* draggerUssClassName; // 0x0
		::System::String* draggerBorderUssClassName; // 0x0
		::System::String* textFieldClassName; // 0x0

		::UnityEngine::UIElements::VisualElement* get_dragContainer()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_DRAGCONTAINER_OFFSET))(nullptr);
		}

		::System::Void set_dragContainer(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_DRAGCONTAINER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_dragElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_DRAGELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_dragElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_DRAGELEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_dragBorderElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_DRAGBORDERELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_dragBorderElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_DRAGBORDERELEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TextField* get_inputTextField()
		{
			return (return (::UnityEngine::UIElements::TextField*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_INPUTTEXTFIELD_OFFSET))(nullptr);
		}

		::System::Void set_inputTextField(::UnityEngine::UIElements::TextField* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextField*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_INPUTTEXTFIELD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_lowValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_LOWVALUE_OFFSET))(nullptr);
		}

		::System::Void set_lowValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_LOWVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_highValue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_HIGHVALUE_OFFSET))(nullptr);
		}

		::System::Void set_highValue(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_HIGHVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetHighValueWithoutNotify(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SETHIGHVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Single get_pageSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_PAGESIZE_OFFSET))(nullptr);
		}

		::System::Void set_pageSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_PAGESIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_showInputField()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_SHOWINPUTFIELD_OFFSET))(nullptr);
		}

		::System::Void set_showInputField(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_SHOWINPUTFIELD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_clamped()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_CLAMPED_OFFSET))(nullptr);
		}

		::System::Void set_clamped(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_CLAMPED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_clampedDragger()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_CLAMPEDDRAGGER_OFFSET))(nullptr);
		}

		::System::Void set_clampedDragger(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_CLAMPEDDRAGGER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Clamp(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetClampedValue(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GETCLAMPEDVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::SliderDirection* get_direction()
		{
			return (return (::UnityEngine::UIElements::SliderDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_direction(::UnityEngine::UIElements::SliderDirection* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::SliderDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_inverted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GET_INVERTED_OFFSET))(nullptr);
		}

		::System::Void set_inverted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SET_INVERTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::UIElements::SliderDirection* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::UnityEngine::UIElements::SliderDirection*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Single GetClosestPowerOfTen(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_GETCLOSESTPOWEROFTEN_OFFSET))(arg, nullptr);
		}

		::System::Single RoundToMultipleOf(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_ROUNDTOMULTIPLEOF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClampValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_CLAMPVALUE_OFFSET))(nullptr);
		}

		Il2CppObject* SliderLerpUnclamped(Il2CppObject* arg, Il2CppObject* arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SLIDERLERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single SliderNormalizeValue(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Single(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SLIDERNORMALIZEVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ParseStringToValue(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_PARSESTRINGTOVALUE_OFFSET))(str, nullptr);
		}

		::System::Void ComputeValueFromKey(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_COMPUTEVALUEFROMKEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SliderLerpDirectionalUnclamped(Il2CppObject* arg, Il2CppObject* arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SLIDERLERPDIRECTIONALUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetSliderValueFromDrag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SETSLIDERVALUEFROMDRAG_OFFSET))(nullptr);
		}

		::System::Void ComputeValueAndDirectionFromDrag(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_COMPUTEVALUEANDDIRECTIONFROMDRAG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetSliderValueFromClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SETSLIDERVALUEFROMCLICK_OFFSET))(nullptr);
		}

		::System::Void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_ONKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void ComputeValueAndDirectionFromClick(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_COMPUTEVALUEANDDIRECTIONFROMCLICK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AdjustDragElement(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_ADJUSTDRAGELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATEDRAGELEMENTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void OnViewDataReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_ONVIEWDATAREADY_OFFSET))(nullptr);
		}

		::System::Boolean SameValues(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_SAMEVALUES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateDragElementPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATEDRAGELEMENTPOSITION_OFFSET))(nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateTextFieldVisibility()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATETEXTFIELDVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void UpdateTextFieldValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATETEXTFIELDVALUE_OFFSET))(nullptr);
		}

		::System::Void OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusOutEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_ONTEXTFIELDFOCUSOUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnTextFieldValueChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_ONTEXTFIELDVALUECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMixedValueContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_UPDATEMIXEDVALUECONTENT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASESLIDER`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

