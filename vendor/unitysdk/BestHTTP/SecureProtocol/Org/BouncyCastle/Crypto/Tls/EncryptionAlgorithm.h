#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ENCRYPTIONALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x6102F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int EncryptionAlgorithm_TypeDefinitionIndex = 22132;

	class EncryptionAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 NULL; // 0x0
		::System::Int32 RC4_40; // 0x0
		::System::Int32 RC4_128; // 0x0
		::System::Int32 RC2_CBC_40; // 0x0
		::System::Int32 IDEA_CBC; // 0x0
		::System::Int32 DES40_CBC; // 0x0
		::System::Int32 DES_CBC; // 0x0
		::System::Int32 cls_3DES_EDE_CBC; // 0x0
		::System::Int32 AES_128_CBC; // 0x0
		::System::Int32 AES_256_CBC; // 0x0
		::System::Int32 AES_128_GCM; // 0x0
		::System::Int32 AES_256_GCM; // 0x0
		::System::Int32 CAMELLIA_128_CBC; // 0x0
		::System::Int32 CAMELLIA_256_CBC; // 0x0
		::System::Int32 SEED_CBC; // 0x0
		::System::Int32 AES_128_CCM; // 0x0
		::System::Int32 AES_128_CCM_8; // 0x0
		::System::Int32 AES_256_CCM; // 0x0
		::System::Int32 AES_256_CCM_8; // 0x0
		::System::Int32 CAMELLIA_128_GCM; // 0x0
		::System::Int32 CAMELLIA_256_GCM; // 0x0
		::System::Int32 CHACHA20_POLY1305; // 0x0
		::System::Int32 AES_128_OCB_TAGLEN96; // 0x0
		::System::Int32 AES_256_OCB_TAGLEN96; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ENCRYPTIONALGORITHM_.CTOR_OFFSET))(nullptr);
		}

	};
}

