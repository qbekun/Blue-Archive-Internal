#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IStreamCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5EBE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x5EBF00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x5EBFA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x5EC090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_GETOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x5EC0A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x5EC0B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x5EC0C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x5EC1A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x5EC2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x5EC3C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_DOFINAL_OFFSET UNITYSDK_OFFSET(0x5EC4B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_DOFINAL_OFFSET UNITYSDK_OFFSET(0x5EC520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x5EC5C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int BufferedStreamCipher_TypeDefinitionIndex = 22012;

	class BufferedStreamCipher : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* cipher; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_GETOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessByte(::System::Byte arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_PROCESSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ProcessByte(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_PROCESSBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_PROCESSBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DoFinal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_DOFINAL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_DOFINAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_BUFFEREDSTREAMCIPHER_RESET_OFFSET))(nullptr);
		}

	};
}

