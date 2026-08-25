#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x69D5C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURERESULT_COLLECT_OFFSET UNITYSDK_OFFSET(0x69D600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURERESULT_COLLECT_OFFSET UNITYSDK_OFFSET(0x69D6A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Operators
{
	inline static constexpr unsigned int DefaultSignatureResult_TypeDefinitionIndex = 22399;

	class DefaultSignatureResult : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* mSigner; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURERESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Collect()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURERESULT_COLLECT_OFFSET))(nullptr);
		}

		::System::Int32 Collect(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_DEFAULTSIGNATURERESULT_COLLECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

