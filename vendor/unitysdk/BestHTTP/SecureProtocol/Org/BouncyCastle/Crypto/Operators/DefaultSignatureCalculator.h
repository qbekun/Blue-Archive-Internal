#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO { class SignerSink; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURECALCULATOR_GETRESULT_OFFSET UNITYSDK_OFFSET(0x69D530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURECALCULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x69CF70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURECALCULATOR_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x69D5F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Operators
{
	inline static constexpr unsigned int DefaultSignatureCalculator_TypeDefinitionIndex = 22398;

	class DefaultSignatureCalculator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO::SignerSink* mSignerSink; // 0x10

		::System::Object* GetResult()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURECALCULATOR_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURECALCULATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* get_Stream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURECALCULATOR_GET_STREAM_OFFSET))(nullptr);
		}

	};
}

