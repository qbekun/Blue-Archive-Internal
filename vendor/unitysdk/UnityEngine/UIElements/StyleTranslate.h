#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Translate; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleTranslate; }

#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4178D0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA417920)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417930)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417980)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417960)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA4179A0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA417AA0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA417AC0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417AE0)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417B80)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA417C90)
#define UNITYENGINE_UIELEMENTS_STYLETRANSLATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA417D50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleTranslate_TypeDefinitionIndex = 30620;

	class StyleTranslate : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Translate* m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x28

		::UnityEngine::UIElements::Translate* get_value()
		{
			return (return (::UnityEngine::UIElements::Translate*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::Translate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Translate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::Translate* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Translate*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleTranslate* arg, ::UnityEngine::UIElements::StyleTranslate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTranslate*, ::UnityEngine::UIElements::StyleTranslate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleTranslate* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleTranslate*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleTranslate* op_Implicit(::UnityEngine::UIElements::Translate* arg)
		{
			return (return (::UnityEngine::UIElements::StyleTranslate*(*)(::UnityEngine::UIElements::Translate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleTranslate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTranslate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETRANSLATE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

