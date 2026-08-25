#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBufferedCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO { class CipherStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_BUFFEREDCIPHERWRAPPER_GETMAXOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x698140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_BUFFEREDCIPHERWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6980A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_BUFFEREDCIPHERWRAPPER_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6981E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_BUFFEREDCIPHERWRAPPER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x698280)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Operators
{
	inline static constexpr unsigned int BufferedCipherWrapper_TypeDefinitionIndex = 22388;

	class BufferedCipherWrapper : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* bufferedCipher; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IO::CipherStream* stream; // 0x18

		::System::Int32 GetMaxOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_BUFFEREDCIPHERWRAPPER_GETMAXOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* arg, ::System::IO::Stream* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_BUFFEREDCIPHERWRAPPER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_BUFFEREDCIPHERWRAPPER_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* get_Stream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_BUFFEREDCIPHERWRAPPER_GET_STREAM_OFFSET))(nullptr);
		}

	};
}

