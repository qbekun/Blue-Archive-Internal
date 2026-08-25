#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_TWEAKABLEBLOCKCIPHERPARAMETERS_GET_TWEAK_OFFSET UNITYSDK_OFFSET(0x695680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_TWEAKABLEBLOCKCIPHERPARAMETERS_GET_KEY_OFFSET UNITYSDK_OFFSET(0x695690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_TWEAKABLEBLOCKCIPHERPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6956A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int TweakableBlockCipherParameters_TypeDefinitionIndex = 22372;

	class TweakableBlockCipherParameters : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* tweak; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key; // 0x18

		::Il2CppArray<::System::Object*>* get_Tweak()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_TWEAKABLEBLOCKCIPHERPARAMETERS_GET_TWEAK_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_TWEAKABLEBLOCKCIPHERPARAMETERS_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_TWEAKABLEBLOCKCIPHERPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

