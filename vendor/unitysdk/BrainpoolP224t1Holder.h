#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define BRAINPOOLP224T1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x820120)
#define BRAINPOOLP224T1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x820130)
#define BRAINPOOLP224T1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8201B0)

	inline static constexpr unsigned int BrainpoolP224t1Holder_TypeDefinitionIndex = 22969;

	class BrainpoolP224t1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP224T1HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP224T1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + BRAINPOOLP224T1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

	};

