#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class PrivateKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { class Pkcs8EncryptedPrivateKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherBuilder; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFOBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x992E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFOBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x992ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFOBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x992F00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	inline static constexpr unsigned int Pkcs8EncryptedPrivateKeyInfoBuilder_TypeDefinitionIndex = 21685;

	class Pkcs8EncryptedPrivateKeyInfoBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFOBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFOBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilder* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFOBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

	};
}

