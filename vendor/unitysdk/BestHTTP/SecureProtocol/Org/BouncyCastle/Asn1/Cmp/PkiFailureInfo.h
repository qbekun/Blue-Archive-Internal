#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerBitString; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIFAILUREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x88D4B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIFAILUREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x88D500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIFAILUREINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x88D590)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int PkiFailureInfo_TypeDefinitionIndex = 23239;

	class PkiFailureInfo : public Il2CppObject
	{
	public:
		::System::Int32 BadAlg; // 0x0
		::System::Int32 BadMessageCheck; // 0x0
		::System::Int32 BadRequest; // 0x0
		::System::Int32 BadTime; // 0x0
		::System::Int32 BadCertId; // 0x0
		::System::Int32 BadDataFormat; // 0x0
		::System::Int32 WrongAuthority; // 0x0
		::System::Int32 IncorrectData; // 0x0
		::System::Int32 MissingTimeStamp; // 0x0
		::System::Int32 BadPop; // 0x0
		::System::Int32 CertRevoked; // 0x0
		::System::Int32 CertConfirmed; // 0x0
		::System::Int32 WrongIntegrity; // 0x0
		::System::Int32 BadRecipientNonce; // 0x0
		::System::Int32 TimeNotAvailable; // 0x0
		::System::Int32 UnacceptedPolicy; // 0x0
		::System::Int32 UnacceptedExtension; // 0x0
		::System::Int32 AddInfoNotAvailable; // 0x0
		::System::Int32 BadSenderNonce; // 0x0
		::System::Int32 BadCertTemplate; // 0x0
		::System::Int32 SignerNotTrusted; // 0x0
		::System::Int32 TransactionIdInUse; // 0x0
		::System::Int32 UnsupportedVersion; // 0x0
		::System::Int32 NotAuthorized; // 0x0
		::System::Int32 SystemUnavail; // 0x0
		::System::Int32 SystemFailure; // 0x0
		::System::Int32 DuplicateCertReq; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIFAILUREINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerBitString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIFAILUREINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIFAILUREINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

