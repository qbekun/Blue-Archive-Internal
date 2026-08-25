#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Slider; }
namespace UnityEngine::UIElements { class RepeatButton; }
namespace UnityEngine::UIElements { class SliderDirection; }

#define UNITYENGINE_UIELEMENTS_SCROLLER_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA3B4530)
#define UNITYENGINE_UIELEMENTS_SCROLLER_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA3B45D0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_GET_SLIDER_OFFSET UNITYSDK_OFFSET(0xA3B4670)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SET_SLIDER_OFFSET UNITYSDK_OFFSET(0xA3B4680)
#define UNITYENGINE_UIELEMENTS_SCROLLER_GET_LOWBUTTON_OFFSET UNITYSDK_OFFSET(0xA3B46A0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SET_LOWBUTTON_OFFSET UNITYSDK_OFFSET(0xA3B46B0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_GET_HIGHBUTTON_OFFSET UNITYSDK_OFFSET(0xA3B46D0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SET_HIGHBUTTON_OFFSET UNITYSDK_OFFSET(0xA3B46E0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3B4700)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3B4730)
#define UNITYENGINE_UIELEMENTS_SCROLLER_GET_LOWVALUE_OFFSET UNITYSDK_OFFSET(0xA3B4760)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SET_LOWVALUE_OFFSET UNITYSDK_OFFSET(0xA3B47B0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_GET_HIGHVALUE_OFFSET UNITYSDK_OFFSET(0xA3B4810)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SET_HIGHVALUE_OFFSET UNITYSDK_OFFSET(0xA3B4860)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA3B48C0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B4AE0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B4B00)
#define UNITYENGINE_UIELEMENTS_SCROLLER_ADJUST_OFFSET UNITYSDK_OFFSET(0xA3B4F50)
#define UNITYENGINE_UIELEMENTS_SCROLLER_ONSLIDERVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xA3B4FC0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SCROLLPAGEUP_OFFSET UNITYSDK_OFFSET(0xA3B5070)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SCROLLPAGEDOWN_OFFSET UNITYSDK_OFFSET(0xA3B51F0)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SCROLLPAGEUP_OFFSET UNITYSDK_OFFSET(0xA3B5080)
#define UNITYENGINE_UIELEMENTS_SCROLLER_SCROLLPAGEDOWN_OFFSET UNITYSDK_OFFSET(0xA3B5200)
#define UNITYENGINE_UIELEMENTS_SCROLLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B5370)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Scroller_TypeDefinitionIndex = 30370;

	class Scroller : public Il2CppObject
	{
	public:
		Il2CppObject* valueChanged; // 0x3B0
		::UnityEngine::UIElements::Slider* _slider_k__BackingField; // 0x3B8
		::UnityEngine::UIElements::RepeatButton* _lowButton_k__BackingField; // 0x3C0
		::UnityEngine::UIElements::RepeatButton* _highButton_k__BackingField; // 0x3C8
		::System::String* ussClassName; // 0x0
		::System::String* horizontalVariantUssClassName; // 0x8
		::System::String* verticalVariantUssClassName; // 0x10
		::System::String* sliderUssClassName; // 0x18
		::System::String* lowButtonUssClassName; // 0x20
		::System::String* highButtonUssClassName; // 0x28

		::System::Void add_valueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_ADD_VALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_valueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_REMOVE_VALUECHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Slider* get_slider()
		{
			return (return (::UnityEngine::UIElements::Slider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_GET_SLIDER_OFFSET))(nullptr);
		}

		::System::Void set_slider(::UnityEngine::UIElements::Slider* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Slider*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SET_SLIDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::RepeatButton* get_lowButton()
		{
			return (return (::UnityEngine::UIElements::RepeatButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_GET_LOWBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_lowButton(::UnityEngine::UIElements::RepeatButton* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::RepeatButton*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SET_LOWBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::RepeatButton* get_highButton()
		{
			return (return (::UnityEngine::UIElements::RepeatButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_GET_HIGHBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_highButton(::UnityEngine::UIElements::RepeatButton* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::RepeatButton*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SET_HIGHBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_lowValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_GET_LOWVALUE_OFFSET))(nullptr);
		}

		::System::Void set_lowValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SET_LOWVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_highValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_GET_HIGHVALUE_OFFSET))(nullptr);
		}

		::System::Void set_highValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SET_HIGHVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_direction(::UnityEngine::UIElements::SliderDirection* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::SliderDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, Il2CppObject* arg, ::UnityEngine::UIElements::SliderDirection* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, Il2CppObject*, ::UnityEngine::UIElements::SliderDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Adjust(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_ADJUST_OFFSET))(arg, nullptr);
		}

		::System::Void OnSliderValueChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_ONSLIDERVALUECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ScrollPageUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SCROLLPAGEUP_OFFSET))(nullptr);
		}

		::System::Void ScrollPageDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SCROLLPAGEDOWN_OFFSET))(nullptr);
		}

		::System::Void ScrollPageUp(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SCROLLPAGEUP_OFFSET))(arg, nullptr);
		}

		::System::Void ScrollPageDown(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_SCROLLPAGEDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SCROLLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

