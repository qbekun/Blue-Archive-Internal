#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define WAPIP192V1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x851C30)
#define WAPIP192V1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x851DD0)
#define WAPIP192V1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x851E50)

	inline static constexpr unsigned int WapiP192V1Holder_TypeDefinitionIndex = 23103;

	class WapiP192V1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAPIP192V1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAPIP192V1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAPIP192V1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

