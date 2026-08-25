#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class Translate; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class Translate&; }

#define VALUESTRANSLATE_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0xA37B590)
#define VALUESTRANSLATE_ISSAME_OFFSET UNITYSDK_OFFSET(0xA37B5A0)
#define VALUESTRANSLATE_CONVERTUNITS_OFFSET UNITYSDK_OFFSET(0xA37B5E0)
#define VALUESTRANSLATE_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37B610)
#define VALUESTRANSLATE_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0xA37B700)
#define VALUESTRANSLATE_LERP_OFFSET UNITYSDK_OFFSET(0xA37B7C0)
#define VALUESTRANSLATE_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0xA37B8D0)
#define VALUESTRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37BB40)

	inline static constexpr unsigned int ValuesTranslate_TypeDefinitionIndex = 30205;

	class ValuesTranslate : public ::System::Net::NetworkInformation::IPAddressInformation
	{
	public:
		Il2CppObject* _SameFunc_k__BackingField; // 0x88

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSLATE_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean IsSame(::UnityEngine::UIElements::Translate* arg, ::UnityEngine::UIElements::Translate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Translate*, ::UnityEngine::UIElements::Translate*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSLATE_ISSAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ConvertUnits(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::Translate&* arg, ::UnityEngine::UIElements::Translate&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::Translate&*, ::UnityEngine::UIElements::Translate&*, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSLATE_CONVERTUNITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSLATE_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSLATE_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Translate* Lerp(::UnityEngine::UIElements::Translate* arg, ::UnityEngine::UIElements::Translate* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Translate*(*)(::UnityEngine::UIElements::Translate*, ::UnityEngine::UIElements::Translate*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSLATE_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSLATE_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUESTRANSLATE_.CTOR_OFFSET))(nullptr);
		}

	};

