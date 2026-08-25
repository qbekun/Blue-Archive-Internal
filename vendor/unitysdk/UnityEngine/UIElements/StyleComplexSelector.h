#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleRule; }
namespace UnityEngine::UIElements { class StyleComplexSelector; }

#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SPECIFICITY_OFFSET UNITYSDK_OFFSET(0xA41B880)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_RULE_OFFSET UNITYSDK_OFFSET(0xA41B890)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_RULE_OFFSET UNITYSDK_OFFSET(0xA41B8A0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SELECTORS_OFFSET UNITYSDK_OFFSET(0xA41B8B0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_SELECTORS_OFFSET UNITYSDK_OFFSET(0xA41B8C0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_CACHEPSEUDOSTATEMASKS_OFFSET UNITYSDK_OFFSET(0xA41B8D0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA41BE40)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41BFE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleComplexSelector_TypeDefinitionIndex = 30641;

	class StyleComplexSelector : public Il2CppObject
	{
	public:
		::System::Int32 m_Specificity; // 0x10
		::UnityEngine::UIElements::StyleRule* _rule_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* m_Selectors; // 0x20
		::System::Int32 ruleIndex; // 0x28
		::UnityEngine::UIElements::StyleComplexSelector* nextInTable; // 0x30
		::System::Int32 orderInStyleSheet; // 0x38
		Il2CppObject* s_PseudoStates; // 0x0

		::System::Int32 get_specificity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SPECIFICITY_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleRule* get_rule()
		{
			return (return (::UnityEngine::UIElements::StyleRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_RULE_OFFSET))(nullptr);
		}

		::System::Void set_rule(::UnityEngine::UIElements::StyleRule* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleRule*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_RULE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_selectors()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SELECTORS_OFFSET))(nullptr);
		}

		::System::Void set_selectors(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_SELECTORS_OFFSET))(arg, nullptr);
		}

		::System::Void CachePseudoStateMasks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_CACHEPSEUDOSTATEMASKS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

