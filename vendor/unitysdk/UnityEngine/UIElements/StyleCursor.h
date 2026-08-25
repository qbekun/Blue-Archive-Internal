#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Cursor; }
namespace UnityEngine::UIElements { class StyleKeyword; }
namespace UnityEngine::UIElements { class StyleCursor; }

#define UNITYENGINE_UIELEMENTS_STYLECURSOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA4168C0)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0xA416910)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416920)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA416940)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA416960)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA4169B0)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4169F0)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA416A40)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA416B00)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA416B20)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleCursor_TypeDefinitionIndex = 30611;

	class StyleCursor : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Cursor* m_Value; // 0x10
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x28

		::UnityEngine::UIElements::Cursor* get_value()
		{
			return (return (::UnityEngine::UIElements::Cursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::Cursor* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Cursor*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::StyleCursor* arg, ::UnityEngine::UIElements::StyleCursor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleCursor*, ::UnityEngine::UIElements::StyleCursor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StyleCursor* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (::UnityEngine::UIElements::StyleCursor*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleCursor* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::StyleCursor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

