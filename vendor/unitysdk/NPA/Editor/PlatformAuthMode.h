#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class PlatformAuthMode; }

#define NPA_EDITOR_PLATFORMAUTHMODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D42290)
#define NPA_EDITOR_PLATFORMAUTHMODE_GET_UNDEFINED_OFFSET UNITYSDK_OFFSET(0x9D422A0)
#define NPA_EDITOR_PLATFORMAUTHMODE_GET_DIRECT_OFFSET UNITYSDK_OFFSET(0x9D422B0)
#define NPA_EDITOR_PLATFORMAUTHMODE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D422C0)
#define NPA_EDITOR_PLATFORMAUTHMODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9D422E0)
#define NPA_EDITOR_PLATFORMAUTHMODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9D422F0)
#define NPA_EDITOR_PLATFORMAUTHMODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9D42310)
#define NPA_EDITOR_PLATFORMAUTHMODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D42300)
#define NPA_EDITOR_PLATFORMAUTHMODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D42320)
#define NPA_EDITOR_PLATFORMAUTHMODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D42390)

namespace NPA::Editor
{
	inline static constexpr unsigned int PlatformAuthMode_TypeDefinitionIndex = 26134;

	class PlatformAuthMode : public Il2CppObject
	{
	public:
		::System::Int32 _innerValue; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::PlatformAuthMode* get_Undefined()
		{
			return (return (::NPA::Editor::PlatformAuthMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_GET_UNDEFINED_OFFSET))(nullptr);
		}

		::NPA::Editor::PlatformAuthMode* get_Direct()
		{
			return (return (::NPA::Editor::PlatformAuthMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_GET_DIRECT_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::NPA::Editor::PlatformAuthMode* arg)
		{
			return (return (::System::Int32(*)(::NPA::Editor::PlatformAuthMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::PlatformAuthMode* op_Implicit(::System::Int32 arg)
		{
			return (return (::NPA::Editor::PlatformAuthMode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::NPA::Editor::PlatformAuthMode* arg, ::NPA::Editor::PlatformAuthMode* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::PlatformAuthMode*, ::NPA::Editor::PlatformAuthMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::Editor::PlatformAuthMode* arg, ::NPA::Editor::PlatformAuthMode* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::PlatformAuthMode*, ::NPA::Editor::PlatformAuthMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::NPA::Editor::PlatformAuthMode* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Editor::PlatformAuthMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMAUTHMODE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

