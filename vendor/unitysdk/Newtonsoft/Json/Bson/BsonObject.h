#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace Newtonsoft::Json::Bson { class BsonType; }

#define NEWTONSOFT_JSON_BSON_BSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x9547560)
#define NEWTONSOFT_JSON_BSON_BSONOBJECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9547720)
#define NEWTONSOFT_JSON_BSON_BSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9544E80)
#define NEWTONSOFT_JSON_BSON_BSONOBJECT_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9547730)
#define NEWTONSOFT_JSON_BSON_BSONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95477B0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonObject_TypeDefinitionIndex = 32133;

	class BsonObject : public Il2CppObject
	{
	public:
		Il2CppObject* _children; // 0x20

		::System::Void Add(::System::String* str, ::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			((::System::Void(*)(::System::String*, ::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_ADD_OFFSET))(str, arg, nullptr);
		}

		::Newtonsoft::Json::Bson::BsonType* get_Type()
		{
			return (return (::Newtonsoft::Json::Bson::BsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

