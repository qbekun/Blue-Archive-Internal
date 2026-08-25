#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class EncryptedPrivateKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x830D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x830E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x830F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_GET_ENCRYPTIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x831090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_GETENCRYPTEDDATA_OFFSET UNITYSDK_OFFSET(0x8310A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x8310D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs
{
	inline static constexpr unsigned int EncryptedPrivateKeyInfo_TypeDefinitionIndex = 23031;

	class EncryptedPrivateKeyInfo : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* data; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_GET_ENCRYPTIONALGORITHM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncryptedData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_GETENCRYPTEDDATA_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_PKCS_ENCRYPTEDPRIVATEKEYINFO_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

