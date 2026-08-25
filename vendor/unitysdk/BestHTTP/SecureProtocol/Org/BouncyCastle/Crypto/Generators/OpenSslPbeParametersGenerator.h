#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6D2BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6D2C30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6D2C50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDKEY_OFFSET UNITYSDK_OFFSET(0x6D2C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6D3040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6D3060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6D30E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6D31C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDMACPARAMETERS_OFFSET UNITYSDK_OFFSET(0x6D32B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int OpenSslPbeParametersGenerator_TypeDefinitionIndex = 22477;

	class OpenSslPbeParametersGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_INIT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateDerivedKey(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::System::String* str, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_OPENSSLPBEPARAMETERSGENERATOR_GENERATEDERIVEDMACPARAMETERS_OFFSET))(arg, nullptr);
		}

	};
}

