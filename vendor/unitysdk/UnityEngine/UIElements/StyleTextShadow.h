#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class TextShadow; }
namespace UnityEngine::UIElements { class StyleTextShadow; }

#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA417DC0)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA417E00)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417E10)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA417E20)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA417E40)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA417E90)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417EB0)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417F10)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA417FD0)
#define UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA418010)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleTextShadow_TypeDefinitionIndex = 30621;

	class StyleTextShadow : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x10
		::UnityEngine::UIElements::TextShadow* m_Value; // 0x14

		::UnityEngine::UIElements::TextShadow* get_value()
		{
			return (return (::UnityEngine::UIElements::TextShadow*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::TextShadow* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextShadow*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleTextShadow* arg, ::UnityEngine::UIElements::StyleTextShadow* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTextShadow*, ::UnityEngine::UIElements::StyleTextShadow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleTextShadow* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleTextShadow*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleTextShadow* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleTextShadow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLETEXTSHADOW_TOSTRING_OFFSET))(nullptr);
		}

	};
}

