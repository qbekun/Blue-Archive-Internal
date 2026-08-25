#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo { class ScalarSplitParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x562210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAPARAMETERS_GET_LAMBDA_OFFSET UNITYSDK_OFFSET(0x562270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAPARAMETERS_GET_SPLITPARAMS_OFFSET UNITYSDK_OFFSET(0x562280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAPARAMETERS_GET_I_OFFSET UNITYSDK_OFFSET(0x562290)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo
{
	inline static constexpr unsigned int GlvTypeAParameters_TypeDefinitionIndex = 21855;

	class GlvTypeAParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m_i; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* m_lambda; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* m_splitParams; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Lambda()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAPARAMETERS_GET_LAMBDA_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* get_SplitParams()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAPARAMETERS_GET_SPLITPARAMS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_I()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAPARAMETERS_GET_I_OFFSET))(nullptr);
		}

	};
}

