#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_EXTENSIONTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x610370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_EXTENSIONTYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x610380)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ExtensionType_TypeDefinitionIndex = 22134;

	class ExtensionType : public Il2CppObject
	{
	public:
		::System::Int32 server_name; // 0x0
		::System::Int32 max_fragment_length; // 0x0
		::System::Int32 client_certificate_url; // 0x0
		::System::Int32 trusted_ca_keys; // 0x0
		::System::Int32 truncated_hmac; // 0x0
		::System::Int32 status_request; // 0x0
		::System::Int32 user_mapping; // 0x0
		::System::Int32 client_authz; // 0x0
		::System::Int32 server_authz; // 0x0
		::System::Int32 cert_type; // 0x0
		::System::Int32 supported_groups; // 0x0
		::System::Int32 elliptic_curves; // 0x0
		::System::Int32 ec_point_formats; // 0x0
		::System::Int32 srp; // 0x0
		::System::Int32 signature_algorithms; // 0x0
		::System::Int32 use_srtp; // 0x0
		::System::Int32 heartbeat; // 0x0
		::System::Int32 application_layer_protocol_negotiation; // 0x0
		::System::Int32 status_request_v2; // 0x0
		::System::Int32 signed_certificate_timestamp; // 0x0
		::System::Int32 client_certificate_type; // 0x0
		::System::Int32 server_certificate_type; // 0x0
		::System::Int32 padding; // 0x0
		::System::Int32 encrypt_then_mac; // 0x0
		::System::Int32 extended_master_secret; // 0x0
		::System::Int32 DRAFT_token_binding; // 0x0
		::System::Int32 cached_info; // 0x0
		::System::Int32 session_ticket; // 0x0
		::System::Int32 negotiated_ff_dhe_groups; // 0x4
		::System::Int32 renegotiation_info; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_EXTENSIONTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_EXTENSIONTYPE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

