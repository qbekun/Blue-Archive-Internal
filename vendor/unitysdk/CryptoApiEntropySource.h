#pragma once
#include "unitysdk.h"

#define CRYPTOAPIENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GET_ENTROPYSIZE_OFFSET UNITYSDK_OFFSET(0x67E400)
#define CRYPTOAPIENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GET_ISPREDICTIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x67E410)
#define CRYPTOAPIENTROPYSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x67E3C0)
#define CRYPTOAPIENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GETENTROPY_OFFSET UNITYSDK_OFFSET(0x67E420)

	inline static constexpr unsigned int CryptoApiEntropySource_TypeDefinitionIndex = 22277;

	class CryptoApiEntropySource : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::RandomNumberGenerator* mRng; // 0x10
		::System::Boolean mPredictionResistant; // 0x18
		::System::Int32 mEntropySize; // 0x1C

		::System::Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRYPTOAPIENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GET_ENTROPYSIZE_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRYPTOAPIENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GET_ISPREDICTIONRESISTANT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::RandomNumberGenerator* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RandomNumberGenerator*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CRYPTOAPIENTROPYSOURCE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySource.GetEntropy()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRYPTOAPIENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GETENTROPY_OFFSET))(nullptr);
		}

	};

