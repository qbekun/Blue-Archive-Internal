#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECT571K1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x82BE40)
#define SECT571K1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x82BED0)
#define SECT571K1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x82BEC0)

	inline static constexpr unsigned int Sect571k1Holder_TypeDefinitionIndex = 23018;

	class Sect571k1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0
		::System::Int32 m; // 0x0
		::System::Int32 k1; // 0x0
		::System::Int32 k2; // 0x0
		::System::Int32 k3; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT571K1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT571K1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT571K1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

