#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class KeyPurposeID; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYPURPOSEID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7F88E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYPURPOSEID_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F9070)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int KeyPurposeID_TypeDefinitionIndex = 22898;

	class KeyPurposeID : public Il2CppObject
	{
	public:
		::System::String* IdKP; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* AnyExtendedKeyUsage; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPServerAuth; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPClientAuth; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPCodeSigning; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPEmailProtection; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecEndSystem; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecTunnel; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPIpsecUser; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPTimeStamping; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPOcspSigning; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPSmartCardLogon; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::KeyPurposeID* IdKPMacAddress; // 0x58

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYPURPOSEID_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_KEYPURPOSEID_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

