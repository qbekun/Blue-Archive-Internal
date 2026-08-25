#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOUPPERCASE_OFFSET UNITYSDK_OFFSET(0x8CBE20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_ISONEOF_OFFSET UNITYSDK_OFFSET(0x8CBF00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CBF60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CC030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CC0F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_FROMASCIIBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CC1B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOASCIIBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CC200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOASCIIBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CC240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_FROMUTF8BYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CC280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOUTF8BYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CC2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOUTF8BYTEARRAY_OFFSET UNITYSDK_OFFSET(0x8CC310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8CC350)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	inline static constexpr unsigned int Strings_TypeDefinitionIndex = 21574;

	class Strings : public Il2CppObject
	{
	public:
		::System::String* ToUpperCase(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOUPPERCASE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsOneOf(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_ISONEOF_OFFSET))(str, arg, nullptr);
		}

		::System::String* FromByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_FROMBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToByteArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOBYTEARRAY_OFFSET))(str, nullptr);
		}

		::System::String* FromAsciiByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_FROMASCIIBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToAsciiByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOASCIIBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToAsciiByteArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOASCIIBYTEARRAY_OFFSET))(str, nullptr);
		}

		::System::String* FromUtf8ByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_FROMUTF8BYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToUtf8ByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOUTF8BYTEARRAY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToUtf8ByteArray(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_TOUTF8BYTEARRAY_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_STRINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

