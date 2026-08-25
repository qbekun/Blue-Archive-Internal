#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6D10A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x6D1440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_CREATEBCRYPTSTRING_OFFSET UNITYSDK_OFFSET(0x6D1450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_GENERATE_OFFSET UNITYSDK_OFFSET(0x6D1A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_GENERATE_OFFSET UNITYSDK_OFFSET(0x6D1AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_CHECKPASSWORD_OFFSET UNITYSDK_OFFSET(0x6D1EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_ENCODEDATA_OFFSET UNITYSDK_OFFSET(0x6D1730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_DECODESALTSTRING_OFFSET UNITYSDK_OFFSET(0x6D2420)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int OpenBsdBCrypt_TypeDefinitionIndex = 22476;

	class OpenBsdBCrypt : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EncodingTable; // 0x0
		::Il2CppArray<::System::Object*>* DecodingTable; // 0x8
		::System::String* DefaultVersion; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* AllowedVersions; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* CreateBcryptString(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_CREATEBCRYPTSTRING_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* Generate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Generate(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_GENERATE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckPassword(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_CHECKPASSWORD_OFFSET))(str, arg, nullptr);
		}

		::System::String* EncodeData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_ENCODEDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeSaltString(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENBSDBCRYPT_DECODESALTSTRING_OFFSET))(str, nullptr);
		}

	};
}

