#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IAsymmetricBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers { class PssSigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_CREATERAWSIGNER_OFFSET UNITYSDK_OFFSET(0x677A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_CREATERAWSIGNER_OFFSET UNITYSDK_OFFSET(0x677D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x677E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x677ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x677F30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x677F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x677FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x677F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x677FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x677B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x678020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_INIT_OFFSET UNITYSDK_OFFSET(0x6780E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_CLEARBLOCK_OFFSET UNITYSDK_OFFSET(0x678350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x678380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x678420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_RESET_OFFSET UNITYSDK_OFFSET(0x6784E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_GENERATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x678580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x678F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_ITOOSP_OFFSET UNITYSDK_OFFSET(0x6794B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_MASKGENERATORFUNCTION1_OFFSET UNITYSDK_OFFSET(0x6789E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	inline static constexpr unsigned int PssSigner_TypeDefinitionIndex = 22269;

	class PssSigner : public Il2CppObject
	{
	public:
		::System::Byte TrailerImplicit; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* contentDigest1; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* contentDigest2; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mgfDigest; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x30
		::System::Int32 hLen; // 0x38
		::System::Int32 mgfhLen; // 0x3C
		::System::Int32 sLen; // 0x40
		::System::Boolean sSet; // 0x44
		::System::Int32 emBits; // 0x48
		::Il2CppArray<::System::Object*>* salt; // 0x50
		::Il2CppArray<::System::Object*>* mDash; // 0x58
		::Il2CppArray<::System::Object*>* block; // 0x60
		::System::Byte trailer; // 0x68

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers::PssSigner* CreateRawSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers::PssSigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_CREATERAWSIGNER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers::PssSigner* CreateRawSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::System::Byte arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers::PssSigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_CREATERAWSIGNER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Byte arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearBlock(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_CLEARBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_RESET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateSignature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_GENERATESIGNATURE_OFFSET))(nullptr);
		}

		::System::Boolean VerifySignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Void ItoOSP(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_ITOOSP_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MaskGeneratorFunction1(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_PSSSIGNER_MASKGENERATORFUNCTION1_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

