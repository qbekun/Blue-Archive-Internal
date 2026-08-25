#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao { class CscaMasterList; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x84E3A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x84E440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x84E720)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x84E890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_GETCERTSTRUCTS_OFFSET UNITYSDK_OFFSET(0x84E8B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_COPYCERTLIST_OFFSET UNITYSDK_OFFSET(0x84E810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x84E930)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao
{
	inline static constexpr unsigned int CscaMasterList_TypeDefinitionIndex = 23095;

	class CscaMasterList : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version; // 0x10
		::Il2CppArray<::System::Object*>* certList; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::CscaMasterList* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Icao::CscaMasterList*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_GET_VERSION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCertStructs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_GETCERTSTRUCTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* CopyCertList(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_COPYCERTLIST_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_ICAO_CSCAMASTERLIST_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

