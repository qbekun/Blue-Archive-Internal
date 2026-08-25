#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IAsymmetricBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_GETRECOVEREDMESSAGE_OFFSET UNITYSDK_OFFSET(0x675220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x675230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x675350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x675370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_INIT_OFFSET UNITYSDK_OFFSET(0x675430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_ISSAMEAS_OFFSET UNITYSDK_OFFSET(0x6756E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_CLEARBLOCK_OFFSET UNITYSDK_OFFSET(0x6758F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_UPDATEWITHRECOVEREDMESSAGE_OFFSET UNITYSDK_OFFSET(0x675920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x675DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x675EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_RESET_OFFSET UNITYSDK_OFFSET(0x675FF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x676140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x676540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_RETURNFALSE_OFFSET UNITYSDK_OFFSET(0x676DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_HASFULLMESSAGE_OFFSET UNITYSDK_OFFSET(0x676E30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	inline static constexpr unsigned int Iso9796d2Signer_TypeDefinitionIndex = 22266;

	class Iso9796d2Signer : public Il2CppObject
	{
	public:
		::System::Int32 TrailerImplicit; // 0x0
		::System::Int32 TrailerRipeMD160; // 0x0
		::System::Int32 TrailerRipeMD128; // 0x0
		::System::Int32 TrailerSha1; // 0x0
		::System::Int32 TrailerSha256; // 0x0
		::System::Int32 TrailerSha512; // 0x0
		::System::Int32 TrailerSha384; // 0x0
		::System::Int32 TrailerWhirlpool; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher; // 0x18
		::System::Int32 trailer; // 0x20
		::System::Int32 keyBits; // 0x24
		::Il2CppArray<::System::Object*>* block; // 0x28
		::Il2CppArray<::System::Object*>* mBuf; // 0x30
		::System::Int32 messageLength; // 0x38
		::System::Boolean fullMessage; // 0x3C
		::Il2CppArray<::System::Object*>* recoveredMessage; // 0x40
		::Il2CppArray<::System::Object*>* preSig; // 0x48
		::Il2CppArray<::System::Object*>* preBlock; // 0x50

		::Il2CppArray<::System::Object*>* GetRecoveredMessage()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_GETRECOVEREDMESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSameAs(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_ISSAMEAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearBlock(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_CLEARBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWithRecoveredMessage(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_UPDATEWITHRECOVEREDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_RESET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_GENERATESIGNATURE_OFFSET))(nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReturnFalse(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_RETURNFALSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasFullMessage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2SIGNER_HASFULLMESSAGE_OFFSET))(nullptr);
		}

	};
}

