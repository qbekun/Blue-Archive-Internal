#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define C2PNB176W1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E3AC0)
#define C2PNB176W1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7E3AD0)
#define C2PNB176W1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7E3B50)

	inline static constexpr unsigned int C2pnb176w1Holder_TypeDefinitionIndex = 22844;

	class C2pnb176w1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB176W1HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB176W1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB176W1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

	};

