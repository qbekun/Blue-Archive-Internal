#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYCACHE_TRYGETSYNTAX_OFFSET UNITYSDK_OFFSET(0xA36A6F0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYCACHE_TRYGETNONTERMINALVALUE_OFFSET UNITYSDK_OFFSET(0xA36A790)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYCACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA36A830)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StylePropertyCache_TypeDefinitionIndex = 30796;

	class StylePropertyCache : public Il2CppObject
	{
	public:
		Il2CppObject* s_PropertySyntaxCache; // 0x0
		Il2CppObject* s_NonTerminalValues; // 0x8

		::System::Boolean TryGetSyntax(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYCACHE_TRYGETSYNTAX_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetNonTerminalValue(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYCACHE_TRYGETNONTERMINALVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYCACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

