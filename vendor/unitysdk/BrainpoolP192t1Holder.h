#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define BRAINPOOLP192T1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x81FCC0)
#define BRAINPOOLP192T1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x81FCD0)
#define BRAINPOOLP192T1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x81FD50)

	inline static constexpr unsigned int BrainpoolP192t1Holder_TypeDefinitionIndex = 22967;

	class BrainpoolP192t1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP192T1HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP192T1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP192T1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

	};

