#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class Blake2sDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x735AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x735C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x735AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x736060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x7361D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_INIT_OFFSET UNITYSDK_OFFSET(0x735D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_INITIALIZEINTERNALSTATE_OFFSET UNITYSDK_OFFSET(0x736480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x736610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x736E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x736F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x737090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_COMPRESS_OFFSET UNITYSDK_OFFSET(0x7366A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_G_OFFSET UNITYSDK_OFFSET(0x737110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_ROTR32_OFFSET UNITYSDK_OFFSET(0x7372C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x7372D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x737300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_GETBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x737310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_CLEARKEY_OFFSET UNITYSDK_OFFSET(0x737320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_CLEARSALT_OFFSET UNITYSDK_OFFSET(0x737370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x737390)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int Blake2sDigest_TypeDefinitionIndex = 22584;

	class Blake2sDigest : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* blake2s_IV; // 0x0
		::Il2CppArray<::System::Object*>* blake2s_sigma; // 0x8
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
		::System::UInt32 t0; // 0x50
		::System::UInt32 t1; // 0x54
		::System::UInt32 f0; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Blake2sDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_INIT_OFFSET))(nullptr);
		}

		::System::Void InitializeInternalState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_INITIALIZEINTERNALSTATE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_RESET_OFFSET))(nullptr);
		}

		::System::Void Compress(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_COMPRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void G(::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_G_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 rotr32(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_ROTR32_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetByteLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_GETBYTELENGTH_OFFSET))(nullptr);
		}

		::System::Void ClearKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_CLEARKEY_OFFSET))(nullptr);
		}

		::System::Void ClearSalt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_CLEARSALT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_BLAKE2SDIGEST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

