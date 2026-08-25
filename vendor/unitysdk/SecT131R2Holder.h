#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECT131R2HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x82A170)
#define SECT131R2HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x82A350)
#define SECT131R2HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x82A360)

	inline static constexpr unsigned int Sect131r2Holder_TypeDefinitionIndex = 23005;

	class Sect131r2Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0
		::System::Int32 m; // 0x0
		::System::Int32 k1; // 0x0
		::System::Int32 k2; // 0x0
		::System::Int32 k3; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT131R2HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT131R2HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT131R2HOLDER_.CCTOR_OFFSET))(nullptr);
		}

	};

