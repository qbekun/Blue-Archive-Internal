#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class SliderDirection; }

#define UNITYENGINE_UIELEMENTS_SLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3BE6F0)
#define UNITYENGINE_UIELEMENTS_SLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3B4F20)
#define UNITYENGINE_UIELEMENTS_SLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3BE720)
#define UNITYENGINE_UIELEMENTS_SLIDER_SLIDERLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA3BE890)
#define UNITYENGINE_UIELEMENTS_SLIDER_SLIDERNORMALIZEVALUE_OFFSET UNITYSDK_OFFSET(0xA3BEBC0)
#define UNITYENGINE_UIELEMENTS_SLIDER_PARSESTRINGTOVALUE_OFFSET UNITYSDK_OFFSET(0xA3BEBD0)
#define UNITYENGINE_UIELEMENTS_SLIDER_COMPUTEVALUEFROMKEY_OFFSET UNITYSDK_OFFSET(0xA3BEC90)
#define UNITYENGINE_UIELEMENTS_SLIDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3BEE80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Slider_TypeDefinitionIndex = 30381;

	class Slider : public ::MXUnderCover::UCStageAsset
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x8
		::System::String* inputUssClassName; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::UnityEngine::UIElements::SliderDirection* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::UnityEngine::UIElements::SliderDirection*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Single arg, ::System::Single arg, ::UnityEngine::UIElements::SliderDirection* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Single, ::UnityEngine::UIElements::SliderDirection*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDER_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Single SliderLerpUnclamped(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDER_SLIDERLERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single SliderNormalizeValue(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDER_SLIDERNORMALIZEVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ParseStringToValue(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDER_PARSESTRINGTOVALUE_OFFSET))(str, nullptr);
		}

		::System::Void ComputeValueFromKey(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDER_COMPUTEVALUEFROMKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

