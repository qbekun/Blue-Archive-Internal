#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define BRAINPOOLP512R1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x821070)
#define BRAINPOOLP512R1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x821100)
#define BRAINPOOLP512R1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8210F0)

	inline static constexpr unsigned int BrainpoolP512r1Holder_TypeDefinitionIndex = 22976;

	class BrainpoolP512r1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP512R1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP512R1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP512R1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

