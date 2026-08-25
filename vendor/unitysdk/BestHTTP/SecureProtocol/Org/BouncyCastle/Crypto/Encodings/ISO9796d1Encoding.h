#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IAsymmetricBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GETINPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x729A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x729B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_DECODEBLOCK_OFFSET UNITYSDK_OFFSET(0x729EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_INIT_OFFSET UNITYSDK_OFFSET(0x72A4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x72A680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x72A7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_.CTOR_OFFSET UNITYSDK_OFFSET(0x72A8B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_ENCODEBLOCK_OFFSET UNITYSDK_OFFSET(0x729B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GETOUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x72A8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GETPADBITS_OFFSET UNITYSDK_OFFSET(0x72A990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_SETPADBITS_OFFSET UNITYSDK_OFFSET(0x72A9A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x72AA10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Encodings
{
	inline static constexpr unsigned int ISO9796d1Encoding_TypeDefinitionIndex = 22547;

	class ISO9796d1Encoding : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Sixteen; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Six; // 0x8
		::Il2CppArray<::System::Object*>* shadows; // 0x10
		::Il2CppArray<::System::Object*>* inverse; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine; // 0x10
		::System::Boolean forEncryption; // 0x18
		::System::Int32 bitSize; // 0x1C
		::System::Int32 padBits; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* modulus; // 0x28

		::System::Int32 GetInputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GETINPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_PROCESSBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_DECODEBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncodeBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_ENCODEBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetOutputBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GETOUTPUTBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetPadBits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GETPADBITS_OFFSET))(nullptr);
		}

		::System::Void SetPadBits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_SETPADBITS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENCODINGS_ISO9796D1ENCODING_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

	};
}

