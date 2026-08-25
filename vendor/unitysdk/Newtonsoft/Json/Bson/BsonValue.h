#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonType; }

#define NEWTONSOFT_JSON_BSON_BSONVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9547AE0)
#define NEWTONSOFT_JSON_BSON_BSONVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9547B20)
#define NEWTONSOFT_JSON_BSON_BSONVALUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9547B30)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonValue_TypeDefinitionIndex = 32136;

	class BsonValue : public Il2CppObject
	{
	public:
		::System::Object* _value; // 0x20
		::Newtonsoft::Json::Bson::BsonType* _type; // 0x28

		::System::Void .ctor(::System::Object* arg, ::Newtonsoft::Json::Bson::BsonType* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Bson::BsonType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONVALUE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Bson::BsonType* get_Type()
		{
			return (return (::Newtonsoft::Json::Bson::BsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONVALUE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

