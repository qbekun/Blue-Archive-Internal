#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_KEYEXCHANGEALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x610D30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int KeyExchangeAlgorithm_TypeDefinitionIndex = 22144;

	class KeyExchangeAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 NULL; // 0x0
		::System::Int32 RSA; // 0x0
		::System::Int32 RSA_EXPORT; // 0x0
		::System::Int32 DHE_DSS; // 0x0
		::System::Int32 DHE_DSS_EXPORT; // 0x0
		::System::Int32 DHE_RSA; // 0x0
		::System::Int32 DHE_RSA_EXPORT; // 0x0
		::System::Int32 DH_DSS; // 0x0
		::System::Int32 DH_DSS_EXPORT; // 0x0
		::System::Int32 DH_RSA; // 0x0
		::System::Int32 DH_RSA_EXPORT; // 0x0
		::System::Int32 DH_anon; // 0x0
		::System::Int32 DH_anon_EXPORT; // 0x0
		::System::Int32 PSK; // 0x0
		::System::Int32 DHE_PSK; // 0x0
		::System::Int32 RSA_PSK; // 0x0
		::System::Int32 ECDH_ECDSA; // 0x0
		::System::Int32 ECDHE_ECDSA; // 0x0
		::System::Int32 ECDH_RSA; // 0x0
		::System::Int32 ECDHE_RSA; // 0x0
		::System::Int32 ECDH_anon; // 0x0
		::System::Int32 SRP; // 0x0
		::System::Int32 SRP_DSS; // 0x0
		::System::Int32 SRP_RSA; // 0x0
		::System::Int32 ECDHE_PSK; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_KEYEXCHANGEALGORITHM_.CTOR_OFFSET))(nullptr);
		}

	};
}

