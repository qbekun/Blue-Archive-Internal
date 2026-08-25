#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo { class ScalarSplitParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo { class ECEndomorphism; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x561A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_DECOMPOSESCALAR_OFFSET UNITYSDK_OFFSET(0x561A60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x561DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_MAPPOINT_OFFSET UNITYSDK_OFFSET(0x55C5C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_CALCULATEB_OFFSET UNITYSDK_OFFSET(0x561CC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo
{
	inline static constexpr unsigned int EndoUtilities_TypeDefinitionIndex = 21852;

	class EndoUtilities : public Il2CppObject
	{
	public:
		::System::String* PRECOMP_NAME; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* DecomposeScalar(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_DECOMPOSESCALAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* MapPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_MAPPOINT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateB(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_ENDOUTILITIES_CALCULATEB_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

