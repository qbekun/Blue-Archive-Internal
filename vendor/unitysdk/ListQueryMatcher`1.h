#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class RuleMatcher; }
namespace UnityEngine::UIElements { class VisualElement; }

#define LISTQUERYMATCHER`1_GET_MATCHES_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTQUERYMATCHER`1_SET_MATCHES_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTQUERYMATCHER`1_ONRULEMATCHEDELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTQUERYMATCHER`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTQUERYMATCHER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ListQueryMatcher`1_TypeDefinitionIndex = 30233;

	class ListQueryMatcher`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _matches_k__BackingField; // 0x0

		Il2CppObject* get_matches()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTQUERYMATCHER`1_GET_MATCHES_OFFSET))(nullptr);
		}

		::System::Void set_matches(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTQUERYMATCHER`1_SET_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::RuleMatcher*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + LISTQUERYMATCHER`1_ONRULEMATCHEDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTQUERYMATCHER`1_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTQUERYMATCHER`1_.CTOR_OFFSET))(nullptr);
		}

	};

