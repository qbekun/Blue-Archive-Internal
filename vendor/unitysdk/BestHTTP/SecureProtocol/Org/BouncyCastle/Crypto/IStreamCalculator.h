#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISTREAMCALCULATOR_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISTREAMCALCULATOR_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int IStreamCalculator_TypeDefinitionIndex = 22046;

	class IStreamCalculator : public Il2CppObject
	{
	public:
		::System::Object* GetResult()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISTREAMCALCULATOR_GETRESULT_OFFSET))(nullptr);
		}

		::System::IO::Stream* get_Stream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISTREAMCALCULATOR_GET_STREAM_OFFSET))(nullptr);
		}

	};
}

