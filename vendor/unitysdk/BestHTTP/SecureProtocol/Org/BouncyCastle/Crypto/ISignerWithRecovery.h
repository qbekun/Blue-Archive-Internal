#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISIGNERWITHRECOVERY_UPDATEWITHRECOVEREDMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISIGNERWITHRECOVERY_GETRECOVEREDMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISIGNERWITHRECOVERY_HASFULLMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int ISignerWithRecovery_TypeDefinitionIndex = 22045;

	class ISignerWithRecovery : public Il2CppObject
	{
	public:
		::System::Void UpdateWithRecoveredMessage(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISIGNERWITHRECOVERY_UPDATEWITHRECOVEREDMESSAGE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRecoveredMessage()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISIGNERWITHRECOVERY_GETRECOVEREDMESSAGE_OFFSET))(nullptr);
		}

		::System::Boolean HasFullMessage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ISIGNERWITHRECOVERY_HASFULLMESSAGE_OFFSET))(nullptr);
		}

	};
}

