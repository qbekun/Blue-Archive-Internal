#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSrpLoginParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPIDENTITYMANAGER_GETLOGINPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsSrpIdentityManager_TypeDefinitionIndex = 22235;

	class TlsSrpIdentityManager : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* GetLoginParameters(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPIDENTITYMANAGER_GETLOGINPARAMETERS_OFFSET))(arg, nullptr);
		}

	};
}

