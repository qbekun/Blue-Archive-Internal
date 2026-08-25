#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define FRP256V1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x895210)
#define FRP256V1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8953B0)
#define FRP256V1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8953C0)

	inline static constexpr unsigned int Frp256v1Holder_TypeDefinitionIndex = 23261;

	class Frp256v1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRP256V1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRP256V1HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRP256V1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

	};

