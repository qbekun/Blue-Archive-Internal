#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_IDNMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C2F40)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_EQUALS_OFFSET UNITYSDK_OFFSET(0x92C2FB0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92C3010)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET UNITYSDK_OFFSET(0x92C3030)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET UNITYSDK_OFFSET(0x92C30A0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_CONVERT_OFFSET UNITYSDK_OFFSET(0x92C3190)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_TOASCII_OFFSET UNITYSDK_OFFSET(0x92C34D0)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYLENGTH_OFFSET UNITYSDK_OFFSET(0x92C3C30)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_NAMEPREP_OFFSET UNITYSDK_OFFSET(0x92C3930)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYPROHIBITEDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x92C3D00)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYSTD3ASCIIRULES_OFFSET UNITYSDK_OFFSET(0x92C3A70)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET UNITYSDK_OFFSET(0x92C3F10)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET UNITYSDK_OFFSET(0x92C3F80)
#define SYSTEM_GLOBALIZATION_IDNMAPPING_TOUNICODE_OFFSET UNITYSDK_OFFSET(0x92C36F0)

namespace System::Globalization
{
	inline static constexpr unsigned int IdnMapping_TypeDefinitionIndex = 25015;

	class IdnMapping : public Il2CppObject
	{
	public:
		::System::Boolean allow_unassigned; // 0x10
		::System::Boolean use_std3; // 0x11
		::System::Globalization::Punycode* puny; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* GetAscii(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET))(str, nullptr);
		}

		::System::String* GetAscii(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETASCII_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* Convert(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_CONVERT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* ToAscii(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_TOASCII_OFFSET))(str, arg, nullptr);
		}

		::System::Void VerifyLength(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYLENGTH_OFFSET))(str, arg, nullptr);
		}

		::System::String* NamePrep(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_NAMEPREP_OFFSET))(str, arg, nullptr);
		}

		::System::Void VerifyProhibitedCharacters(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYPROHIBITEDCHARACTERS_OFFSET))(str, arg, nullptr);
		}

		::System::Void VerifyStd3AsciiRules(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_VERIFYSTD3ASCIIRULES_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetUnicode(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET))(str, nullptr);
		}

		::System::String* GetUnicode(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_GETUNICODE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* ToUnicode(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_IDNMAPPING_TOUNICODE_OFFSET))(str, arg, nullptr);
		}

	};
}

