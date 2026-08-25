#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class Length&; }

#define VALUESLENGTH_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA3798B0)
#define VALUESLENGTH_ISSAME_OFFSET UNITYSDK_OFFSET(0xA3798C0)
#define VALUESLENGTH_CONVERTUNITS_OFFSET UNITYSDK_OFFSET(0xA379970)
#define VALUESLENGTH_LERP_OFFSET UNITYSDK_OFFSET(0xA3799B0)
#define VALUESLENGTH_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA3799F0)
#define VALUESLENGTH_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA379AC0)
#define VALUESLENGTH_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA379B90)
#define VALUESLENGTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA379C30)

	inline static constexpr unsigned int ValuesLength_TypeDefinitionIndex = 30196;

	class ValuesLength : public <>c__DisplayClass41_0
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESLENGTH_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::Length* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::Length*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESLENGTH_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ConvertUnits(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Length&* arg, ::UnityEngine::UIElements::Length&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Length&*, ::UnityEngine::UIElements::Length&*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESLENGTH_CONVERTUNITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Length* Lerp(::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::Length* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::Length*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESLENGTH_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESLENGTH_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESLENGTH_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESLENGTH_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESLENGTH_.CTOR_OFFSET))(nullptr);
		}

	};

