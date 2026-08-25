#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class Sha1Digest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x76D170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x76D1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_COPYIN_OFFSET UNITYSDK_OFFSET(0x76D2B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x76D330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x76D360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_PROCESSWORD_OFFSET UNITYSDK_OFFSET(0x76D370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_PROCESSLENGTH_OFFSET UNITYSDK_OFFSET(0x76D3E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x76D450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x76D4F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_F_OFFSET UNITYSDK_OFFSET(0x76D540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_H_OFFSET UNITYSDK_OFFSET(0x76D550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_G_OFFSET UNITYSDK_OFFSET(0x76D560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x76D570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_COPY_OFFSET UNITYSDK_OFFSET(0x76E290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x76E2F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int Sha1Digest_TypeDefinitionIndex = 22602;

	class Sha1Digest : public Il2CppObject
	{
	public:
		::System::Int32 DigestLength; // 0x0
		::System::UInt32 H1; // 0x28
		::System::UInt32 H2; // 0x2C
		::System::UInt32 H3; // 0x30
		::System::UInt32 H4; // 0x34
		::System::UInt32 H5; // 0x38
		::Il2CppArray<::System::Object*>* X; // 0x40
		::System::Int32 xOff; // 0x48
		::System::UInt32 Y1; // 0x0
		::System::UInt32 Y2; // 0x0
		::System::UInt32 Y3; // 0x0
		::System::UInt32 Y4; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Sha1Digest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Sha1Digest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CopyIn(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Sha1Digest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Sha1Digest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_COPYIN_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::System::Void ProcessWord(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_PROCESSWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_PROCESSLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_RESET_OFFSET))(nullptr);
		}

		::System::UInt32 F(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_F_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 H(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_H_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 G(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_G_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_PROCESSBLOCK_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_COPY_OFFSET))(nullptr);
		}

		::System::Void Reset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SHA1DIGEST_RESET_OFFSET))(arg, nullptr);
		}

	};
}

