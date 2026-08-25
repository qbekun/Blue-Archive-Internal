#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::PlatformSupport::Memory { class BufferSegment; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCIPHER_DECODECIPHERTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCIPHER_GETPLAINTEXTLIMIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCIPHER_ENCODEPLAINTEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsCipher_TypeDefinitionIndex = 22183;

	class TlsCipher : public Il2CppObject
	{
	public:
		::BestHTTP::PlatformSupport::Memory::BufferSegment* DecodeCiphertext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCIPHER_DECODECIPHERTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPlaintextLimit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCIPHER_GETPLAINTEXTLIMIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::PlatformSupport::Memory::BufferSegment* EncodePlaintext(::System::Int64 arg, ::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::PlatformSupport::Memory::BufferSegment*(*)(::System::Int64, ::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCIPHER_ENCODEPLAINTEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

