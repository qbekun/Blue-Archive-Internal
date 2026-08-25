#pragma once
#include "../../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec { class SecP192R1Point; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECLookupTable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x577390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_CLONECURVE_OFFSET UNITYSDK_OFFSET(0x577600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_SUPPORTSCOORDINATESYSTEM_OFFSET UNITYSDK_OFFSET(0x577650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_GET_Q_OFFSET UNITYSDK_OFFSET(0x577660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_GET_INFINITY_OFFSET UNITYSDK_OFFSET(0x5776B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_GET_FIELDSIZE_OFFSET UNITYSDK_OFFSET(0x5776C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_FROMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x577740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_CREATERAWPOINT_OFFSET UNITYSDK_OFFSET(0x5778C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_CREATERAWPOINT_OFFSET UNITYSDK_OFFSET(0x5779C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_CREATECACHESAFELOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x577A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x577CC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec
{
	inline static constexpr unsigned int SecP192R1Curve_TypeDefinitionIndex = 21883;

	class SecP192R1Curve : public ::Mono::Security::Cryptography::MD4
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* q; // 0x0
		::System::Int32 SECP192R1_DEFAULT_COORDS; // 0x0
		::System::Int32 SECP192R1_FE_INTS; // 0x0
		::Il2CppArray<::System::Object*>* SECP192R1_AFFINE_ZS; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Point* m_infinity; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_CLONECURVE_OFFSET))(nullptr);
		}

		::System::Boolean SupportsCoordinateSystem(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_SUPPORTSCOORDINATESYSTEM_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Q()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_GET_Q_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_GET_INFINITY_OFFSET))(nullptr);
		}

		::System::Int32 get_FieldSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_GET_FIELDSIZE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_FROMBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_CREATERAWPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_CREATERAWPOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_CREATECACHESAFELOOKUPTABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP192R1CURVE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

