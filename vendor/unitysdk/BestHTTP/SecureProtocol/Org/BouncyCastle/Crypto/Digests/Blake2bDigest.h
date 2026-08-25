#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class Blake2bDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x734000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x734130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x734010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x7345D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x734740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_INIT_OFFSET UNITYSDK_OFFSET(0x734280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_INITIALIZEINTERNALSTATE_OFFSET UNITYSDK_OFFSET(0x7349F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x734B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x7353E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x735510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x735650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_COMPRESS_OFFSET UNITYSDK_OFFSET(0x734C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_G_OFFSET UNITYSDK_OFFSET(0x7356D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_ROTR64_OFFSET UNITYSDK_OFFSET(0x735910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x735920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x735950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_GETBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x735960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_CLEARKEY_OFFSET UNITYSDK_OFFSET(0x735970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_CLEARSALT_OFFSET UNITYSDK_OFFSET(0x7359C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7359E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int Blake2bDigest_TypeDefinitionIndex = 22583;

	class Blake2bDigest : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* blake2b_IV; // 0x0
		::Il2CppArray<::System::Object*>* blake2b_sigma; // 0x8
		::System::Int32 ROUNDS; // 0x0
		::System::Int32 BLOCK_LENGTH_BYTES; // 0x0
		::System::Int32 digestLength; // 0x10
		::System::Int32 keyLength; // 0x14
		::Il2CppArray<::System::Object*>* salt; // 0x18
		::Il2CppArray<::System::Object*>* personalization; // 0x20
		::Il2CppArray<::System::Object*>* key; // 0x28
		::Il2CppArray<::System::Object*>* buffer; // 0x30
		::System::Int32 bufferPos; // 0x38
		::Il2CppArray<::System::Object*>* internalState; // 0x40
		::Il2CppArray<::System::Object*>* chainValue; // 0x48
		::System::UInt64 t0; // 0x50
		::System::UInt64 t1; // 0x58
		::System::UInt64 f0; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Blake2bDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_INIT_OFFSET))(nullptr);
		}

		::System::Void InitializeInternalState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_INITIALIZEINTERNALSTATE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_RESET_OFFSET))(nullptr);
		}

		::System::Void Compress(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_COMPRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void G(::System::UInt64 arg, ::System::UInt64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_G_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt64 Rotr64(::System::UInt64 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_ROTR64_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetByteLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_GETBYTELENGTH_OFFSET))(nullptr);
		}

		::System::Void ClearKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_CLEARKEY_OFFSET))(nullptr);
		}

		::System::Void ClearSalt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_CLEARSALT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2BDIGEST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

