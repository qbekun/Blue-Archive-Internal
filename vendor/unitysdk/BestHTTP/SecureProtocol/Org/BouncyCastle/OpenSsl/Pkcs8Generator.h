#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObject; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99AC80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x99ACB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_SET_SECURERANDOM_OFFSET UNITYSDK_OFFSET(0x99AD00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x99AD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x99AD20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x99AD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x99AFD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	inline static constexpr unsigned int Pkcs8Generator_TypeDefinitionIndex = 21698;

	class Pkcs8Generator : public Il2CppObject
	{
	public:
		::System::String* PbeSha1_RC4_128; // 0x0
		::System::String* PbeSha1_RC4_40; // 0x8
		::System::String* PbeSha1_3DES; // 0x10
		::System::String* PbeSha1_2DES; // 0x18
		::System::String* PbeSha1_RC2_128; // 0x20
		::System::String* PbeSha1_RC2_40; // 0x28
		::Il2CppArray<::System::Object*>* password; // 0x10
		::System::String* algorithm; // 0x18
		::System::Int32 iterationCount; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x30

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void set_SecureRandom(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_SET_SECURERANDOM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Password(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_SET_PASSWORD_OFFSET))(arg, nullptr);
		}

		::System::Void set_IterationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_SET_ITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_GENERATE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PKCS8GENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

