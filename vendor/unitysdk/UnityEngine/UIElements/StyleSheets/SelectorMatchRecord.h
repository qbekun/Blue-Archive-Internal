#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleComplexSelector; }
namespace UnityEngine::UIElements::StyleSheets { class SelectorMatchRecord; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SELECTORMATCHRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA370550)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_SELECTORMATCHRECORD_COMPARE_OFFSET UNITYSDK_OFFSET(0xA370580)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int SelectorMatchRecord_TypeDefinitionIndex = 30807;

	class SelectorMatchRecord : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleSheet* sheet; // 0x10
		::System::Int32 styleSheetIndexInStack; // 0x18
		::UnityEngine::UIElements::StyleComplexSelector* complexSelector; // 0x20

		::System::Void .ctor(::UnityEngine::UIElements::StyleSheet* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SELECTORMATCHRECORD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord* arg, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord*, ::UnityEngine::UIElements::StyleSheets::SelectorMatchRecord*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_SELECTORMATCHRECORD_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

