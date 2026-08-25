#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IAsymmetricBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_GETRECOVEREDMESSAGE_OFFSET UNITYSDK_OFFSET(0x672500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x672510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6729B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6729D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_INIT_OFFSET UNITYSDK_OFFSET(0x672A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_ISSAMEAS_OFFSET UNITYSDK_OFFSET(0x672F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_CLEARBLOCK_OFFSET UNITYSDK_OFFSET(0x673170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_UPDATEWITHRECOVEREDMESSAGE_OFFSET UNITYSDK_OFFSET(0x6731A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x673B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x673C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_RESET_OFFSET UNITYSDK_OFFSET(0x673DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x673EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x6746C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_HASFULLMESSAGE_OFFSET UNITYSDK_OFFSET(0x6751C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_ITOOSP_OFFSET UNITYSDK_OFFSET(0x6751D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_LTOOSP_OFFSET UNITYSDK_OFFSET(0x674620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_MASKGENERATORFUNCTION1_OFFSET UNITYSDK_OFFSET(0x673640)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	inline static constexpr unsigned int Iso9796d2PssSigner_TypeDefinitionIndex = 22265;

	class Iso9796d2PssSigner : public Il2CppObject
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
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x20
		::Il2CppArray<::System::Object*>* standardSalt; // 0x28
		::System::Int32 hLen; // 0x30
		::System::Int32 trailer; // 0x34
		::System::Int32 keyBits; // 0x38
		::Il2CppArray<::System::Object*>* block; // 0x40
		::Il2CppArray<::System::Object*>* mBuf; // 0x48
		::System::Int32 messageLength; // 0x50
		::System::Int32 saltLength; // 0x54
		::System::Boolean fullMessage; // 0x58
		::Il2CppArray<::System::Object*>* recoveredMessage; // 0x60
		::Il2CppArray<::System::Object*>* preSig; // 0x68
		::Il2CppArray<::System::Object*>* preBlock; // 0x70
		::System::Int32 preMStart; // 0x78
		::System::Int32 preTLength; // 0x7C

		::Il2CppArray<::System::Object*>* GetRecoveredMessage()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_GETRECOVEREDMESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSameAs(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_ISSAMEAS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearBlock(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_CLEARBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateWithRecoveredMessage(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_UPDATEWITHRECOVEREDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_RESET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_GENERATESIGNATURE_OFFSET))(nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasFullMessage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_HASFULLMESSAGE_OFFSET))(nullptr);
		}

		::System::Void ItoOSP(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_ITOOSP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LtoOSP(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_LTOOSP_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MaskGeneratorFunction1(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISO9796D2PSSSIGNER_MASKGENERATORFUNCTION1_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

