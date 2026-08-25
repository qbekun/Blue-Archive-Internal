#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg { class ISP80090Drbg; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IEntropySource; }

#define CTRDRBGPROVIDER_GET_OFFSET UNITYSDK_OFFSET(0x681550)
#define CTRDRBGPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6808C0)

	inline static constexpr unsigned int CtrDrbgProvider_TypeDefinitionIndex = 22288;

	class CtrDrbgProvider : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* mBlockCipher; // 0x10
		::System::Int32 mKeySizeInBits; // 0x18
		::Il2CppArray<::System::Object*>* mNonce; // 0x20
		::Il2CppArray<::System::Object*>* mPersonalizationString; // 0x28
		::System::Int32 mSecurityStrength; // 0x30

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Get(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource*, ::PVOID))((::PBYTE)hIl2Cpp + CTRDRBGPROVIDER_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CTRDRBGPROVIDER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

