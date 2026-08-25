#pragma once
#include "../unitysdk.h"

#define SYSTEM_HEXCONVERTER_TOCHARUPPER_OFFSET UNITYSDK_OFFSET(0xA4AE130)
#define SYSTEM_HEXCONVERTER_TOCHARLOWER_OFFSET UNITYSDK_OFFSET(0xA4AE140)
#define SYSTEM_HEXCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4AE150)
#define SYSTEM_HEXCONVERTER_TOBYTESBUFFER_OFFSET UNITYSDK_OFFSET(0xA4AE4D0)
#define SYSTEM_HEXCONVERTER_TOCHARSBUFFER_OFFSET UNITYSDK_OFFSET(0xA4AE540)

namespace System
{
	inline static constexpr unsigned int HexConverter_TypeDefinitionIndex = 34653;

	class HexConverter : public Il2CppObject
	{
	public:
		::System::Char ToCharUpper(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HEXCONVERTER_TOCHARUPPER_OFFSET))(arg, nullptr);
		}

		::System::Char ToCharLower(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HEXCONVERTER_TOCHARLOWER_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(Il2CppObject* arg, Casing* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, Casing*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HEXCONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ToBytesBuffer(::System::Byte arg, Il2CppObject* arg, ::System::Int32 arg, Casing* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject*, ::System::Int32, Casing*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HEXCONVERTER_TOBYTESBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ToCharsBuffer(::System::Byte arg, Il2CppObject* arg, ::System::Int32 arg, Casing* arg)
		{
			((::System::Void(*)(::System::Byte, Il2CppObject*, ::System::Int32, Casing*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_HEXCONVERTER_TOCHARSBUFFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

