#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleKeyword; }

#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLEENUM`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleEnum`1_TypeDefinitionIndex = 30614;

	class StyleEnum`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Value; // 0x0
		::UnityEngine::UIElements::StyleKeyword* m_Keyword; // 0x0

		Il2CppObject* get_value()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::StyleKeyword* get_keyword()
		{
			return (return (::UnityEngine::UIElements::StyleKeyword*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_GET_KEYWORD_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::UnityEngine::UIElements::StyleKeyword* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* op_Implicit(::UnityEngine::UIElements::StyleKeyword* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::StyleKeyword*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Implicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEENUM`1_TOSTRING_OFFSET))(nullptr);
		}

	};
}

