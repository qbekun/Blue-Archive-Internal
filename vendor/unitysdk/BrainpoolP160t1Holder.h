#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define BRAINPOOLP160T1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x81F860)
#define BRAINPOOLP160T1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x81FA00)
#define BRAINPOOLP160T1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x81FA80)

	inline static constexpr unsigned int BrainpoolP160t1Holder_TypeDefinitionIndex = 22965;

	class BrainpoolP160t1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP160T1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP160T1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP160T1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

