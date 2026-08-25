#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class MD4Digest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x741950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x7419C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_COPYIN_OFFSET UNITYSDK_OFFSET(0x741A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x741AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x741B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_PROCESSWORD_OFFSET UNITYSDK_OFFSET(0x741B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_PROCESSLENGTH_OFFSET UNITYSDK_OFFSET(0x741BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_UNPACKWORD_OFFSET UNITYSDK_OFFSET(0x741C50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x741CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x741E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x741ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_F_OFFSET UNITYSDK_OFFSET(0x741EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_G_OFFSET UNITYSDK_OFFSET(0x741EF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_H_OFFSET UNITYSDK_OFFSET(0x741F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x741F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_COPY_OFFSET UNITYSDK_OFFSET(0x7425D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x742630)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int MD4Digest_TypeDefinitionIndex = 22594;

	class MD4Digest : public Il2CppObject
	{
	public:
		::System::Int32 DigestLength; // 0x0
		::System::Int32 H1; // 0x28
		::System::Int32 H2; // 0x2C
		::System::Int32 H3; // 0x30
		::System::Int32 H4; // 0x34
		::Il2CppArray<::System::Object*>* X; // 0x38
		::System::Int32 xOff; // 0x40
		::System::Int32 S11; // 0x0
		::System::Int32 S12; // 0x0
		::System::Int32 S13; // 0x0
		::System::Int32 S14; // 0x0
		::System::Int32 S21; // 0x0
		::System::Int32 S22; // 0x0
		::System::Int32 S23; // 0x0
		::System::Int32 S24; // 0x0
		::System::Int32 S31; // 0x0
		::System::Int32 S32; // 0x0
		::System::Int32 S33; // 0x0
		::System::Int32 S34; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::MD4Digest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::MD4Digest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CopyIn(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::MD4Digest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::MD4Digest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_COPYIN_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::System::Void ProcessWord(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_PROCESSWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_PROCESSLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void UnpackWord(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_UNPACKWORD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_RESET_OFFSET))(nullptr);
		}

		::System::Int32 RotateLeft(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_ROTATELEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 F(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_F_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 G(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_G_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 H(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_H_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_PROCESSBLOCK_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_COPY_OFFSET))(nullptr);
		}

		::System::Void Reset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_MD4DIGEST_RESET_OFFSET))(arg, nullptr);
		}

	};
}

