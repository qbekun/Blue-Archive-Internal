#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CLIENTCERTIFICATETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F95F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ClientCertificateType_TypeDefinitionIndex = 22095;

	class ClientCertificateType : public Il2CppObject
	{
	public:
		::System::Byte rsa_sign; // 0x0
		::System::Byte dss_sign; // 0x0
		::System::Byte rsa_fixed_dh; // 0x0
		::System::Byte dss_fixed_dh; // 0x0
		::System::Byte rsa_ephemeral_dh_RESERVED; // 0x0
		::System::Byte dss_ephemeral_dh_RESERVED; // 0x0
		::System::Byte fortezza_dms_RESERVED; // 0x0
		::System::Byte ecdsa_sign; // 0x0
		::System::Byte rsa_fixed_ecdh; // 0x0
		::System::Byte ecdsa_fixed_ecdh; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_CLIENTCERTIFICATETYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

