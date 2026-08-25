#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SIGNALR_JSONENCODERS_DEFAULTJSONENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x754120)
#define BESTHTTP_SIGNALR_JSONENCODERS_DEFAULTJSONENCODER_DECODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x754130)
#define BESTHTTP_SIGNALR_JSONENCODERS_DEFAULTJSONENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x754190)

namespace BestHTTP::SignalR::JsonEncoders
{
	inline static constexpr unsigned int DefaultJsonEncoder_TypeDefinitionIndex = 21505;

	class DefaultJsonEncoder : public Il2CppObject
	{
	public:
		::System::String* Encode(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_JSONENCODERS_DEFAULTJSONENCODER_ENCODE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DecodeMessage(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_JSONENCODERS_DEFAULTJSONENCODER_DECODEMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_JSONENCODERS_DEFAULTJSONENCODER_.CTOR_OFFSET))(nullptr);
		}

	};
}

