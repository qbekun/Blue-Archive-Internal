#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonString; }
namespace Newtonsoft::Json::Bson { class BsonType; }

#define NEWTONSOFT_JSON_BSON_BSONREGEX_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x9547DA0)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_SET_PATTERN_OFFSET UNITYSDK_OFFSET(0x9547DB0)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x9547DC0)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x9547DD0)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9547DE0)
#define NEWTONSOFT_JSON_BSON_BSONREGEX_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9547ED0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonRegex_TypeDefinitionIndex = 32140;

	class BsonRegex : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Bson::BsonString* _Pattern_k__BackingField; // 0x20
		::Newtonsoft::Json::Bson::BsonString* _Options_k__BackingField; // 0x28

		::Newtonsoft::Json::Bson::BsonString* get_Pattern()
		{
			return (return (::Newtonsoft::Json::Bson::BsonString*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_GET_PATTERN_OFFSET))(nullptr);
		}

		::System::Void set_Pattern(::Newtonsoft::Json::Bson::BsonString* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonString*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_SET_PATTERN_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Bson::BsonString* get_Options()
		{
			return (return (::Newtonsoft::Json::Bson::BsonString*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::Void set_Options(::Newtonsoft::Json::Bson::BsonString* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonString*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_.CTOR_OFFSET))(str, str, nullptr);
		}

		::Newtonsoft::Json::Bson::BsonType* get_Type()
		{
			return (return (::Newtonsoft::Json::Bson::BsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONREGEX_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

