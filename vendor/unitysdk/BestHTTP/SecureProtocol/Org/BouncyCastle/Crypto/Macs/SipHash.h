#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x6BF680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x6BF6B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6BF6E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_GETMACSIZE_OFFSET UNITYSDK_OFFSET(0x6BF770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_INIT_OFFSET UNITYSDK_OFFSET(0x6BF780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_UPDATE_OFFSET UNITYSDK_OFFSET(0x6BF8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x6BF930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6BFB00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6BFBA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_RESET_OFFSET UNITYSDK_OFFSET(0x6BFBE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_PROCESSMESSAGEWORD_OFFSET UNITYSDK_OFFSET(0x6BFC10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_APPLYSIPROUNDS_OFFSET UNITYSDK_OFFSET(0x6BFC50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x6BFCC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	inline static constexpr unsigned int SipHash_TypeDefinitionIndex = 22440;

	class SipHash : public Il2CppObject
	{
	public:
		::System::Int32 c; // 0x10
		::System::Int32 d; // 0x14
		::System::Int64 k0; // 0x18
		::System::Int64 k1; // 0x20
		::System::Int64 v0; // 0x28
		::System::Int64 v1; // 0x30
		::System::Int64 v2; // 0x38
		::System::Int64 v3; // 0x40
		::System::Int64 m; // 0x48
		::System::Int32 wordPos; // 0x50
		::System::Int32 wordCount; // 0x54

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetMacSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_GETMACSIZE_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 DoFinal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_DOFINAL_OFFSET))(nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_RESET_OFFSET))(nullptr);
		}

		::System::Void ProcessMessageWord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_PROCESSMESSAGEWORD_OFFSET))(nullptr);
		}

		::System::Void ApplySipRounds(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_APPLYSIPROUNDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 RotateLeft(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_SIPHASH_ROTATELEFT_OFFSET))(arg, arg, nullptr);
		}

	};
}

