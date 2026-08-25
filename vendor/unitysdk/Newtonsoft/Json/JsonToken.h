#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonToken; }

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonToken_TypeDefinitionIndex = 31772;

	class JsonToken : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::JsonToken* None; // 0x0
		::Newtonsoft::Json::JsonToken* StartObject; // 0x0
		::Newtonsoft::Json::JsonToken* StartArray; // 0x0
		::Newtonsoft::Json::JsonToken* StartConstructor; // 0x0
		::Newtonsoft::Json::JsonToken* PropertyName; // 0x0
		::Newtonsoft::Json::JsonToken* Comment; // 0x0
		::Newtonsoft::Json::JsonToken* Raw; // 0x0
		::Newtonsoft::Json::JsonToken* Integer; // 0x0
		::Newtonsoft::Json::JsonToken* Float; // 0x0
		::Newtonsoft::Json::JsonToken* String; // 0x0
		::Newtonsoft::Json::JsonToken* Boolean; // 0x0
		::Newtonsoft::Json::JsonToken* Null; // 0x0
		::Newtonsoft::Json::JsonToken* Undefined; // 0x0
		::Newtonsoft::Json::JsonToken* EndObject; // 0x0
		::Newtonsoft::Json::JsonToken* EndArray; // 0x0
		::Newtonsoft::Json::JsonToken* EndConstructor; // 0x0
		::Newtonsoft::Json::JsonToken* Date; // 0x0
		::Newtonsoft::Json::JsonToken* Bytes; // 0x0

	};
}

