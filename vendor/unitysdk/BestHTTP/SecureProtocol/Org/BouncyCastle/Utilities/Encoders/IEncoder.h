#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_IENCODER_DECODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_IENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_IENCODER_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	inline static constexpr unsigned int IEncoder_TypeDefinitionIndex = 21617;

	class IEncoder : public Il2CppObject
	{
	public:
		::System::Int32 Decode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_IENCODER_DECODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_IENCODER_ENCODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 DecodeString(::System::String* str, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_IENCODER_DECODESTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

