#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs { class HMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_EXTRACT_OFFSET UNITYSDK_OFFSET(0x6CC470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_GENERATEBYTES_OFFSET UNITYSDK_OFFSET(0x6CC5B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_EXPANDNEXT_OFFSET UNITYSDK_OFFSET(0x6CC760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6CC860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6CC950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_GET_DIGEST_OFFSET UNITYSDK_OFFSET(0x6CCB40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int HkdfBytesGenerator_TypeDefinitionIndex = 22468;

	class HkdfBytesGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs::HMac* hMacHash; // 0x10
		::System::Int32 hashLen; // 0x18
		::Il2CppArray<::System::Object*>* info; // 0x20
		::Il2CppArray<::System::Object*>* currentT; // 0x28
		::System::Int32 generatedBytes; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Extract(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_EXTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GenerateBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_GENERATEBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ExpandNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_EXPANDNEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* get_Digest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_HKDFBYTESGENERATOR_GET_DIGEST_OFFSET))(nullptr);
		}

	};
}

