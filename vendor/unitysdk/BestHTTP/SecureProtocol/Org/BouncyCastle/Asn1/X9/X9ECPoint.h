#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1OctetString; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E7110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E74E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E1120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E6FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_GETPOINTENCODING_OFFSET UNITYSDK_OFFSET(0x7E75A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_GET_POINT_OFFSET UNITYSDK_OFFSET(0x7E11E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_GET_ISPOINTCOMPRESSED_OFFSET UNITYSDK_OFFSET(0x7E7610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7E7670)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9
{
	inline static constexpr unsigned int X9ECPoint_TypeDefinitionIndex = 22862;

	class X9ECPoint : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* encoding; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* c; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* p; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPointEncoding()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_GETPOINTENCODING_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_Point()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_GET_POINT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPointCompressed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_GET_ISPOINTCOMPRESSED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPOINT_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

