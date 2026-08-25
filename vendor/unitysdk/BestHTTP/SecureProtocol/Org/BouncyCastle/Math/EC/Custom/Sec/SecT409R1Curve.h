#pragma once
#include "../../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec { class SecT409R1Point; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECLookupTable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5CDD00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_CLONECURVE_OFFSET UNITYSDK_OFFSET(0x5CDF30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_SUPPORTSCOORDINATESYSTEM_OFFSET UNITYSDK_OFFSET(0x5CDF80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_INFINITY_OFFSET UNITYSDK_OFFSET(0x5CDF90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_FIELDSIZE_OFFSET UNITYSDK_OFFSET(0x5CDFA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_FROMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x5CDFB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_CREATERAWPOINT_OFFSET UNITYSDK_OFFSET(0x5CE010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_CREATERAWPOINT_OFFSET UNITYSDK_OFFSET(0x5CE110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_ISKOBLITZ_OFFSET UNITYSDK_OFFSET(0x5CE1D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_M_OFFSET UNITYSDK_OFFSET(0x5CE1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_ISTRINOMIAL_OFFSET UNITYSDK_OFFSET(0x5CE1F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_K1_OFFSET UNITYSDK_OFFSET(0x5CE200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_K2_OFFSET UNITYSDK_OFFSET(0x5CE210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_K3_OFFSET UNITYSDK_OFFSET(0x5CE220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_CREATECACHESAFELOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x5CE230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5CE470)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec
{
	inline static constexpr unsigned int SecT409R1Curve_TypeDefinitionIndex = 21979;

	class SecT409R1Curve : public ::Mono::Security::Interface::TlsProtocols
	{
	public:
		::System::Int32 SECT409R1_DEFAULT_COORDS; // 0x0
		::System::Int32 SECT409R1_FE_LONGS; // 0x0
		::Il2CppArray<::System::Object*>* SECT409R1_AFFINE_ZS; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409R1Point* m_infinity; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_CLONECURVE_OFFSET))(nullptr);
		}

		::System::Boolean SupportsCoordinateSystem(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_SUPPORTSCOORDINATESYSTEM_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_INFINITY_OFFSET))(nullptr);
		}

		::System::Int32 get_FieldSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_FIELDSIZE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_FROMBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_CREATERAWPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_CREATERAWPOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsKoblitz()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_ISKOBLITZ_OFFSET))(nullptr);
		}

		::System::Int32 get_M()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_M_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTrinomial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_ISTRINOMIAL_OFFSET))(nullptr);
		}

		::System::Int32 get_K1()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_K1_OFFSET))(nullptr);
		}

		::System::Int32 get_K2()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_K2_OFFSET))(nullptr);
		}

		::System::Int32 get_K3()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_GET_K3_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_CREATECACHESAFELOOKUPTABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT409R1CURVE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

