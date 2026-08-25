#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class AbstractF2mPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc { class ZTauElement; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x560D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x560D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_MULTIPLYPOSITIVE_OFFSET UNITYSDK_OFFSET(0x560DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_MULTIPLYWTNAF_OFFSET UNITYSDK_OFFSET(0x560FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_MULTIPLYFROMWTNAF_OFFSET UNITYSDK_OFFSET(0x561120)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier
{
	inline static constexpr unsigned int WTauNafMultiplier_TypeDefinitionIndex = 21845;

	class WTauNafMultiplier : public ::Mono::Security::Interface::TlsException
	{
	public:
		::System::String* PRECOMP_NAME; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_MULTIPLYPOSITIVE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyWTnaf(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* arg, ::System::SByte arg, ::System::SByte arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::System::SByte, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_MULTIPLYWTNAF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromWTnaf(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_WTAUNAFMULTIPLIER_MULTIPLYFROMWTNAF_OFFSET))(arg, arg, nullptr);
		}

	};
}

