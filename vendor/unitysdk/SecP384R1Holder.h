#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECP384R1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x829540)
#define SECP384R1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x829730)
#define SECP384R1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8297B0)

	inline static constexpr unsigned int Secp384r1Holder_TypeDefinitionIndex = 23000;

	class Secp384r1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP384R1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP384R1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP384R1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

