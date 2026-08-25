#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class TransformOrigin; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class TransformOrigin&; }

#define VALUESTRANSFORMORIGIN_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA37BBE0)
#define VALUESTRANSFORMORIGIN_ISSAME_OFFSET UNITYSDK_OFFSET(0xA37BBF0)
#define VALUESTRANSFORMORIGIN_CONVERTUNITS_OFFSET UNITYSDK_OFFSET(0xA37BC30)
#define VALUESTRANSFORMORIGIN_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37BC60)
#define VALUESTRANSFORMORIGIN_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37BD50)
#define VALUESTRANSFORMORIGIN_LERP_OFFSET UNITYSDK_OFFSET(0xA37BE10)
#define VALUESTRANSFORMORIGIN_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA37BF20)
#define VALUESTRANSFORMORIGIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37C180)

	inline static constexpr unsigned int ValuesTransformOrigin_TypeDefinitionIndex = 30206;

	class ValuesTransformOrigin : public ::System::Net::NetworkInformation::DuplicateAddressDetectionState
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSFORMORIGIN_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::UnityEngine::UIElements::TransformOrigin* arg, ::UnityEngine::UIElements::TransformOrigin* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TransformOrigin*, ::UnityEngine::UIElements::TransformOrigin*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSFORMORIGIN_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ConvertUnits(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::TransformOrigin&* arg, ::UnityEngine::UIElements::TransformOrigin&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::TransformOrigin&*, ::UnityEngine::UIElements::TransformOrigin&*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSFORMORIGIN_CONVERTUNITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSFORMORIGIN_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSFORMORIGIN_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TransformOrigin* Lerp(::UnityEngine::UIElements::TransformOrigin* arg, ::UnityEngine::UIElements::TransformOrigin* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::TransformOrigin*(*)(::UnityEngine::UIElements::TransformOrigin*, ::UnityEngine::UIElements::TransformOrigin*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSFORMORIGIN_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSFORMORIGIN_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSFORMORIGIN_.CTOR_OFFSET))(nullptr);
		}

	};

