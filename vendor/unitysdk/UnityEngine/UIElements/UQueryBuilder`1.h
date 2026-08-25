#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class StyleSelectorRelationship; }

#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_GET_STYLESELECTORS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_GET_PARTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_CLASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_OFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_SINGLEBASETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDCLASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDPSEUDOSTATESRULEIFNECESSASY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_FINISHSELECTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_CURRENTSELECTOREMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_FINISHCURRENTSELECTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_BUILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_TOLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UQueryBuilder`1_TypeDefinitionIndex = 30237;

	class UQueryBuilder`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_StyleSelectors; // 0x0
		Il2CppObject* m_Parts; // 0x0
		::UnityEngine::UIElements::VisualElement* m_Element; // 0x0
		Il2CppObject* m_Matchers; // 0x0
		::UnityEngine::UIElements::StyleSelectorRelationship* m_Relationship; // 0x0
		::System::Int32 pseudoStatesMask; // 0x0
		::System::Int32 negatedPseudoStatesMask; // 0x0

		Il2CppObject* get_styleSelectors()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_GET_STYLESELECTORS_OFFSET))(nullptr);
		}

		Il2CppObject* get_parts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_GET_PARTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Class(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_CLASS_OFFSET))(str, nullptr);
		}

		Il2CppObject* Name(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_NAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* OfType(::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_OFTYPE_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* SingleBaseType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_SINGLEBASETYPE_OFFSET))(nullptr);
		}

		::System::Void AddClass(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDCLASS_OFFSET))(str, nullptr);
		}

		::System::Void AddName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDNAME_OFFSET))(str, nullptr);
		}

		::System::Void AddType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* AddRelationship(::UnityEngine::UIElements::StyleSelectorRelationship* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::StyleSelectorRelationship*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDRELATIONSHIP_OFFSET))(arg, nullptr);
		}

		::System::Void AddPseudoStatesRuleIfNecessasy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_ADDPSEUDOSTATESRULEIFNECESSASY_OFFSET))(nullptr);
		}

		::System::Void FinishSelector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_FINISHSELECTOR_OFFSET))(nullptr);
		}

		::System::Boolean CurrentSelectorEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_CURRENTSELECTOREMPTY_OFFSET))(nullptr);
		}

		::System::Void FinishCurrentSelector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_FINISHCURRENTSELECTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Build()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_BUILD_OFFSET))(nullptr);
		}

		::System::Void ToList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_TOLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UQUERYBUILDER`1_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

