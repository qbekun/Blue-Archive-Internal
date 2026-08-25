#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ComputedStyle&; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class ComputedTransitionProperty&; }
namespace UnityEngine::UIElements { class TimeValue; }
namespace UnityEngine::UIElements { class EasingMode; }

#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_UPDATECOMPUTEDTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA40EDE0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_HASTRANSITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xA40F020)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_GETTRANSITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xA40F0D0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_GETORCOMPUTETRANSITIONPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xA40EE50)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_GETTRANSITIONHASHCODE_OFFSET UNITYSDK_OFFSET(0xA40F1D0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_SAMETRANSITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xA40FAA0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_SAMETRANSITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xA40FBB0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_SAMETRANSITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xA40FCD0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_COMPUTETRANSITIONPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xA40F750)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_GETWRAPPINGTRANSITIONDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_CONVERTTRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0xA40FDB0)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_CONVERTTRANSITIONFUNCTION_OFFSET UNITYSDK_OFFSET(0xA40FF10)
#define UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA410F10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ComputedTransitionUtils_TypeDefinitionIndex = 30596;

	class ComputedTransitionUtils : public Il2CppObject
	{
	public:
		Il2CppObject* s_ComputedTransitionsBuffer; // 0x0

		::System::Void UpdateComputedTransitions(::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_UPDATECOMPUTEDTRANSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasTransitionProperty(::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_HASTRANSITIONPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetTransitionProperty(::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::ComputedTransitionProperty&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::ComputedTransitionProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_GETTRANSITIONPROPERTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOrComputeTransitionPropertyData(::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_GETORCOMPUTETRANSITIONPROPERTYDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTransitionHashCode(::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_GETTRANSITIONHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SameTransitionProperty(::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_SAMETRANSITIONPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SameTransitionProperty(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_SAMETRANSITIONPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SameTransitionProperty(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_SAMETRANSITIONPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ComputeTransitionPropertyData(::UnityEngine::UIElements::ComputedStyle&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ComputedStyle&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_COMPUTETRANSITIONPROPERTYDATA_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetWrappingTransitionData(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_GETWRAPPINGTRANSITIONDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ConvertTransitionTime(::UnityEngine::UIElements::TimeValue* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::TimeValue*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_CONVERTTRANSITIONTIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ConvertTransitionFunction(::UnityEngine::UIElements::EasingMode* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::EasingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_CONVERTTRANSITIONFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMPUTEDTRANSITIONUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

