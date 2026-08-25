#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECP160R1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x827720)
#define SECP160R1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x827910)
#define SECP160R1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x827990)

	inline static constexpr unsigned int Secp160r1Holder_TypeDefinitionIndex = 22992;

	class Secp160r1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP160R1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP160R1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP160R1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

