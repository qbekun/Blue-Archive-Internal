#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class SliderDirection; }

#define UNITYENGINE_UIELEMENTS_SLIDERINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3BF5A0)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3BF5D0)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_GET_PAGESIZE_OFFSET UNITYSDK_OFFSET(0xA3BF720)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_SET_PAGESIZE_OFFSET UNITYSDK_OFFSET(0xA3BF760)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_SLIDERLERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA3BF8D0)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_SLIDERNORMALIZEVALUE_OFFSET UNITYSDK_OFFSET(0xA3BF9F0)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_PARSESTRINGTOVALUE_OFFSET UNITYSDK_OFFSET(0xA3BFA10)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_COMPUTEVALUEANDDIRECTIONFROMCLICK_OFFSET UNITYSDK_OFFSET(0xA3BFA40)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_COMPUTEVALUEFROMKEY_OFFSET UNITYSDK_OFFSET(0xA3BFDC0)
#define UNITYENGINE_UIELEMENTS_SLIDERINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C0090)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int SliderInt_TypeDefinitionIndex = 30384;

	class SliderInt : public ::MXUnderCover::UCStage
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* labelUssClassName; // 0x8
		::System::String* inputUssClassName; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::UIElements::SliderDirection* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::UnityEngine::UIElements::SliderDirection*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Single get_pageSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_GET_PAGESIZE_OFFSET))(nullptr);
		}

		::System::Void set_pageSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_SET_PAGESIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 SliderLerpUnclamped(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_SLIDERLERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single SliderNormalizeValue(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_SLIDERNORMALIZEVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ParseStringToValue(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_PARSESTRINGTOVALUE_OFFSET))(str, nullptr);
		}

		::System::Void ComputeValueAndDirectionFromClick(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_COMPUTEVALUEANDDIRECTIONFROMCLICK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ComputeValueFromKey(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_COMPUTEVALUEFROMKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_SLIDERINT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

