#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class SubsequentMessage; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_SUBSEQUENTMESSAGE_VALUEOF_OFFSET UNITYSDK_OFFSET(0x86F490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_SUBSEQUENTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x870610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_SUBSEQUENTMESSAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x870620)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf
{
	inline static constexpr unsigned int SubsequentMessage_TypeDefinitionIndex = 23170;

	class SubsequentMessage : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* encrCert; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* challengeResp; // 0x8

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* ValueOf(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_SUBSEQUENTMESSAGE_VALUEOF_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_SUBSEQUENTMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CRMF_SUBSEQUENTMESSAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

