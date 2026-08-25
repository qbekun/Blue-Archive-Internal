#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleRule; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0xA36C220)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0xA371380)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETPROPERTYID_OFFSET UNITYSDK_OFFSET(0xA3712A0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA371440)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetCache_TypeDefinitionIndex = 30811;

	class StyleSheetCache : public Il2CppObject
	{
	public:
		SheetHandleKeyComparer* s_Comparer; // 0x0
		Il2CppObject* s_RulePropertyIdsCache; // 0x8

		::Il2CppArray<::System::Object*>* GetPropertyIds(::UnityEngine::UIElements::StyleSheet* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::UIElements::StyleSheet*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETPROPERTYIDS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPropertyIds(::UnityEngine::UIElements::StyleRule* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::UIElements::StyleRule*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETPROPERTYIDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSheets::StylePropertyId* GetPropertyId(::UnityEngine::UIElements::StyleRule* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::StyleSheets::StylePropertyId*(*)(::UnityEngine::UIElements::StyleRule*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_GETPROPERTYID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

