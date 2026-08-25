#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509 { class NamingAuthority; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509 { class ProfessionInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x848F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x84B670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x84BFB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x84C0C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GET_ADDPROFESSIONINFO_OFFSET UNITYSDK_OFFSET(0x84C2B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GET_NAMINGAUTHORITY_OFFSET UNITYSDK_OFFSET(0x84C2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GETPROFESSIONITEMS_OFFSET UNITYSDK_OFFSET(0x84C2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GETPROFESSIONOIDS_OFFSET UNITYSDK_OFFSET(0x84C440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GET_REGISTRATIONNUMBER_OFFSET UNITYSDK_OFFSET(0x84C610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x84C620)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509
{
	inline static constexpr unsigned int ProfessionInfo_TypeDefinitionIndex = 23090;

	class ProfessionInfo : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Rechtsanwltin; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Rechtsanwalt; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Rechtsbeistand; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Steuerberaterin; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Steuerberater; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Steuerbevollmchtigte; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Steuerbevollmchtigter; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notarin; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notar; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notarvertreterin; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notarvertreter; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notariatsverwalterin; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Notariatsverwalter; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Wirtschaftsprferin; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Wirtschaftsprfer; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* VereidigteBuchprferin; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* VereidigterBuchprfer; // 0x80
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Patentanwltin; // 0x88
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Patentanwalt; // 0x90
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* professionItems; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* professionOids; // 0x20
		::System::String* registrationNumber; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* addProfessionInfo; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_.CTOR_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_AddProfessionInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GET_ADDPROFESSIONINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* get_NamingAuthority()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GET_NAMINGAUTHORITY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetProfessionItems()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GETPROFESSIONITEMS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetProfessionOids()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GETPROFESSIONOIDS_OFFSET))(nullptr);
		}

		::System::String* get_RegistrationNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_GET_REGISTRATIONNUMBER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ISISMTT_X509_PROFESSIONINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

