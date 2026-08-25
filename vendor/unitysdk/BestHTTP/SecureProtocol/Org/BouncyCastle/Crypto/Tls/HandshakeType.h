#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HANDSHAKETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6103F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int HandshakeType_TypeDefinitionIndex = 22136;

	class HandshakeType : public Il2CppObject
	{
	public:
		::System::Byte hello_request; // 0x0
		::System::Byte client_hello; // 0x0
		::System::Byte server_hello; // 0x0
		::System::Byte certificate; // 0x0
		::System::Byte server_key_exchange; // 0x0
		::System::Byte certificate_request; // 0x0
		::System::Byte server_hello_done; // 0x0
		::System::Byte certificate_verify; // 0x0
		::System::Byte client_key_exchange; // 0x0
		::System::Byte finished; // 0x0
		::System::Byte certificate_url; // 0x0
		::System::Byte certificate_status; // 0x0
		::System::Byte hello_verify_request; // 0x0
		::System::Byte supplemental_data; // 0x0
		::System::Byte session_ticket; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HANDSHAKETYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

