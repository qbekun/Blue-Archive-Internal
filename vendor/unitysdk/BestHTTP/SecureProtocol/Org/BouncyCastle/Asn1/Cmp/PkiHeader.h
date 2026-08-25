#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerGeneralizedTime; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiFreeText; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PkiHeader; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x88DBC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x88DF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x88E0B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x88E150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_PVNO_OFFSET UNITYSDK_OFFSET(0x88E1B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x88E1C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_RECIPIENT_OFFSET UNITYSDK_OFFSET(0x88E1D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_MESSAGETIME_OFFSET UNITYSDK_OFFSET(0x88E1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_PROTECTIONALG_OFFSET UNITYSDK_OFFSET(0x88E1F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_SENDERKID_OFFSET UNITYSDK_OFFSET(0x88E200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_RECIPKID_OFFSET UNITYSDK_OFFSET(0x88E210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_TRANSACTIONID_OFFSET UNITYSDK_OFFSET(0x88E220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_SENDERNONCE_OFFSET UNITYSDK_OFFSET(0x88E230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_RECIPNONCE_OFFSET UNITYSDK_OFFSET(0x88E240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_FREETEXT_OFFSET UNITYSDK_OFFSET(0x88E250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GETGENERALINFO_OFFSET UNITYSDK_OFFSET(0x88E260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x88E380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x88E610)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	inline static constexpr unsigned int PkiHeader_TypeDefinitionIndex = 23241;

	class PkiHeader : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* NULL_NAME; // 0x0
		::System::Int32 CMP_1999; // 0x8
		::System::Int32 CMP_2000; // 0xC
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

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeader* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeader*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Pvno()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_PVNO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* get_Sender()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_SENDER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* get_Recipient()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_RECIPIENT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_MessageTime()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_MESSAGETIME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_ProtectionAlg()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_PROTECTIONALG_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_SenderKID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_SENDERKID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_RecipKID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_RECIPKID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_TransactionID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_TRANSACTIONID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_SenderNonce()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_SENDERNONCE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_RecipNonce()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_RECIPNONCE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_FreeText()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GET_FREETEXT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGeneralInfo()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_GETGENERALINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_CMP_PKIHEADER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

