#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { class Dstu7624Engine; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_UPDATE_OFFSET UNITYSDK_OFFSET(0x6BA570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_XOR_OFFSET UNITYSDK_OFFSET(0x6BA690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_RESET_OFFSET UNITYSDK_OFFSET(0x6BA740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_GETMACSIZE_OFFSET UNITYSDK_OFFSET(0x6BA820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x6BA830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6BA950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6BA980)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6BA620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_INIT_OFFSET UNITYSDK_OFFSET(0x6BAAE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x6BAC30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	inline static constexpr unsigned int Dstu7624Mac_TypeDefinitionIndex = 22434;

	class Dstu7624Mac : public Il2CppObject
	{
	public:
		::System::Int32 macSize; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* engine; // 0x18
		::System::Int32 blockSize; // 0x20
		::Il2CppArray<::System::Object*>* c; // 0x28
		::Il2CppArray<::System::Object*>* cTemp; // 0x30
		::Il2CppArray<::System::Object*>* kDelta; // 0x38
		::Il2CppArray<::System::Object*>* buf; // 0x40
		::System::Int32 bufOff; // 0x48

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Xor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_XOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_RESET_OFFSET))(nullptr);
		}

		::System::Int32 GetMacSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_GETMACSIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void processBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_PROCESSBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_DSTU7624MAC_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

