#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ICIPHER_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ICIPHER_GETMAXOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ICIPHER_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int ICipher_TypeDefinitionIndex = 22023;

	class ICipher : public Il2CppObject
	{
	public:
		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ICIPHER_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ICIPHER_GETMAXOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* get_Stream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ICIPHER_GET_STREAM_OFFSET))(nullptr);
		}

	};
}

