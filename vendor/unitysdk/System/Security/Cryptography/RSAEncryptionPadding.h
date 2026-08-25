#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_PKCS1_OFFSET UNITYSDK_OFFSET(0x918B010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA1_OFFSET UNITYSDK_OFFSET(0x918B060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA256_OFFSET UNITYSDK_OFFSET(0x918B0B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA384_OFFSET UNITYSDK_OFFSET(0x918B100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA512_OFFSET UNITYSDK_OFFSET(0x918B150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x918B1A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_CREATEOAEP_OFFSET UNITYSDK_OFFSET(0x918B1E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_MODE_OFFSET UNITYSDK_OFFSET(0x918B2D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x918B2E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x918B2F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x918B370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x918B380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x918B3E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x918B5D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x918B550)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x918B5E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x918B650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_.CTOR_OFFSET UNITYSDK_OFFSET(0x918B870)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAEncryptionPadding_TypeDefinitionIndex = 24310;

	class RSAEncryptionPadding : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::RSAEncryptionPadding* s_pkcs1; // 0x0
		::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA1; // 0x8
		::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA256; // 0x10
		::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA384; // 0x18
		::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA512; // 0x20
		::System::Security::Cryptography::RSAEncryptionPaddingMode* _mode; // 0x10
		::System::Security::Cryptography::HashAlgorithmName* _oaepHashAlgorithm; // 0x18

		::System::Security::Cryptography::RSAEncryptionPadding* get_Pkcs1()
		{
			return (return (::System::Security::Cryptography::RSAEncryptionPadding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_PKCS1_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA1()
		{
			return (return (::System::Security::Cryptography::RSAEncryptionPadding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA1_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA256()
		{
			return (return (::System::Security::Cryptography::RSAEncryptionPadding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA256_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA384()
		{
			return (return (::System::Security::Cryptography::RSAEncryptionPadding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA384_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA512()
		{
			return (return (::System::Security::Cryptography::RSAEncryptionPadding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPSHA512_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::RSAEncryptionPaddingMode* arg, ::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RSAEncryptionPaddingMode*, ::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::RSAEncryptionPadding* CreateOaep(::System::Security::Cryptography::HashAlgorithmName* arg)
		{
			return (return (::System::Security::Cryptography::RSAEncryptionPadding*(*)(::System::Security::Cryptography::HashAlgorithmName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_CREATEOAEP_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSAEncryptionPaddingMode* get_Mode()
		{
			return (return (::System::Security::Cryptography::RSAEncryptionPaddingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_MODE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::HashAlgorithmName* get_OaepHashAlgorithm()
		{
			return (return (::System::Security::Cryptography::HashAlgorithmName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GET_OAEPHASHALGORITHM_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_COMBINEHASHCODES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Security::Cryptography::RSAEncryptionPadding* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Security::Cryptography::RSAEncryptionPadding* arg, ::System::Security::Cryptography::RSAEncryptionPadding* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Security::Cryptography::RSAEncryptionPadding* arg, ::System::Security::Cryptography::RSAEncryptionPadding* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSAEncryptionPadding*, ::System::Security::Cryptography::RSAEncryptionPadding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAENCRYPTIONPADDING_.CTOR_OFFSET))(nullptr);
		}

	};
}

