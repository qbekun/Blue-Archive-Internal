#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class Dstu7564Digest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x737490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_COPYIN_OFFSET UNITYSDK_OFFSET(0x7374C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x737620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x7377B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_GETDIGESTSIZE_OFFSET UNITYSDK_OFFSET(0x7377E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_GETBYTELENGTH_OFFSET UNITYSDK_OFFSET(0x7377F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x737800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x737870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_DOFINAL_OFFSET UNITYSDK_OFFSET(0x737970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x737C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x737CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_P_OFFSET UNITYSDK_OFFSET(0x737BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_Q_OFFSET UNITYSDK_OFFSET(0x737E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_MIXCOLUMN_OFFSET UNITYSDK_OFFSET(0x7388B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_MIXCOLUMNS_OFFSET UNITYSDK_OFFSET(0x738810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_ROTATE_OFFSET UNITYSDK_OFFSET(0x7389C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_SHIFTROWS_OFFSET UNITYSDK_OFFSET(0x737F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_SUBBYTES_OFFSET UNITYSDK_OFFSET(0x738600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_COPY_OFFSET UNITYSDK_OFFSET(0x7389D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_RESET_OFFSET UNITYSDK_OFFSET(0x738A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x738AB0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int Dstu7564Digest_TypeDefinitionIndex = 22585;

	class Dstu7564Digest : public Il2CppObject
	{
	public:
		::System::Int32 NB_512; // 0x0
		::System::Int32 NB_1024; // 0x0
		::System::Int32 NR_512; // 0x0
		::System::Int32 NR_1024; // 0x0
		::System::Int32 hashSize; // 0x10
		::System::Int32 blockSize; // 0x14
		::System::Int32 columns; // 0x18
		::System::Int32 rounds; // 0x1C
		::Il2CppArray<::System::Object*>* state; // 0x20
		::Il2CppArray<::System::Object*>* tempState1; // 0x28
		::Il2CppArray<::System::Object*>* tempState2; // 0x30
		::System::UInt64 inputBlocks; // 0x38
		::System::Int32 bufOff; // 0x40
		::Il2CppArray<::System::Object*>* buf; // 0x48
		::Il2CppArray<::System::Object*>* S0; // 0x0
		::Il2CppArray<::System::Object*>* S1; // 0x8
		::Il2CppArray<::System::Object*>* S2; // 0x10
		::Il2CppArray<::System::Object*>* S3; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CopyIn(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_COPYIN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetDigestSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_GETDIGESTSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetByteLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_GETBYTELENGTH_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_RESET_OFFSET))(nullptr);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_PROCESSBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void P(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_P_OFFSET))(arg, nullptr);
		}

		::System::Void Q(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_Q_OFFSET))(arg, nullptr);
		}

		::System::UInt64 MixColumn(::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_MIXCOLUMN_OFFSET))(arg, nullptr);
		}

		::System::Void MixColumns(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_MIXCOLUMNS_OFFSET))(arg, nullptr);
		}

		::System::UInt64 Rotate(::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_ROTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ShiftRows(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_SHIFTROWS_OFFSET))(arg, nullptr);
		}

		::System::Void SubBytes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_SUBBYTES_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_COPY_OFFSET))(nullptr);
		}

		::System::Void Reset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_DSTU7564DIGEST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

