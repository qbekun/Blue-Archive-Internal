#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg { class ISP80090Drbg; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }

#define HASHDRBGPROVIDER_GET_OFFSET UNITYSDK_OFFSET(0x680B80)
#define HASHDRBGPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x680680)

	inline static constexpr unsigned int HashDrbgProvider_TypeDefinitionIndex = 22286;

	class HashDrbgProvider : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mDigest; // 0x10
		::Il2CppArray<::System::Object*>* mNonce; // 0x18
		::Il2CppArray<::System::Object*>* mPersonalizationString; // 0x20
		::System::Int32 mSecurityStrength; // 0x28

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::PVOID))((::PBYTE)hIl2Cpp + HASHDRBGPROVIDER_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HASHDRBGPROVIDER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

