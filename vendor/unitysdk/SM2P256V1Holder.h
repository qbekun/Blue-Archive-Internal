#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SM2P256V1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x851A00)
#define SM2P256V1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x851A10)
#define SM2P256V1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x851A90)

	inline static constexpr unsigned int SM2P256V1Holder_TypeDefinitionIndex = 23102;

	class SM2P256V1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SM2P256V1HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SM2P256V1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SM2P256V1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

	};

