#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class PKMacValue; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class ProofOfPossessionSigningKeyBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class PKMacBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class PopoSigningKey; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISignatureFactory; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x789AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x788F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_SETSENDER_OFFSET UNITYSDK_OFFSET(0x788FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_SETPUBLICKEYMAC_OFFSET UNITYSDK_OFFSET(0x788FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x789490)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int ProofOfPossessionSigningKeyBuilder_TypeDefinitionIndex = 22662;

	class ProofOfPossessionSigningKeyBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertRequest* _certRequest; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* _pubKeyInfo; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* _name; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PKMacValue* _publicKeyMAC; // 0x28

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* SetSender(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_SETSENDER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder* SetPublicKeyMac(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_SETPUBLICKEYMAC_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PROOFOFPOSSESSIONSIGNINGKEYBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

	};
}

