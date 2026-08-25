#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleFloat; }

#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA416B90)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA416BB0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416BC0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416BE0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416BD0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA416BF0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA416C20)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA416C30)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA416C40)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA416C60)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA416CE0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA416D00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleFloat_TypeDefinitionIndex = 30615;

	class StyleFloat : public Il2CppObject
	{
	public:
		::System::Single m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x14

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleFloat* arg, ::UnityEngine::UIElements::StyleFloat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleFloat*, ::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleFloat* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleFloat*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleFloat* op_Implicit(::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::StyleFloat*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleFloat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleFloat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

