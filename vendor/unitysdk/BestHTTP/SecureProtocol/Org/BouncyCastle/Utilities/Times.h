#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_TIMES_.CTOR_OFFSET UNITYSDK_OFFSET(0x8CC360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_TIMES_NANOTIME_OFFSET UNITYSDK_OFFSET(0x8CC370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_TIMES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8CC400)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	inline static constexpr unsigned int Times_TypeDefinitionIndex = 21575;

	class Times : public Il2CppObject
	{
	public:
		::System::Int64 NanosecondsPerTick; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_TIMES_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 NanoTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_TIMES_NANOTIME_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_TIMES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

