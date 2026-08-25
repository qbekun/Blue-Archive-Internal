#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class PkiArchiveOptions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class CmsEnvelopedData; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x78AE60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x78AF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GET_ENVELOPEDDATA_OFFSET UNITYSDK_OFFSET(0x78AF30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GETENVELOPEDDATA_OFFSET UNITYSDK_OFFSET(0x78AF80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GET_ARCHIVETYPE_OFFSET UNITYSDK_OFFSET(0x78B3F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x78B420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x7872C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int PkiArchiveControl_TypeDefinitionIndex = 22656;

	class PkiArchiveControl : public Il2CppObject
	{
	public:
		::System::Int32 encryptedPrivKey; // 0x0
		::System::Int32 keyGenParameters; // 0x4
		::System::Int32 archiveRemGenPrivKey; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* type; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* pkiArchiveOptions; // 0x10

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_EnvelopedData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GET_ENVELOPEDDATA_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData* GetEnvelopedData()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GETENVELOPEDDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_ArchiveType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GET_ARCHIVETYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKIARCHIVECONTROL_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

