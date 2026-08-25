#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleSelectorType; }
namespace UnityEngine::UIElements { class StyleSelectorPart; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA41BE30)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA41BE20)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA41C470)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA41C340)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATECLASS_OFFSET UNITYSDK_OFFSET(0xA41C480)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATEID_OFFSET UNITYSDK_OFFSET(0xA41C4D0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATEPREDICATE_OFFSET UNITYSDK_OFFSET(0xA41C520)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelectorPart_TypeDefinitionIndex = 30646;

	class StyleSelectorPart : public Il2CppObject
	{
	public:
		::System::String* m_Value; // 0x10
		::UnityEngine::UIElements::StyleSelectorType* m_Type; // 0x18
		::System::Object* tempData; // 0x20

		::System::String* get_value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleSelectorType* get_type()
		{
			return (return (::UnityEngine::UIElements::StyleSelectorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_type(::UnityEngine::UIElements::StyleSelectorType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSelectorType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_TOSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleSelectorPart* CreateClass(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::StyleSelectorPart*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATECLASS_OFFSET))(str, nullptr);
		}

		::UnityEngine::UIElements::StyleSelectorPart* CreateId(::System::String* str)
		{
			return (return (::UnityEngine::UIElements::StyleSelectorPart*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATEID_OFFSET))(str, nullptr);
		}

		::UnityEngine::UIElements::StyleSelectorPart* CreatePredicate(::System::Object* arg)
		{
			return (return (::UnityEngine::UIElements::StyleSelectorPart*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTORPART_CREATEPREDICATE_OFFSET))(arg, nullptr);
		}

	};
}

