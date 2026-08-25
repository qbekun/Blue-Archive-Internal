#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerEnumerated; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CRLREASON_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F1390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CRLREASON_.CTOR_OFFSET UNITYSDK_OFFSET(0x7F13E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CRLREASON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F1450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CRLREASON_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7F1520)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int CrlReason_TypeDefinitionIndex = 22884;

	class CrlReason : public Il2CppObject
	{
	public:
		::System::Int32 Unspecified; // 0x0
		::System::Int32 KeyCompromise; // 0x0
		::System::Int32 CACompromise; // 0x0
		::System::Int32 AffiliationChanged; // 0x0
		::System::Int32 Superseded; // 0x0
		::System::Int32 CessationOfOperation; // 0x0
		::System::Int32 CertificateHold; // 0x0
		::System::Int32 RemoveFromCrl; // 0x0
		::System::Int32 PrivilegeWithdrawn; // 0x0
		::System::Int32 AACompromise; // 0x0
		::Il2CppArray<::System::Object*>* ReasonString; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CRLREASON_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerEnumerated* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerEnumerated*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CRLREASON_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CRLREASON_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_CRLREASON_.CCTOR_OFFSET))(nullptr);
		}

	};
}

