#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F7B40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int CertificateType_TypeDefinitionIndex = 22087;

	class CertificateType : public Il2CppObject
	{
	public:
		::System::Byte X509; // 0x0
		::System::Byte OpenPGP; // 0x0
		::System::Byte RawPublicKey; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CERTIFICATETYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

