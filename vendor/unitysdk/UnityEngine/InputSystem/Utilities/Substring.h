#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class Substring; }
namespace UnityEngine::InputSystem::Utilities { class InternedString; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9E8A480)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8A490)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8A050)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8A4D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E8A510)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E8A640)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E8A5E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E8A730)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9E8A6D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_COMPARE_OFFSET UNITYSDK_OFFSET(0x9E8A7A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x9E8A800)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_SUBSTR_OFFSET UNITYSDK_OFFSET(0x9E8A880)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E8A8B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E8A910)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E8A9B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E8AA10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E8AA70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E8AAF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E8AB70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E8ABF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E8AC70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9E8ACB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9E8ACC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9E8ACD0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Substring_TypeDefinitionIndex = 28961;

	class Substring : public Il2CppObject
	{
	public:
		::System::String* m_String; // 0x10
		::System::Int32 m_Index; // 0x18
		::System::Int32 m_Length; // 0x1C

		::System::Boolean get_isEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::Substring* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::UnityEngine::InputSystem::Utilities::Substring* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::UnityEngine::InputSystem::Utilities::Substring* arg, ::UnityEngine::InputSystem::Utilities::Substring* arg, ::System::StringComparison* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::UnityEngine::InputSystem::Utilities::Substring*, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_COMPARE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean StartsWith(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_STARTSWITH_OFFSET))(str, nullptr);
		}

		::System::String* Substr(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_SUBSTR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::Substring* arg, ::UnityEngine::InputSystem::Utilities::Substring* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::UnityEngine::InputSystem::Utilities::Substring*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::Substring* arg, ::UnityEngine::InputSystem::Utilities::Substring* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::UnityEngine::InputSystem::Utilities::Substring*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::Substring* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::Substring* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::Substring* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::Substring*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::Substring* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::Substring*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::Substring* op_Implicit(::System::String* str)
		{
			return (return (::UnityEngine::InputSystem::Utilities::Substring*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::Int32 get_length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Char get_Item(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_SUBSTRING_GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

