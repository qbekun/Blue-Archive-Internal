#pragma once
#include "../unitysdk.h"

#define SYSTEM_INTERNALSPANEX_EQUALSORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0xA4AE5B0)
#define SYSTEM_INTERNALSPANEX_EQUALSORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0xA4AE650)
#define SYSTEM_INTERNALSPANEX_ALLCHARSINUINT32AREASCII_OFFSET UNITYSDK_OFFSET(0xA4AE960)
#define SYSTEM_INTERNALSPANEX_ALLCHARSINUINT64AREASCII_OFFSET UNITYSDK_OFFSET(0xA4AE970)
#define SYSTEM_INTERNALSPANEX_UINT32ORDINALIGNORECASEASCII_OFFSET UNITYSDK_OFFSET(0xA4AE990)
#define SYSTEM_INTERNALSPANEX_UINT64ORDINALIGNORECASEASCII_OFFSET UNITYSDK_OFFSET(0xA4AE9C0)
#define SYSTEM_INTERNALSPANEX_EQUALSORDINALIGNORECASENONASCII_OFFSET UNITYSDK_OFFSET(0xA4AE8C0)

namespace System
{
	inline static constexpr unsigned int InternalSpanEx_TypeDefinitionIndex = 34654;

	class InternalSpanEx : public Il2CppObject
	{
	public:
		::System::Boolean EqualsOrdinalIgnoreCase(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTERNALSPANEX_EQUALSORDINALIGNORECASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EqualsOrdinalIgnoreCase(wchar_t&* arg, wchar_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(wchar_t&*, wchar_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTERNALSPANEX_EQUALSORDINALIGNORECASE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AllCharsInUInt32AreAscii(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTERNALSPANEX_ALLCHARSINUINT32AREASCII_OFFSET))(arg, nullptr);
		}

		::System::Boolean AllCharsInUInt64AreAscii(::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTERNALSPANEX_ALLCHARSINUINT64AREASCII_OFFSET))(arg, nullptr);
		}

		::System::Boolean UInt32OrdinalIgnoreCaseAscii(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTERNALSPANEX_UINT32ORDINALIGNORECASEASCII_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UInt64OrdinalIgnoreCaseAscii(::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTERNALSPANEX_UINT64ORDINALIGNORECASEASCII_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean EqualsOrdinalIgnoreCaseNonAscii(wchar_t&* arg, wchar_t&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(wchar_t&*, wchar_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INTERNALSPANEX_EQUALSORDINALIGNORECASENONASCII_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

