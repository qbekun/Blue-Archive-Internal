#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_GETNAME_OFFSET UNITYSDK_OFFSET(0x610400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x6104A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_GETTEXT_OFFSET UNITYSDK_OFFSET(0x6014A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_ISRECOGNIZED_OFFSET UNITYSDK_OFFSET(0x6104B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_.CTOR_OFFSET UNITYSDK_OFFSET(0x6104C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int HashAlgorithm_TypeDefinitionIndex = 22137;

	class HashAlgorithm : public Il2CppObject
	{
	public:
		::System::Byte none; // 0x0
		::System::Byte md5; // 0x0
		::System::Byte sha1; // 0x0
		::System::Byte sha224; // 0x0
		::System::Byte sha256; // 0x0
		::System::Byte sha384; // 0x0
		::System::Byte sha512; // 0x0

		::System::String* GetName(::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPrivate(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_ISPRIVATE_OFFSET))(arg, nullptr);
		}

		::System::String* GetText(::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_GETTEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRecognized(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_ISRECOGNIZED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_HASHALGORITHM_.CTOR_OFFSET))(nullptr);
		}

	};
}

