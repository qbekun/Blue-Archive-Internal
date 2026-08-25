#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_ADDCAPABILITY_OFFSET UNITYSDK_OFFSET(0x823B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_ADDCAPABILITY_OFFSET UNITYSDK_OFFSET(0x823BA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_ADDCAPABILITY_OFFSET UNITYSDK_OFFSET(0x823CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_TOASN1ENCODABLEVECTOR_OFFSET UNITYSDK_OFFSET(0x823E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x823E30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Smime
{
	inline static constexpr unsigned int SmimeCapabilityVector_TypeDefinitionIndex = 22984;

	class SmimeCapabilityVector : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* capabilities; // 0x10

		::System::Void AddCapability(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_ADDCAPABILITY_OFFSET))(arg, nullptr);
		}

		::System::Void AddCapability(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_ADDCAPABILITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCapability(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_ADDCAPABILITY_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* ToAsn1EncodableVector()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_TOASN1ENCODABLEVECTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_SMIME_SMIMECAPABILITYVECTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

