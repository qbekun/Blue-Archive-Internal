#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo { class ECEndomorphism; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_GET_ENDOMORPHISM_OFFSET UNITYSDK_OFFSET(0x561A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_GET_MAPPEDPOINT_OFFSET UNITYSDK_OFFSET(0x561A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_SET_MAPPEDPOINT_OFFSET UNITYSDK_OFFSET(0x561A20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_SET_ENDOMORPHISM_OFFSET UNITYSDK_OFFSET(0x561A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x561A40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo
{
	inline static constexpr unsigned int EndoPreCompInfo_TypeDefinitionIndex = 21850;

	class EndoPreCompInfo : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* m_mappedPoint; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* get_Endomorphism()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_GET_ENDOMORPHISM_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_MappedPoint()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_GET_MAPPEDPOINT_OFFSET))(nullptr);
		}

		::System::Void set_MappedPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_SET_MAPPEDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Endomorphism(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_SET_ENDOMORPHISM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOPRECOMPINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

