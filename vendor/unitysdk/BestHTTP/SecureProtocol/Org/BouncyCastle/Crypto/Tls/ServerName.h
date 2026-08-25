#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ServerName; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_PARSE_OFFSET UNITYSDK_OFFSET(0x614180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_GETHOSTNAME_OFFSET UNITYSDK_OFFSET(0x614350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_ISCORRECTTYPE_OFFSET UNITYSDK_OFFSET(0x614440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_GET_NAMETYPE_OFFSET UNITYSDK_OFFSET(0x614500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_ENCODE_OFFSET UNITYSDK_OFFSET(0x614510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x614640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x6142A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ServerName_TypeDefinitionIndex = 22162;

	class ServerName : public Il2CppObject
	{
	public:
		::System::Byte mNameType; // 0x10
		::System::Object* mName; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ServerName* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ServerName*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_PARSE_OFFSET))(arg, nullptr);
		}

		::System::String* GetHostName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_GETHOSTNAME_OFFSET))(nullptr);
		}

		::System::Boolean IsCorrectType(::System::Byte arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_ISCORRECTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte get_NameType()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_GET_NAMETYPE_OFFSET))(nullptr);
		}

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Name()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAME_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

