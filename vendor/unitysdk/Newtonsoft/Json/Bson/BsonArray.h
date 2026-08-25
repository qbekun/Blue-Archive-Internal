#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace Newtonsoft::Json::Bson { class BsonType; }

#define NEWTONSOFT_JSON_BSON_BSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x9547830)
#define NEWTONSOFT_JSON_BSON_BSONARRAY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x95478E0)
#define NEWTONSOFT_JSON_BSON_BSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9544FA0)
#define NEWTONSOFT_JSON_BSON_BSONARRAY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x95478F0)
#define NEWTONSOFT_JSON_BSON_BSONARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9547970)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonArray_TypeDefinitionIndex = 32134;

	class BsonArray : public Il2CppObject
	{
	public:
		Il2CppObject* _children; // 0x20

		::System::Void Add(::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_ADD_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Bson::BsonType* get_Type()
		{
			return (return (::Newtonsoft::Json::Bson::BsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONARRAY_.CTOR_OFFSET))(nullptr);
		}

	};
}

