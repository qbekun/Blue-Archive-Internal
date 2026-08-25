#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7EFF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E79C60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7F000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E7F170)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9E7F180)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E7F190)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E7F370)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E7F380)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9E7F3F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E7F400)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E7F410)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_FROMINT32_OFFSET UNITYSDK_OFFSET(0x9E7F420)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_TOINT32_OFFSET UNITYSDK_OFFSET(0x9E7F430)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int FourCC_TypeDefinitionIndex = 28918;

	class FourCC : public Il2CppObject
	{
	public:
		::System::Int32 m_Code; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Char arg, ::System::Char arg, ::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Int32 op_Implicit(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* op_Implicit(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::InputSystem::Utilities::FourCC* arg, ::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::InputSystem::Utilities::FourCC* arg, ::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* FromInt32(::System::Int32 arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_FROMINT32_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FOURCC_TOINT32_OFFSET))(arg, nullptr);
		}

	};
}

