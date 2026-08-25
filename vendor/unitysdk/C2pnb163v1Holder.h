#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define C2PNB163V1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7E33D0)
#define C2PNB163V1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7E3460)
#define C2PNB163V1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E3450)

	inline static constexpr unsigned int C2pnb163v1Holder_TypeDefinitionIndex = 22841;

	class C2pnb163v1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB163V1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB163V1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB163V1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

