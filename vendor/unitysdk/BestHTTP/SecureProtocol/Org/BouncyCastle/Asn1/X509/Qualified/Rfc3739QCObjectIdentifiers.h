#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_RFC3739QCOBJECTIDENTIFIERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8152B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_RFC3739QCOBJECTIDENTIFIERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8152C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified
{
	inline static constexpr unsigned int Rfc3739QCObjectIdentifiers_TypeDefinitionIndex = 22949;

	class Rfc3739QCObjectIdentifiers : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdQcs; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdQcsPkixQCSyntaxV1; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdQcsPkixQCSyntaxV2; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_RFC3739QCOBJECTIDENTIFIERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_RFC3739QCOBJECTIDENTIFIERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

