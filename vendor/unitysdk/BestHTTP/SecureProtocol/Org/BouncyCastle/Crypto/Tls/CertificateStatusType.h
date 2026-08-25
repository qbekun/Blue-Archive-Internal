#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F7B30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CertificateStatusType_TypeDefinitionIndex = 22086;

	class CertificateStatusType : public Il2CppObject
	{
	public:
		::System::Byte ocsp; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATESTATUSTYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

