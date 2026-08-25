#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECT239K1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x82B3B0)
#define SECT239K1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x82B440)
#define SECT239K1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x82B430)

	inline static constexpr unsigned int Sect239k1Holder_TypeDefinitionIndex = 23013;

	class Sect239k1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0
		::System::Int32 m; // 0x0
		::System::Int32 k; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT239K1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT239K1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT239K1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

