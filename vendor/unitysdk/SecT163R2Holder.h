#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECT163R2HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x82A850)
#define SECT163R2HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x82A8E0)
#define SECT163R2HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x82A8D0)

	inline static constexpr unsigned int Sect163r2Holder_TypeDefinitionIndex = 23008;

	class Sect163r2Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0
		::System::Int32 m; // 0x0
		::System::Int32 k1; // 0x0
		::System::Int32 k2; // 0x0
		::System::Int32 k3; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT163R2HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT163R2HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT163R2HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

