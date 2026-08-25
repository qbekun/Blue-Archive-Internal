#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECP112R1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x826740)
#define SECP112R1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x826750)
#define SECP112R1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8267D0)

	inline static constexpr unsigned int Secp112r1Holder_TypeDefinitionIndex = 22987;

	class Secp112r1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP112R1HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP112R1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP112R1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

	};

