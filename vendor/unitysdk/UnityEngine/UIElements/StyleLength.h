#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Length; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleLength; }

#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA416F00)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA416F10)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416F20)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416F80)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416F60)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA416F90)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA416FC0)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA416FD0)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417010)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA417050)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4170F0)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA417120)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleLength_TypeDefinitionIndex = 30617;

	class StyleLength : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Length* m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x18

		::UnityEngine::UIElements::Length* get_value()
		{
			return (return (::UnityEngine::UIElements::Length*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::Length* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Length*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleLength* arg, ::UnityEngine::UIElements::StyleLength* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleLength*, ::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleLength* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleLength*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StyleLength* op_Implicit(::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::StyleLength*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleLength* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleLength*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_TOSTRING_OFFSET))(nullptr);
		}

	};
}

