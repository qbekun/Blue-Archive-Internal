#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTDESCRIPTION_GETNAME_OFFSET UNITYSDK_OFFSET(0x5F3C30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F3ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTDESCRIPTION_GETTEXT_OFFSET UNITYSDK_OFFSET(0x5F3EE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AlertDescription_TypeDefinitionIndex = 22074;

	class AlertDescription : public Il2CppObject
	{
	public:
		::System::Byte close_notify; // 0x0
		::System::Byte unexpected_message; // 0x0
		::System::Byte bad_record_mac; // 0x0
		::System::Byte decryption_failed; // 0x0
		::System::Byte record_overflow; // 0x0
		::System::Byte decompression_failure; // 0x0
		::System::Byte handshake_failure; // 0x0
		::System::Byte no_certificate; // 0x0
		::System::Byte bad_certificate; // 0x0
		::System::Byte unsupported_certificate; // 0x0
		::System::Byte certificate_revoked; // 0x0
		::System::Byte certificate_expired; // 0x0
		::System::Byte certificate_unknown; // 0x0
		::System::Byte illegal_parameter; // 0x0
		::System::Byte unknown_ca; // 0x0
		::System::Byte access_denied; // 0x0
		::System::Byte decode_error; // 0x0
		::System::Byte decrypt_error; // 0x0
		::System::Byte export_restriction; // 0x0
		::System::Byte protocol_version; // 0x0
		::System::Byte insufficient_security; // 0x0
		::System::Byte internal_error; // 0x0
		::System::Byte user_canceled; // 0x0
		::System::Byte no_renegotiation; // 0x0
		::System::Byte unsupported_extension; // 0x0
		::System::Byte certificate_unobtainable; // 0x0
		::System::Byte unrecognized_name; // 0x0
		::System::Byte bad_certificate_status_response; // 0x0
		::System::Byte bad_certificate_hash_value; // 0x0
		::System::Byte unknown_psk_identity; // 0x0
		::System::Byte inappropriate_fallback; // 0x0

		::System::String* GetName(::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTDESCRIPTION_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetText(::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ALERTDESCRIPTION_GETTEXT_OFFSET))(arg, nullptr);
		}

	};
}

