#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTCHAINTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F53F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTCHAINTYPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x5F5400)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CertChainType_TypeDefinitionIndex = 22081;

	class CertChainType : public Il2CppObject
	{
	public:
		::System::Byte individual_certs; // 0x0
		::System::Byte pkipath; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTCHAINTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTCHAINTYPE_ISVALID_OFFSET))(arg, nullptr);
		}

	};
}

