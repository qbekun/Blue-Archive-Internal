#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class UseSrtpData; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_ADDUSESRTPEXTENSION_OFFSET UNITYSDK_OFFSET(0x65ED90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_READUSESRTPEXTENSION_OFFSET UNITYSDK_OFFSET(0x65F000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_CREATEUSESRTPEXTENSION_OFFSET UNITYSDK_OFFSET(0x65EE70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_.CTOR_OFFSET UNITYSDK_OFFSET(0x65F5D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_GETUSESRTPEXTENSION_OFFSET UNITYSDK_OFFSET(0x65F5E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsSRTPUtils_TypeDefinitionIndex = 22239;

	class TlsSRTPUtils : public Il2CppObject
	{
	public:
		::System::Void AddUseSrtpExtension(::System::Collections::IDictionary* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::UseSrtpData* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::UseSrtpData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_ADDUSESRTPEXTENSION_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::UseSrtpData* ReadUseSrtpExtension(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::UseSrtpData*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_READUSESRTPEXTENSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateUseSrtpExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::UseSrtpData* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::UseSrtpData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_CREATEUSESRTPEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::UseSrtpData* GetUseSrtpExtension(::System::Collections::IDictionary* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::UseSrtpData*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRTPUTILS_GETUSESRTPEXTENSION_OFFSET))(arg, nullptr);
		}

	};
}

