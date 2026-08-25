#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SOCKETIO_JSONENCODERS_DEFAULTJSONENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x507CE0)
#define BESTHTTP_SOCKETIO_JSONENCODERS_DEFAULTJSONENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5019D0)
#define BESTHTTP_SOCKETIO_JSONENCODERS_DEFAULTJSONENCODER_DECODE_OFFSET UNITYSDK_OFFSET(0x507CF0)

namespace BestHTTP::SocketIO::JsonEncoders
{
	inline static constexpr unsigned int DefaultJSonEncoder_TypeDefinitionIndex = 21363;

	class DefaultJSonEncoder : public Il2CppObject
	{
	public:
		::System::String* Encode(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_JSONENCODERS_DEFAULTJSONENCODER_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_JSONENCODERS_DEFAULTJSONENCODER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Decode(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO_JSONENCODERS_DEFAULTJSONENCODER_DECODE_OFFSET))(str, nullptr);
		}

	};
}

