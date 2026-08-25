#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECP128R2HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x826EC0)
#define SECP128R2HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x826ED0)
#define SECP128R2HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8270C0)

	inline static constexpr unsigned int Secp128r2Holder_TypeDefinitionIndex = 22990;

	class Secp128r2Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP128R2HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP128R2HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECP128R2HOLDER_.CCTOR_OFFSET))(nullptr);
		}

	};

