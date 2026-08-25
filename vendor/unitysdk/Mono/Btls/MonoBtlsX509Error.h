#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509Error; }

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509Error_TypeDefinitionIndex = 29128;

	class MonoBtlsX509Error : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Btls::MonoBtlsX509Error* OK; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNABLE_TO_GET_ISSUER_CERT; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNABLE_TO_GET_CRL; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNABLE_TO_DECRYPT_CERT_SIGNATURE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNABLE_TO_DECRYPT_CRL_SIGNATURE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CERT_SIGNATURE_FAILURE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CRL_SIGNATURE_FAILURE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CERT_NOT_YET_VALID; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CERT_HAS_EXPIRED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CRL_NOT_YET_VALID; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CRL_HAS_EXPIRED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* ERROR_IN_CERT_NOT_BEFORE_FIELD; // 0x0
		::Mono::Btls::MonoBtlsX509Error* ERROR_IN_CERT_NOT_AFTER_FIELD; // 0x0
		::Mono::Btls::MonoBtlsX509Error* ERROR_IN_CRL_LAST_UPDATE_FIELD; // 0x0
		::Mono::Btls::MonoBtlsX509Error* ERROR_IN_CRL_NEXT_UPDATE_FIELD; // 0x0
		::Mono::Btls::MonoBtlsX509Error* OUT_OF_MEM; // 0x0
		::Mono::Btls::MonoBtlsX509Error* DEPTH_ZERO_SELF_SIGNED_CERT; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SELF_SIGNED_CERT_IN_CHAIN; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNABLE_TO_GET_ISSUER_CERT_LOCALLY; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNABLE_TO_VERIFY_LEAF_SIGNATURE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CERT_CHAIN_TOO_LONG; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CERT_REVOKED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* INVALID_CA; // 0x0
		::Mono::Btls::MonoBtlsX509Error* PATH_LENGTH_EXCEEDED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* INVALID_PURPOSE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CERT_UNTRUSTED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CERT_REJECTED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SUBJECT_ISSUER_MISMATCH; // 0x0
		::Mono::Btls::MonoBtlsX509Error* AKID_SKID_MISMATCH; // 0x0
		::Mono::Btls::MonoBtlsX509Error* AKID_ISSUER_SERIAL_MISMATCH; // 0x0
		::Mono::Btls::MonoBtlsX509Error* KEYUSAGE_NO_CERTSIGN; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNABLE_TO_GET_CRL_ISSUER; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNHANDLED_CRITICAL_EXTENSION; // 0x0
		::Mono::Btls::MonoBtlsX509Error* KEYUSAGE_NO_CRL_SIGN; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNHANDLED_CRITICAL_CRL_EXTENSION; // 0x0
		::Mono::Btls::MonoBtlsX509Error* INVALID_NON_CA; // 0x0
		::Mono::Btls::MonoBtlsX509Error* PROXY_PATH_LENGTH_EXCEEDED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* KEYUSAGE_NO_DIGITAL_SIGNATURE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* PROXY_CERTIFICATES_NOT_ALLOWED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* INVALID_EXTENSION; // 0x0
		::Mono::Btls::MonoBtlsX509Error* INVALID_POLICY_EXTENSION; // 0x0
		::Mono::Btls::MonoBtlsX509Error* NO_EXPLICIT_POLICY; // 0x0
		::Mono::Btls::MonoBtlsX509Error* DIFFERENT_CRL_SCOPE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNSUPPORTED_EXTENSION_FEATURE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNNESTED_RESOURCE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* PERMITTED_VIOLATION; // 0x0
		::Mono::Btls::MonoBtlsX509Error* EXCLUDED_VIOLATION; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SUBTREE_MINMAX; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNSUPPORTED_CONSTRAINT_TYPE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNSUPPORTED_CONSTRAINT_SYNTAX; // 0x0
		::Mono::Btls::MonoBtlsX509Error* UNSUPPORTED_NAME_SYNTAX; // 0x0
		::Mono::Btls::MonoBtlsX509Error* CRL_PATH_VALIDATION_ERROR; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SUITE_B_INVALID_VERSION; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SUITE_B_INVALID_ALGORITHM; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SUITE_B_INVALID_CURVE; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SUITE_B_INVALID_SIGNATURE_ALGORITHM; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SUITE_B_LOS_NOT_ALLOWED; // 0x0
		::Mono::Btls::MonoBtlsX509Error* SUITE_B_CANNOT_SIGN_P_384_WITH_P_256; // 0x0
		::Mono::Btls::MonoBtlsX509Error* HOSTNAME_MISMATCH; // 0x0
		::Mono::Btls::MonoBtlsX509Error* EMAIL_MISMATCH; // 0x0
		::Mono::Btls::MonoBtlsX509Error* IP_ADDRESS_MISMATCH; // 0x0
		::Mono::Btls::MonoBtlsX509Error* APPLICATION_VERIFICATION; // 0x0

	};
}

