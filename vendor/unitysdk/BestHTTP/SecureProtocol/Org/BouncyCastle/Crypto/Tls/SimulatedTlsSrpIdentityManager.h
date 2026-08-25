#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Srp6GroupParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp { class Srp6VerifierGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSrpLoginParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SimulatedTlsSrpIdentityManager; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIMULATEDTLSSRPIDENTITYMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x615B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIMULATEDTLSSRPIDENTITYMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x615C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIMULATEDTLSSRPIDENTITYMANAGER_GETLOGINPARAMETERS_OFFSET UNITYSDK_OFFSET(0x615C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIMULATEDTLSSRPIDENTITYMANAGER_GETRFC5054DEFAULT_OFFSET UNITYSDK_OFFSET(0x616160)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int SimulatedTlsSrpIdentityManager_TypeDefinitionIndex = 22172;

	class SimulatedTlsSrpIdentityManager : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* PREFIX_PASSWORD; // 0x0
		::Il2CppArray<::System::Object*>* PREFIX_SALT; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mGroup; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* mVerifierGenerator; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mMac; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIMULATEDTLSSRPIDENTITYMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIMULATEDTLSSRPIDENTITYMANAGER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* GetLoginParameters(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIMULATEDTLSSRPIDENTITYMANAGER_GETLOGINPARAMETERS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager* GetRfc5054Default(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SimulatedTlsSrpIdentityManager*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SIMULATEDTLSSRPIDENTITYMANAGER_GETRFC5054DEFAULT_OFFSET))(arg, arg, nullptr);
		}

	};
}

