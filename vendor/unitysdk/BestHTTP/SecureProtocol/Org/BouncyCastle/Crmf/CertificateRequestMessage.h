#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertReqMsg; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class Controls; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class CertTemplate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class IControl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class AttributeTypeAndValue; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IVerifierFactoryProvider; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class PopoSigningKey; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_PARSEBYTES_OFFSET UNITYSDK_OFFSET(0x786E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x786E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x786EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_TOASN1STRUCTURE_OFFSET UNITYSDK_OFFSET(0x786F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GETCERTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x786F30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GET_HASCONTROLS_OFFSET UNITYSDK_OFFSET(0x786F80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_HASCONTROL_OFFSET UNITYSDK_OFFSET(0x786F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GETCONTROL_OFFSET UNITYSDK_OFFSET(0x787060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_FINDCONTROL_OFFSET UNITYSDK_OFFSET(0x786FB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GET_HASPROOFOFPOSSESSION_OFFSET UNITYSDK_OFFSET(0x787320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GET_PROOFOFPOSSESSION_OFFSET UNITYSDK_OFFSET(0x787350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GET_HASSIGNINGKEYPROOFOFPOSSESSIONWITHPKMAC_OFFSET UNITYSDK_OFFSET(0x7873A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_ISVALIDSIGNINGKEYPOP_OFFSET UNITYSDK_OFFSET(0x7874A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x787640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GETENCODED_OFFSET UNITYSDK_OFFSET(0x787B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x787B70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int CertificateRequestMessage_TypeDefinitionIndex = 22648;

	class CertificateRequestMessage : public Il2CppObject
	{
	public:
		::System::Int32 popRaVerified; // 0x0
		::System::Int32 popSigningKey; // 0x4
		::System::Int32 popKeyEncipherment; // 0x8
		::System::Int32 popKeyAgreement; // 0xC
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* certReqMsg; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::Controls* controls; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* ParseBytes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_PARSEBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertReqMsg* ToAsn1Structure()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertReqMsg*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_TOASN1STRUCTURE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate* GetCertTemplate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::CertTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GETCERTTEMPLATE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasControls()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GET_HASCONTROLS_OFFSET))(nullptr);
		}

		::System::Boolean HasControl(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_HASCONTROL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IControl* GetControl(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IControl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GETCONTROL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue* FindControl(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_FINDCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasProofOfPossession()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GET_HASPROOFOFPOSSESSION_OFFSET))(nullptr);
		}

		::System::Int32 get_ProofOfPossession()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GET_PROOFOFPOSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean get_HasSigningKeyProofOfPossessionWithPkMac()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GET_HASSIGNINGKEYPROOFOFPOSSESSIONWITHPKMAC_OFFSET))(nullptr);
		}

		::System::Boolean IsValidSigningKeyPop(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_ISVALIDSIGNINGKEYPOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean verifySignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_VERIFYSIGNATURE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_GETENCODED_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_CERTIFICATEREQUESTMESSAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

