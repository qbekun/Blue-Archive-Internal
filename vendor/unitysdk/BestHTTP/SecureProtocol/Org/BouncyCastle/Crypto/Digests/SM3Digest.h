#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class SM3Digest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x775320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x775620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x7756D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_COPYIN_OFFSET UNITYSDK_OFFSET(0x7757E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x775860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x775890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_COPY_OFFSET UNITYSDK_OFFSET(0x7758A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x775900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x7759F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x775AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_PROCESSWORD_OFFSET UNITYSDK_OFFSET(0x775B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_PROCESSLENGTH_OFFSET UNITYSDK_OFFSET(0x775BA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_P0_OFFSET UNITYSDK_OFFSET(0x775C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_P1_OFFSET UNITYSDK_OFFSET(0x775C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_FF0_OFFSET UNITYSDK_OFFSET(0x775CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_FF1_OFFSET UNITYSDK_OFFSET(0x775CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_GG0_OFFSET UNITYSDK_OFFSET(0x775CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_GG1_OFFSET UNITYSDK_OFFSET(0x775CD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x775CE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int SM3Digest_TypeDefinitionIndex = 22617;

	class SM3Digest : public Il2CppObject
	{
	public:
		::System::Int32 DIGEST_LENGTH; // 0x0
		::System::Int32 BLOCK_SIZE; // 0x0
		::Il2CppArray<::System::Object*>* V; // 0x28
		::Il2CppArray<::System::Object*>* inwords; // 0x30
		::System::Int32 xOff; // 0x38
		::Il2CppArray<::System::Object*>* W; // 0x40
		::Il2CppArray<::System::Object*>* T; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SM3Digest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SM3Digest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CopyIn(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SM3Digest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SM3Digest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_COPYIN_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_COPY_OFFSET))(nullptr);
		}

		::System::Void Reset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_RESET_OFFSET))(nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessWord(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_PROCESSWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_PROCESSLENGTH_OFFSET))(arg, nullptr);
		}

		::System::UInt32 P0(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_P0_OFFSET))(arg, nullptr);
		}

		::System::UInt32 P1(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_P1_OFFSET))(arg, nullptr);
		}

		::System::UInt32 FF0(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_FF0_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 FF1(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_FF1_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 GG0(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_GG0_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 GG1(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_GG1_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SM3DIGEST_PROCESSBLOCK_OFFSET))(nullptr);
		}

	};
}

