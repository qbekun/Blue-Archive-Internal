#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define C2PNB272W1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7E4C00)
#define C2PNB272W1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7E4DA0)
#define C2PNB272W1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E4E20)

	inline static constexpr unsigned int C2pnb272w1Holder_TypeDefinitionIndex = 22852;

	class C2pnb272w1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB272W1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB272W1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2PNB272W1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

