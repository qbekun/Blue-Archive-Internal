#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleInt; }

#define UNITYENGINE_UIELEMENTS_STYLEINT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA416D60)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA416D80)
#define UNITYENGINE_UIELEMENTS_STYLEINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416D90)
#define UNITYENGINE_UIELEMENTS_STYLEINT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416DA0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA416DB0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA416DD0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA416DE0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA416E10)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA416E90)
#define UNITYENGINE_UIELEMENTS_STYLEINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA416EA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleInt_TypeDefinitionIndex = 30616;

	class StyleInt : public Il2CppObject
	{
	public:
		::System::Int32 m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x14

		::System::Int32 get_value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleInt* arg, ::UnityEngine::UIElements::StyleInt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleInt*, ::UnityEngine::UIElements::StyleInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleInt* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleInt*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleInt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleInt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

