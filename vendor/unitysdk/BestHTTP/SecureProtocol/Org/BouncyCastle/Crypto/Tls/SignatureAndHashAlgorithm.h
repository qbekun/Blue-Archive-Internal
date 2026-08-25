#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SignatureAndHashAlgorithm; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x615610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6156E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_PARSE_OFFSET UNITYSDK_OFFSET(0x602D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_ENCODE_OFFSET UNITYSDK_OFFSET(0x615880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x615720)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_GET_HASH_OFFSET UNITYSDK_OFFSET(0x615910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x615920)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int SignatureAndHashAlgorithm_TypeDefinitionIndex = 22169;

	class SignatureAndHashAlgorithm : public Il2CppObject
	{
	public:
		::System::Byte mHash; // 0x10
		::System::Byte mSignature; // 0x11

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_GETHASHCODE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte get_Hash()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_GET_HASH_OFFSET))(nullptr);
		}

		::System::Byte get_Signature()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIGNATUREANDHASHALGORITHM_GET_SIGNATURE_OFFSET))(nullptr);
		}

	};
}

