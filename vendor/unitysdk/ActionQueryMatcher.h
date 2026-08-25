#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class RuleMatcher; }
namespace UnityEngine::UIElements { class VisualElement; }

#define ACTIONQUERYMATCHER_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ACTIONQUERYMATCHER_ONRULEMATCHEDELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ACTIONQUERYMATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ActionQueryMatcher_TypeDefinitionIndex = 30234;

	class ActionQueryMatcher : public Il2CppObject
	{
	public:
		Il2CppObject* _callBack_k__BackingField; // 0x0

		Il2CppObject* get_callBack()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONQUERYMATCHER_GET_CALLBACK_OFFSET))(nullptr);
		}

		::System::Boolean OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::RuleMatcher*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIONQUERYMATCHER_ONRULEMATCHEDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIONQUERYMATCHER_.CTOR_OFFSET))(nullptr);
		}

	};

