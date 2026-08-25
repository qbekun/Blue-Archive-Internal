#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRTPPROTECTIONPROFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x616E30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int SrtpProtectionProfile_TypeDefinitionIndex = 22175;

	class SrtpProtectionProfile : public Il2CppObject
	{
	public:
		::System::Int32 SRTP_AES128_CM_HMAC_SHA1_80; // 0x0
		::System::Int32 SRTP_AES128_CM_HMAC_SHA1_32; // 0x0
		::System::Int32 SRTP_NULL_HMAC_SHA1_80; // 0x0
		::System::Int32 SRTP_NULL_HMAC_SHA1_32; // 0x0
		::System::Int32 SRTP_AEAD_AES_128_GCM; // 0x0
		::System::Int32 SRTP_AEAD_AES_256_GCM; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SRTPPROTECTIONPROFILE_.CTOR_OFFSET))(nullptr);
		}

	};
}

