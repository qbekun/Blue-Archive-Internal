#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class JsonType; }

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int JsonType_TypeDefinitionIndex = 23301;

	class JsonType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::JSON::LitJson::JsonType* None; // 0x0
		::BestHTTP::JSON::LitJson::JsonType* Object; // 0x0
		::BestHTTP::JSON::LitJson::JsonType* Array; // 0x0
		::BestHTTP::JSON::LitJson::JsonType* String; // 0x0
		::BestHTTP::JSON::LitJson::JsonType* Int; // 0x0
		::BestHTTP::JSON::LitJson::JsonType* Long; // 0x0
		::BestHTTP::JSON::LitJson::JsonType* Double; // 0x0
		::BestHTTP::JSON::LitJson::JsonType* Boolean; // 0x0

	};
}

