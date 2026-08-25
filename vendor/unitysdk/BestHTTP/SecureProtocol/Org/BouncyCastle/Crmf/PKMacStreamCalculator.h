#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO { class MacSink; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACSTREAMCALCULATOR_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x78C730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACSTREAMCALCULATOR_GETRESULT_OFFSET UNITYSDK_OFFSET(0x78C740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACSTREAMCALCULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x78C800)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int PKMacStreamCalculator_TypeDefinitionIndex = 22658;

	class PKMacStreamCalculator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO::MacSink* _stream; // 0x10

		::System::IO::Stream* get_Stream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACSTREAMCALCULATOR_GET_STREAM_OFFSET))(nullptr);
		}

		::System::Object* GetResult()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACSTREAMCALCULATOR_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACSTREAMCALCULATOR_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

