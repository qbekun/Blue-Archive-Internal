#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders { class ITranslator; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BUFFEREDDECODER_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x935FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BUFFEREDDECODER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x9360F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BUFFEREDDECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x936370)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	inline static constexpr unsigned int BufferedDecoder_TypeDefinitionIndex = 21612;

	class BufferedDecoder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buffer; // 0x10
		::System::Int32 bufOff; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator; // 0x20

		::System::Int32 ProcessByte(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BUFFEREDDECODER_PROCESSBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BUFFEREDDECODER_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders::ITranslator* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders::ITranslator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BUFFEREDDECODER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

