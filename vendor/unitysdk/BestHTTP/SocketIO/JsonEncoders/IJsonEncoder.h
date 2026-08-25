#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SOCKETIO_JSONENCODERS_IJSONENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SOCKETIO_JSONENCODERS_IJSONENCODER_DECODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SocketIO::JsonEncoders
{
	inline static constexpr unsigned int IJsonEncoder_TypeDefinitionIndex = 21364;

	class IJsonEncoder : public Il2CppObject
	{
	public:
		::System::String* Encode(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_JSONENCODERS_IJSONENCODER_ENCODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Decode(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_JSONENCODERS_IJSONENCODER_DECODE_OFFSET))(str, nullptr);
		}

	};
}

