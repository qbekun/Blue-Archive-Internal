#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define C2PNB163V2HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E3630)
#define C2PNB163V2HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7E3640)
#define C2PNB163V2HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7E3810)

	inline static constexpr unsigned int C2pnb163v2Holder_TypeDefinitionIndex = 22842;

	class C2pnb163v2Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB163V2HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB163V2HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB163V2HOLDER_.CCTOR_OFFSET))(nullptr);
		}

	};

