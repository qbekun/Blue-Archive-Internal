#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_.CTOR_OFFSET UNITYSDK_OFFSET(0x6BE550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_.CTOR_OFFSET UNITYSDK_OFFSET(0x6BE5E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_INIT_OFFSET UNITYSDK_OFFSET(0x6BE740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_SETKEY_OFFSET UNITYSDK_OFFSET(0x6BE8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6BEC40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_GETMACSIZE_OFFSET UNITYSDK_OFFSET(0x6BED10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_UPDATE_OFFSET UNITYSDK_OFFSET(0x6BED20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x6BED60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6BF0C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_RESET_OFFSET UNITYSDK_OFFSET(0x6BEC30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_MUL32X32_64_OFFSET UNITYSDK_OFFSET(0x6BF670)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	inline static constexpr unsigned int Poly1305_TypeDefinitionIndex = 22439;

	class Poly1305 : public Il2CppObject
	{
	public:
		::System::Int32 BlockSize; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher; // 0x10
		::Il2CppArray<::System::Object*>* singleByte; // 0x18
		::System::UInt32 r0; // 0x20
		::System::UInt32 r1; // 0x24
		::System::UInt32 r2; // 0x28
		::System::UInt32 r3; // 0x2C
		::System::UInt32 r4; // 0x30
		::System::UInt32 s1; // 0x34
		::System::UInt32 s2; // 0x38
		::System::UInt32 s3; // 0x3C
		::System::UInt32 s4; // 0x40
		::System::UInt32 k0; // 0x44
		::System::UInt32 k1; // 0x48
		::System::UInt32 k2; // 0x4C
		::System::UInt32 k3; // 0x50
		::Il2CppArray<::System::Object*>* currentBlock; // 0x58
		::System::Int32 currentBlockOffset; // 0x60
		::System::UInt32 h0; // 0x64
		::System::UInt32 h1; // 0x68
		::System::UInt32 h2; // 0x6C
		::System::UInt32 h3; // 0x70
		::System::UInt32 h4; // 0x74

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_SETKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetMacSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_GETMACSIZE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_RESET_OFFSET))(nullptr);
		}

		::System::UInt64 mul32x32_64(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_POLY1305_MUL32X32_64_OFFSET))(arg, arg, nullptr);
		}

	};
}

