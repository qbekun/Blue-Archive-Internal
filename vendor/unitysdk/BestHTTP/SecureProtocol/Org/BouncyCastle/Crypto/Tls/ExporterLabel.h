#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_EXPORTERLABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x610300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_EXPORTERLABEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x610310)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ExporterLabel_TypeDefinitionIndex = 22133;

	class ExporterLabel : public Il2CppObject
	{
	public:
		::System::String* client_finished; // 0x0
		::System::String* server_finished; // 0x0
		::System::String* master_secret; // 0x0
		::System::String* key_expansion; // 0x0
		::System::String* client_EAP_encryption; // 0x0
		::System::String* ttls_keying_material; // 0x0
		::System::String* ttls_challenge; // 0x0
		::System::String* dtls_srtp; // 0x0
		::System::String* extended_master_secret; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_EXPORTERLABEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_EXPORTERLABEL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

