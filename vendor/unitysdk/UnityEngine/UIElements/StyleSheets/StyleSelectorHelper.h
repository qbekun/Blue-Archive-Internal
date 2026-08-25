#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class MatchResultInfo; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class StyleSelector; }
namespace UnityEngine::UIElements { class StyleComplexSelector; }
namespace UnityEngine::UIElements { class StyleMatchingContext; }
namespace UnityEngine::UIElements::StyleSheets { class SelectorMatchRecord&; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESELECTORHELPER_MATCHESSELECTOR_OFFSET UNITYSDK_OFFSET(0xA370660)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESELECTORHELPER_MATCHRIGHTTOLEFT_OFFSET UNITYSDK_OFFSET(0xA370950)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESELECTORHELPER_FASTLOOKUP_OFFSET UNITYSDK_OFFSET(0xA370C40)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESELECTORHELPER_FINDMATCHES_OFFSET UNITYSDK_OFFSET(0xA370E70)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSelectorHelper_TypeDefinitionIndex = 30808;

	class StyleSelectorHelper : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheets::MatchResultInfo* MatchesSelector(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSelector* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::MatchResultInfo*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSelector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESELECTORHELPER_MATCHESSELECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean MatchRightToLeft(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleComplexSelector* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleComplexSelector*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESELECTORHELPER_MATCHRIGHTTOLEFT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FastLookup(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::UIElements::StyleMatchingContext* arg, ::System::String* str, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::UIElements::StyleMatchingContext*, ::System::String*, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESELECTORHELPER_FASTLOOKUP_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Void FindMatches(::UnityEngine::UIElements::StyleMatchingContext* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleMatchingContext*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESELECTORHELPER_FINDMATCHES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

