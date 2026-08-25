#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ServerNameList; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_ENCODE_OFFSET UNITYSDK_OFFSET(0x614650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x614C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_GET_SERVERNAMES_OFFSET UNITYSDK_OFFSET(0x614CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_PARSE_OFFSET UNITYSDK_OFFSET(0x614D00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_CHECKNAMETYPE_OFFSET UNITYSDK_OFFSET(0x614BD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ServerNameList_TypeDefinitionIndex = 22163;

	class ServerNameList : public Il2CppObject
	{
	public:
		::System::Collections::IList* mServerNameList; // 0x10

		::System::Void Encode(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* get_ServerNames()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_GET_SERVERNAMES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ServerNameList* Parse(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ServerNameList*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_PARSE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CheckNameType(::Il2CppArray<::System::Object*>* arg, ::System::Byte arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SERVERNAMELIST_CHECKNAMETYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

