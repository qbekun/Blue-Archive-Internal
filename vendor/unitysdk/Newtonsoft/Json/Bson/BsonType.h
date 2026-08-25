#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonType; }

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonType_TypeDefinitionIndex = 32142;

	class BsonType : public Il2CppObject
	{
	public:
		::System::SByte value__; // 0x10
		::Newtonsoft::Json::Bson::BsonType* Number; // 0x0
		::Newtonsoft::Json::Bson::BsonType* String; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Object; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Array; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Binary; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Undefined; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Oid; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Boolean; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Date; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Null; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Regex; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Reference; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Code; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Symbol; // 0x0
		::Newtonsoft::Json::Bson::BsonType* CodeWScope; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Integer; // 0x0
		::Newtonsoft::Json::Bson::BsonType* TimeStamp; // 0x0
		::Newtonsoft::Json::Bson::BsonType* Long; // 0x0
		::Newtonsoft::Json::Bson::BsonType* MinKey; // 0x0
		::Newtonsoft::Json::Bson::BsonType* MaxKey; // 0x0

	};
}

