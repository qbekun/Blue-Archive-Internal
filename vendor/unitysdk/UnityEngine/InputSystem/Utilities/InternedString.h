#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9E7F440)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6CF40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9E6E3B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_TOLOWER_OFFSET UNITYSDK_OFFSET(0x9E7F450)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E7F460)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E7F550)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9E7F560)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E7F580)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E6E3C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E74840)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E75060)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E7F5A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E7F650)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E7F700)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E7F7A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x9E7F840)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x9E7F870)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E6DAE0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InternedString_TypeDefinitionIndex = 28922;

	class InternedString : public Il2CppObject
	{
	public:
		::System::String* m_StringOriginalCase; // 0x10
		::System::String* m_StringLowerCase; // 0x18

		::System::Int32 get_length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_ISEMPTY_OFFSET))(nullptr);
		}

		::System::String* ToLower()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_TOLOWER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean op_Equality(::System::String* str, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_EQUALITY_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::String* str, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_INEQUALITY_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean op_LessThan(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThan(::UnityEngine::InputSystem::Utilities::InternedString* arg, ::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* op_Implicit(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INTERNEDSTRING_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

