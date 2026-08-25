#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IAsymmetricBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GET_STRICTLENGTHENABLED_OFFSET UNITYSDK_OFFSET(0x72C020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_SET_STRICTLENGTHENABLED_OFFSET UNITYSDK_OFFSET(0x72C0B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x72C140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x72C260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x72C350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x72C450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x72C560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x72C570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_INIT_OFFSET UNITYSDK_OFFSET(0x72C630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GETINPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x72C920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GETOUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x72C9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x72CA60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_ENCODEBLOCK_OFFSET UNITYSDK_OFFSET(0x72CEA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_CHECKPKCS1ENCODING_OFFSET UNITYSDK_OFFSET(0x72D2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_DECODEBLOCKORRANDOM_OFFSET UNITYSDK_OFFSET(0x72D4B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_DECODEBLOCK_OFFSET UNITYSDK_OFFSET(0x72CA80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_FINDSTART_OFFSET UNITYSDK_OFFSET(0x72D7C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Encodings
{
	inline static constexpr unsigned int Pkcs1Encoding_TypeDefinitionIndex = 22549;

	class Pkcs1Encoding : public Il2CppObject
	{
	public:
		::System::String* StrictLengthEnabledProperty; // 0x0
		::System::Int32 HeaderLength; // 0x0
		::Il2CppArray<::System::Object*>* strictLengthEnabled; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine; // 0x18
		::System::Boolean forEncryption; // 0x20
		::System::Boolean forPrivateKey; // 0x21
		::System::Boolean useStrictLength; // 0x22
		::System::Int32 pLen; // 0x24
		::Il2CppArray<::System::Object*>* fallback; // 0x28
		::Il2CppArray<::System::Object*>* blockBuffer; // 0x30

		::System::Boolean get_StrictLengthEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GET_STRICTLENGTHENABLED_OFFSET))(nullptr);
		}

		::System::Void set_StrictLengthEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_SET_STRICTLENGTHENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetInputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GETINPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetOutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_GETOUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_PROCESSBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_ENCODEBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CheckPkcs1Encoding(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_CHECKPKCS1ENCODING_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeBlockOrRandom(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_DECODEBLOCKORRANDOM_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_DECODEBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 FindStart(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_PKCS1ENCODING_FINDSTART_OFFSET))(arg, arg, nullptr);
		}

	};
}

