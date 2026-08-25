#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECP160K1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x827140)
#define SECP160K1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8271D0)
#define SECP160K1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8271C0)

	inline static constexpr unsigned int Secp160k1Holder_TypeDefinitionIndex = 22991;

	class Secp160k1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP160K1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP160K1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP160K1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

