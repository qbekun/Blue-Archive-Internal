#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class RuleMatcher; }
namespace UnityEngine::UIElements { class VisualElement; }

#define FIRSTQUERYMATCHER_ONRULEMATCHEDELEMENT_OFFSET UNITYSDK_OFFSET(0xA3853A0)
#define FIRSTQUERYMATCHER_CREATENEW_OFFSET UNITYSDK_OFFSET(0xA3853D0)
#define FIRSTQUERYMATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA385420)
#define FIRSTQUERYMATCHER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA385430)

	inline static constexpr unsigned int FirstQueryMatcher_TypeDefinitionIndex = 30231;

	class FirstQueryMatcher : public Il2CppObject
	{
	public:
		FirstQueryMatcher* Instance; // 0x0

		::System::Boolean OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::RuleMatcher*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + FIRSTQUERYMATCHER_ONRULEMATCHEDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		SingleQueryMatcher* CreateNew()
		{
			return (return (SingleQueryMatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIRSTQUERYMATCHER_CREATENEW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIRSTQUERYMATCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIRSTQUERYMATCHER_.CCTOR_OFFSET))(nullptr);
		}

	};

