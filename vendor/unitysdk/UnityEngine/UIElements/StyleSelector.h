#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSelectorRelationship; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PARTS_OFFSET UNITYSDK_OFFSET(0xA41BE10)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_SET_PARTS_OFFSET UNITYSDK_OFFSET(0xA41C100)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PREVIOUSRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0xA41C110)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_SET_PREVIOUSRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0xA41C120)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA41C130)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA41C290)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelector_TypeDefinitionIndex = 30645;

	class StyleSelector : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Parts; // 0x10
		::UnityEngine::UIElements::StyleSelectorRelationship* m_PreviousRelationship; // 0x18
		::System::Int32 pseudoStateMask; // 0x1C
		::System::Int32 negatedPseudoStateMask; // 0x20

		::Il2CppArray<::System::Object*>* get_parts()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PARTS_OFFSET))(nullptr);
		}

		::System::Void set_parts(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_SET_PARTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleSelectorRelationship* get_previousRelationship()
		{
			return (return (::UnityEngine::UIElements::StyleSelectorRelationship*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PREVIOUSRELATIONSHIP_OFFSET))(nullptr);
		}

		::System::Void set_previousRelationship(::UnityEngine::UIElements::StyleSelectorRelationship* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSelectorRelationship*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_SET_PREVIOUSRELATIONSHIP_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

