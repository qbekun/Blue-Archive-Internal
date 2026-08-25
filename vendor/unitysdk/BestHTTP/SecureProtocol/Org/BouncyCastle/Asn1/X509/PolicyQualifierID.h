#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class PolicyQualifierID; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYQUALIFIERID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7FBE60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYQUALIFIERID_.CTOR_OFFSET UNITYSDK_OFFSET(0x7FBFB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int PolicyQualifierID_TypeDefinitionIndex = 22906;

	class PolicyQualifierID : public Il2CppObject
	{
	public:
		::System::String* IdQt; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* IdQtCps; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::PolicyQualifierID* IdQtUnotice; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYQUALIFIERID_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_POLICYQUALIFIERID_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

