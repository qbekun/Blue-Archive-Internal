#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTPOLICYID_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F0C30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int CertPolicyID_TypeDefinitionIndex = 22881;

	class CertPolicyID : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CERTPOLICYID_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

