#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509ExtensionsGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertTemplateBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISignatureFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class PKMacBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class PopoPrivKey; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Null; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class PKMacValue; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class CertificateRequestMessageBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class Time; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class IControl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class SubsequentMessage; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class CertificateRequestMessage; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x787BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x787CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETISSUER_OFFSET UNITYSDK_OFFSET(0x787D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETSUBJECT_OFFSET UNITYSDK_OFFSET(0x787D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x787DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETVALIDITY_OFFSET UNITYSDK_OFFSET(0x787E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x787ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x787F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_ADDCONTROL_OFFSET UNITYSDK_OFFSET(0x787F30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONSIGNKEYSIGNER_OFFSET UNITYSDK_OFFSET(0x787FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONSUBSEQUENTMESSAGE_OFFSET UNITYSDK_OFFSET(0x788070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONSUBSEQUENTMESSAGE_OFFSET UNITYSDK_OFFSET(0x788160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONAGREEMAC_OFFSET UNITYSDK_OFFSET(0x788290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONRAVERIFIED_OFFSET UNITYSDK_OFFSET(0x788320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETAUTHINFOPKMAC_OFFSET UNITYSDK_OFFSET(0x7883E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETAUTHINFOSENDER_OFFSET UNITYSDK_OFFSET(0x788420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETAUTHINFOSENDER_OFFSET UNITYSDK_OFFSET(0x788490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x7884B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int CertificateRequestMessageBuilder_TypeDefinitionIndex = 22649;

	class CertificateRequestMessageBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* _certReqId; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* _extGenerator; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder* _templateBuilder; // 0x20
		::System::Collections::IList* _controls; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* _popSigner; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder* _pkMacBuilder; // 0x38
		::Il2CppArray<::System::Object*>* _password; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* _sender; // 0x48
		::System::Int32 _popoType; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey* _popoPrivKey; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Null* _popRaVerified; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PKMacValue* _agreeMac; // 0x68

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetIssuer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETISSUER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetSubject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETSUBJECT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetSerialNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETSERIALNUMBER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetValidity(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Time*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETVALIDITY_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_ADDEXTENSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_ADDEXTENSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* AddControl(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IControl* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IControl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_ADDCONTROL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSignKeySigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONSIGNKEYSIGNER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSubsequentMessage(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONSUBSEQUENTMESSAGE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionSubsequentMessage(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONSUBSEQUENTMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionAgreeMac(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PKMacValue* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PKMacValue*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONAGREEMAC_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetProofOfPossessionRaVerified()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETPROOFOFPOSSESSIONRAVERIFIED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoPKMAC(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETAUTHINFOPKMAC_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoSender(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETAUTHINFOSENDER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder* SetAuthInfoSender(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_SETAUTHINFOSENDER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessage* Build()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::CertificateRequestMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGEBUILDER_BUILD_OFFSET))(nullptr);
		}

	};
}

