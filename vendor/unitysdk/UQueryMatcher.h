#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class RuleMatcher; }
namespace UnityEngine::UIElements::StyleSheets { class MatchResultInfo; }

#define UQUERYMATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA384F90)
#define UQUERYMATCHER_TRAVERSE_OFFSET UNITYSDK_OFFSET(0xA384FA0)
#define UQUERYMATCHER_ONRULEMATCHEDELEMENT_OFFSET UNITYSDK_OFFSET(0xA384FB0)
#define UQUERYMATCHER_NOPROCESSRESULT_OFFSET UNITYSDK_OFFSET(0xA384FC0)
#define UQUERYMATCHER_TRAVERSERECURSIVE_OFFSET UNITYSDK_OFFSET(0xA384FD0)
#define UQUERYMATCHER_RUN_OFFSET UNITYSDK_OFFSET(0xA385210)

	inline static constexpr unsigned int UQueryMatcher_TypeDefinitionIndex = 30229;

	class UQueryMatcher : public Il2CppObject
	{
	public:
		Il2CppObject* m_Matchers; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UQUERYMATCHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Traverse(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UQUERYMATCHER_TRAVERSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnRuleMatchedElement(::UnityEngine::UIElements::RuleMatcher* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::RuleMatcher*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UQUERYMATCHER_ONRULEMATCHEDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NoProcessResult(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UQUERYMATCHER_NOPROCESSRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TraverseRecursive(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UQUERYMATCHER_TRAVERSERECURSIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Run(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UQUERYMATCHER_RUN_OFFSET))(arg, arg, nullptr);
		}

	};

