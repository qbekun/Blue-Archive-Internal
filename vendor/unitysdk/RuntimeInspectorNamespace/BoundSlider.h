#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Image; }
namespace RuntimeInspectorNamespace { class UISkin; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x957CB70)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_GET_BACKINGFIELD_OFFSET UNITYSDK_OFFSET(0x957CB80)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x95746D0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x957CB90)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x957CBC0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER__AWAKE_B__18_0_OFFSET UNITYSDK_OFFSET(0x957CBD0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x9574A00)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x957CBE0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x957CBF0)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x957CF80)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER__AWAKE_B__18_1_OFFSET UNITYSDK_OFFSET(0x957CF90)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_SETRANGE_OFFSET UNITYSDK_OFFSET(0x9575020)
#define RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_SLIDERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x957CFA0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int BoundSlider_TypeDefinitionIndex = 35682;

	class BoundSlider : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Slider* slider; // 0x18
		::UnityEngine::UI::Image* sliderBackground; // 0x20
		::UnityEngine::UI::Image* thumb; // 0x28
		::System::Boolean sliderFocused; // 0x30
		::System::Int32 m_skinVersion; // 0x34
		::RuntimeInspectorNamespace::UISkin* m_skin; // 0x38
		OnValueChangedDelegate* OnValueChanged; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Slider* get_BackingField()
		{
			return (return (::UnityEngine::UI::Slider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_GET_BACKINGFIELD_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_GET_VALUE_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::UISkin* get_Skin()
		{
			return (return (::RuntimeInspectorNamespace::UISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__18_0(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER__AWAKE_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_Skin(::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFocused()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_GET_ISFOCUSED_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__18_1(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER__AWAKE_B__18_1_OFFSET))(arg, nullptr);
		}

		::System::Void SetRange(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_SETRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SliderValueChanged(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_BOUNDSLIDER_SLIDERVALUECHANGED_OFFSET))(arg, nullptr);
		}

	};
}

