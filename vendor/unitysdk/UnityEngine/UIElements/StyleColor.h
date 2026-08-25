#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleColor; }

#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4165D0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA4165F0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416600)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416620)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA416630)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA416690)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4166B0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA416710)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4167D0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA416850)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleColor_TypeDefinitionIndex = 30610;

	class StyleColor : public Il2CppObject
	{
	public:
		::UnityEngine::Color* m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x20

		::UnityEngine::Color* get_value()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleColor* arg, ::UnityEngine::UIElements::StyleColor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleColor*, ::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleColor* op_Implicit(::UnityEngine::Color* arg)
		{
			return (return (::UnityEngine::UIElements::StyleColor*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleColor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleColor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

