#pragma once
#include "../unitysdk.h"

#define SYSTEM_URIHELPER_TESTFORSUBPATH_OFFSET UNITYSDK_OFFSET(0x9AD2BF0)
#define SYSTEM_URIHELPER_ESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x9AD2E70)
#define SYSTEM_URIHELPER_ENSUREDESTINATIONSIZE_OFFSET UNITYSDK_OFFSET(0x9AD36B0)
#define SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x9AD3A30)
#define SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x9AD3B30)
#define SYSTEM_URIHELPER_MATCHUTF8SEQUENCE_OFFSET UNITYSDK_OFFSET(0x9AD2440)
#define SYSTEM_URIHELPER_ESCAPEASCIICHAR_OFFSET UNITYSDK_OFFSET(0x9AD2A90)
#define SYSTEM_URIHELPER_ESCAPEDASCII_OFFSET UNITYSDK_OFFSET(0x9AD22A0)
#define SYSTEM_URIHELPER_ISNOTSAFEFORUNESCAPE_OFFSET UNITYSDK_OFFSET(0x9AD23D0)
#define SYSTEM_URIHELPER_ISRESERVEDUNRESERVEDORHASH_OFFSET UNITYSDK_OFFSET(0x9AD38E0)
#define SYSTEM_URIHELPER_ISUNRESERVED_OFFSET UNITYSDK_OFFSET(0x9AD37B0)
#define SYSTEM_URIHELPER_IS3986UNRESERVED_OFFSET UNITYSDK_OFFSET(0x9AD4A60)
#define SYSTEM_URIHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AD4AE0)

namespace System
{
	inline static constexpr unsigned int UriHelper_TypeDefinitionIndex = 29183;

	class UriHelper : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* HexUpperChars; // 0x0

		::System::Boolean TestForSubPath(::System::Object** arg, ::System::UInt16 arg, ::System::Object** arg, ::System::UInt16 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::UInt16, ::System::Object**, ::System::UInt16, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_TESTFORSUBPATH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EscapeString(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Boolean arg, ::System::Char arg, ::System::Char arg, ::System::Char arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Boolean, ::System::Char, ::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPESTRING_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EnsureDestinationSize(::System::Object** arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int16 arg, ::System::Int16 arg, int32_t&* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object**, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int16, ::System::Int16, int32_t&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ENSUREDESTINATIONSIZE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* UnescapeString(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Char arg, ::System::Char arg, ::System::Char arg, ::System::UnescapeMode* arg, ::System::UriParser* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Char, ::System::Char, ::System::Char, ::System::UnescapeMode*, ::System::UriParser*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* UnescapeString(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::Char arg, ::System::Char arg, ::System::Char arg, ::System::UnescapeMode* arg, ::System::UriParser* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Object**, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, int32_t&*, ::System::Char, ::System::Char, ::System::Char, ::System::UnescapeMode*, ::System::UriParser*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_UNESCAPESTRING_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MatchUTF8Sequence(::System::Object** arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, ::Il2CppArray<::System::Object*>*, int32_t&*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_MATCHUTF8SEQUENCE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EscapeAsciiChar(::System::Char arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Char, ::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPEASCIICHAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Char EscapedAscii(::System::Char arg, ::System::Char arg)
		{
			return (return (::System::Char(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ESCAPEDASCII_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsNotSafeForUnescape(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISNOTSAFEFORUNESCAPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReservedUnreservedOrHash(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISRESERVEDUNRESERVEDORHASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUnreserved(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_ISUNRESERVED_OFFSET))(arg, nullptr);
		}

		::System::Boolean Is3986Unreserved(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_IS3986UNRESERVED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

