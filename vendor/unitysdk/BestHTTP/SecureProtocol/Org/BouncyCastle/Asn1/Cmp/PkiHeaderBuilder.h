#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiFreeText; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiHeaderBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerOctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class InfoTypeAndValue; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiHeader; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1EncodableVector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x88E720)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x88E7C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETMESSAGETIME_OFFSET UNITYSDK_OFFSET(0x88E820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETPROTECTIONALG_OFFSET UNITYSDK_OFFSET(0x88E840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETSENDERKID_OFFSET UNITYSDK_OFFSET(0x88E860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETSENDERKID_OFFSET UNITYSDK_OFFSET(0x88E8F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETRECIPKID_OFFSET UNITYSDK_OFFSET(0x88E910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETRECIPKID_OFFSET UNITYSDK_OFFSET(0x88E9A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETTRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x88E9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETTRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x88EA50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETSENDERNONCE_OFFSET UNITYSDK_OFFSET(0x88EA70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETSENDERNONCE_OFFSET UNITYSDK_OFFSET(0x88EB00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETRECIPNONCE_OFFSET UNITYSDK_OFFSET(0x88EB20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETRECIPNONCE_OFFSET UNITYSDK_OFFSET(0x88EBB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETFREETEXT_OFFSET UNITYSDK_OFFSET(0x88EBD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETGENERALINFO_OFFSET UNITYSDK_OFFSET(0x88EBF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETGENERALINFO_OFFSET UNITYSDK_OFFSET(0x88ECD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETGENERALINFO_OFFSET UNITYSDK_OFFSET(0x88EDC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_MAKEGENERALINFOSEQ_OFFSET UNITYSDK_OFFSET(0x88EC70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_MAKEGENERALINFOSEQ_OFFSET UNITYSDK_OFFSET(0x88ED00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x88EDE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_ADDOPTIONAL_OFFSET UNITYSDK_OFFSET(0x88F4F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int PkiHeaderBuilder_TypeDefinitionIndex = 23242;

	class PkiHeaderBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* pvno; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* sender; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* recipient; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* messageTime; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* protectionAlg; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* senderKID; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* recipKID; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* transactionID; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* senderNonce; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* recipNonce; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* generalInfo; // 0x68

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetMessageTime(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETMESSAGETIME_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetProtectionAlg(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETPROTECTIONALG_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetSenderKID(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETSENDERKID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetSenderKID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETSENDERKID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetRecipKID(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETRECIPKID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetRecipKID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOctetString* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETRECIPKID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetTransactionID(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETTRANSACTIONID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetTransactionID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETTRANSACTIONID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetSenderNonce(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETSENDERNONCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetSenderNonce(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETSENDERNONCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetRecipNonce(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETRECIPNONCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetRecipNonce(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETRECIPNONCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetFreeText(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETFREETEXT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetGeneralInfo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETGENERALINFO_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetGeneralInfo(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETGENERALINFO_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder* SetGeneralInfo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_SETGENERALINFO_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* MakeGeneralInfoSeq(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_MAKEGENERALINFOSEQ_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* MakeGeneralInfoSeq(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_MAKEGENERALINFOSEQ_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Build()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeader*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_BUILD_OFFSET))(nullptr);
		}

		::System::Void AddOptional(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADERBUILDER_ADDOPTIONAL_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

