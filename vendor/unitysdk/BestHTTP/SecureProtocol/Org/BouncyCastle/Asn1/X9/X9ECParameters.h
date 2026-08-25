#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9FieldID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9Curve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x7E6960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E6A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E6FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E37E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E7070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E0040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E2050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x7E7120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_G_OFFSET UNITYSDK_OFFSET(0x7E7130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_N_OFFSET UNITYSDK_OFFSET(0x7E7150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_H_OFFSET UNITYSDK_OFFSET(0x7E7160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GETSEED_OFFSET UNITYSDK_OFFSET(0x7E7170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_CURVEENTRY_OFFSET UNITYSDK_OFFSET(0x7E7180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_FIELDIDENTRY_OFFSET UNITYSDK_OFFSET(0x7E71E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_BASEENTRY_OFFSET UNITYSDK_OFFSET(0x7E71F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x7E7200)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9
{
	inline static constexpr unsigned int X9ECParameters_TypeDefinitionIndex = 22860;

	class X9ECParameters : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* curve; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECPoint* g; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* n; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* h; // 0x30
		::Il2CppArray<::System::Object*>* seed; // 0x38

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* get_Curve()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_CURVE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_G()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_G_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_N()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_N_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_H()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_H_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSeed()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GETSEED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9Curve* get_CurveEntry()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9Curve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_CURVEENTRY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9FieldID* get_FieldIDEntry()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9FieldID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_FIELDIDENTRY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECPoint* get_BaseEntry()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_GET_BASEENTRY_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X9_X9ECPARAMETERS_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

