#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class EncryptedPrivateKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class PrivateKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDecryptorBuilderProvider; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_PARSEBYTES_OFFSET UNITYSDK_OFFSET(0x992830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9929A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9929D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_TOASN1STRUCTURE_OFFSET UNITYSDK_OFFSET(0x992A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_GETENCRYPTEDDATA_OFFSET UNITYSDK_OFFSET(0x992A20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_GETENCODED_OFFSET UNITYSDK_OFFSET(0x992A40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_DECRYPTPRIVATEKEYINFO_OFFSET UNITYSDK_OFFSET(0x992A60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	inline static constexpr unsigned int Pkcs8EncryptedPrivateKeyInfo_TypeDefinitionIndex = 21684;

	class Pkcs8EncryptedPrivateKeyInfo : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encryptedPrivateKeyInfo; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* parseBytes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_PARSEBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* ToAsn1Structure()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_TOASN1STRUCTURE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncryptedData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_GETENCRYPTEDDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_GETENCODED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* DecryptPrivateKeyInfo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS8ENCRYPTEDPRIVATEKEYINFO_DECRYPTPRIVATEKEYINFO_OFFSET))(arg, nullptr);
		}

	};
}

