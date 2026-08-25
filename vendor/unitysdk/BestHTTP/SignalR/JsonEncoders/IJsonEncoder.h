#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SIGNALR_JSONENCODERS_IJSONENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALR_JSONENCODERS_IJSONENCODER_DECODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalR::JsonEncoders
{
	inline static constexpr unsigned int IJsonEncoder_TypeDefinitionIndex = 21506;

	class IJsonEncoder : public Il2CppObject
	{
	public:
		::System::String* Encode(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_JSONENCODERS_IJSONENCODER_ENCODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DecodeMessage(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_JSONENCODERS_IJSONENCODER_DECODEMESSAGE_OFFSET))(str, nullptr);
		}

	};
}

