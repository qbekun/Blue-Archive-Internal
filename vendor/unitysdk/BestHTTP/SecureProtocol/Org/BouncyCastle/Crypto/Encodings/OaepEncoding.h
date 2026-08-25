#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IAsymmetricBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x72AA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x72AAB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x72AA90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x72AAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x72AD20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x72AD30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_INIT_OFFSET UNITYSDK_OFFSET(0x72ADF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_GETINPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x72AF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_GETOUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x72AFD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x72B0A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_ENCODEBLOCK_OFFSET UNITYSDK_OFFSET(0x72B0C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_DECODEBLOCK_OFFSET UNITYSDK_OFFSET(0x72B400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_ITOOSP_OFFSET UNITYSDK_OFFSET(0x72BFD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_MASKGENERATORFUNCTION1_OFFSET UNITYSDK_OFFSET(0x72BA00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Encodings
{
	inline static constexpr unsigned int OaepEncoding_TypeDefinitionIndex = 22548;

	class OaepEncoding : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* defHash; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mgf1Hash; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x28
		::System::Boolean forEncryption; // 0x30

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_GETINPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetOutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_GETOUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_PROCESSBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_ENCODEBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_DECODEBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ItoOSP(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_ITOOSP_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* maskGeneratorFunction1(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_OAEPENCODING_MASKGENERATORFUNCTION1_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

