#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }

#define BASICENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GETENTROPY_OFFSET UNITYSDK_OFFSET(0x67E1F0)
#define BASICENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GET_ISPREDICTIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x67E260)
#define BASICENTROPYSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x67E170)
#define BASICENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GET_ENTROPYSIZE_OFFSET UNITYSDK_OFFSET(0x67E270)

	inline static constexpr unsigned int BasicEntropySource_TypeDefinitionIndex = 22275;

	class BasicEntropySource : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* mSecureRandom; // 0x10
		::System::Boolean mPredictionResistant; // 0x18
		::System::Int32 mEntropySize; // 0x1C

		::Il2CppArray<::System::Object*>* BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySource.GetEntropy()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BASICENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GETENTROPY_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySource.get_IsPredictionResistant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BASICENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GET_ISPREDICTIONRESISTANT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BASICENTROPYSOURCE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IEntropySource.get_EntropySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BASICENTROPYSOURCE_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.IENTROPYSOURCE.GET_ENTROPYSIZE_OFFSET))(nullptr);
		}

	};

