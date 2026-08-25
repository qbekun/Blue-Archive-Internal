#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements::StyleSheets { class StyleEnumType; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA362220)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYUTIL_ISANIMATABLE_OFFSET UNITYSDK_OFFSET(0xA364020)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYUTIL_TRYGETENUMINTVALUE_OFFSET UNITYSDK_OFFSET(0xA3640C0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYUTIL_ISMATCHINGSHORTHAND_OFFSET UNITYSDK_OFFSET(0xA364F00)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StylePropertyUtil_TypeDefinitionIndex = 30793;

	class StylePropertyUtil : public Il2CppObject
	{
	public:
		Il2CppObject* s_AnimatablePropertiesHash; // 0x0
		Il2CppObject* s_NameToId; // 0x8
		Il2CppObject* s_IdToName; // 0x10
		::Il2CppArray<::System::Object*>* s_AnimatableProperties; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYUTIL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsAnimatable(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYUTIL_ISANIMATABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetEnumIntValue(::UnityEngine::UIElements::StyleSheets::StyleEnumType* arg, ::System::String* str, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StyleEnumType*, ::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYUTIL_TRYGETENUMINTVALUE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean IsMatchingShorthand(::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLEPROPERTYUTIL_ISMATCHINGSHORTHAND_OFFSET))(arg, arg, nullptr);
		}

	};
}

