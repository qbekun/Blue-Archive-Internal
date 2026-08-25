#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IMEMOABLE_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IMEMOABLE_COPY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	inline static constexpr unsigned int IMemoable_TypeDefinitionIndex = 21570;

	class IMemoable : public Il2CppObject
	{
	public:
		::System::Void Reset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IMEMOABLE_RESET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IMEMOABLE_COPY_OFFSET))(nullptr);
		}

	};
}

