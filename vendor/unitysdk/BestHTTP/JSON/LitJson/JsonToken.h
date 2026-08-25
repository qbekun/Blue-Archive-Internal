#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class JsonToken; }

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 23320;

	class JsonToken : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::JSON::LitJson::JsonToken* None; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* ObjectStart; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* PropertyName; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* ObjectEnd; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* ArrayStart; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* ArrayEnd; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* Int; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* Long; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* Double; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* String; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* Boolean; // 0x0
		::BestHTTP::JSON::LitJson::JsonToken* Null; // 0x0

	};
}

