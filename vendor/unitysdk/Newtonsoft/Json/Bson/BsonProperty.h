#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonString; }
namespace Newtonsoft::Json::Bson { class BsonToken; }

#define NEWTONSOFT_JSON_BSON_BSONPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9547EE0)
#define NEWTONSOFT_JSON_BSON_BSONPROPERTY_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9547EF0)
#define NEWTONSOFT_JSON_BSON_BSONPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9547F00)
#define NEWTONSOFT_JSON_BSON_BSONPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9547F10)
#define NEWTONSOFT_JSON_BSON_BSONPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95476D0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonProperty_TypeDefinitionIndex = 32141;

	class BsonProperty : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Bson::BsonString* _Name_k__BackingField; // 0x10
		::Newtonsoft::Json::Bson::BsonToken* _Value_k__BackingField; // 0x18

		::Newtonsoft::Json::Bson::BsonString* get_Name()
		{
			return (return (::Newtonsoft::Json::Bson::BsonString*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONPROPERTY_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::Newtonsoft::Json::Bson::BsonString* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonString*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONPROPERTY_SET_NAME_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Bson::BsonToken* get_Value()
		{
			return (return (::Newtonsoft::Json::Bson::BsonToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONPROPERTY_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONPROPERTY_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONPROPERTY_.CTOR_OFFSET))(nullptr);
		}

	};
}

