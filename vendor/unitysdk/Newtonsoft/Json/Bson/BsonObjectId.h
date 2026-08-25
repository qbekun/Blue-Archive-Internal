#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_BSON_BSONOBJECTID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9545260)
#define NEWTONSOFT_JSON_BSON_BSONOBJECTID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9545270)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonObjectId_TypeDefinitionIndex = 32128;

	class BsonObjectId : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Value_k__BackingField; // 0x10

		::Il2CppArray<::System::Object*>* get_Value()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECTID_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONOBJECTID_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

