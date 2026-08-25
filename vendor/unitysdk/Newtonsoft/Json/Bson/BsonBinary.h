#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonBinaryType; }

#define NEWTONSOFT_JSON_BSON_BSONBINARY_GET_BINARYTYPE_OFFSET UNITYSDK_OFFSET(0x9547D40)
#define NEWTONSOFT_JSON_BSON_BSONBINARY_SET_BINARYTYPE_OFFSET UNITYSDK_OFFSET(0x9547D50)
#define NEWTONSOFT_JSON_BSON_BSONBINARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9547D60)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinary_TypeDefinitionIndex = 32139;

	class BsonBinary : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Bson::BsonBinaryType* _BinaryType_k__BackingField; // 0x30

		::Newtonsoft::Json::Bson::BsonBinaryType* get_BinaryType()
		{
			return (return (::Newtonsoft::Json::Bson::BsonBinaryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARY_GET_BINARYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_BinaryType(::Newtonsoft::Json::Bson::BsonBinaryType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonBinaryType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARY_SET_BINARYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Newtonsoft::Json::Bson::BsonBinaryType* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Newtonsoft::Json::Bson::BsonBinaryType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

