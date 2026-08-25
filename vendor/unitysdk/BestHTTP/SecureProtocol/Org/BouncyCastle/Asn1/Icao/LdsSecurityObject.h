#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao { class LdsVersionInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao { class LdsSecurityObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x84F200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x84F2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x84FB10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x84FC00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_CHECKDATAGROUPHASHSEQSIZE_OFFSET UNITYSDK_OFFSET(0x84FA60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x84FD00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GET_DIGESTALGORITHMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x84FD20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GETDATAGROUPHASH_OFFSET UNITYSDK_OFFSET(0x84FD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GET_VERSIONINFO_OFFSET UNITYSDK_OFFSET(0x84FD40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x84FD50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao
{
	inline static constexpr unsigned int LdsSecurityObject_TypeDefinitionIndex = 23098;

	class LdsSecurityObject : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Int32 UBDataGroups; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithmIdentifier; // 0x18
		::Il2CppArray<::System::Object*>* datagroupHash; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* versionInfo; // 0x28

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsSecurityObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckDatagroupHashSeqSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_CHECKDATAGROUPHASHSEQSIZE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Version()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithmIdentifier()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GET_DIGESTALGORITHMIDENTIFIER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDatagroupHash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GETDATAGROUPHASH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo* get_VersionInfo()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::LdsVersionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_GET_VERSIONINFO_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_LDSSECURITYOBJECT_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

