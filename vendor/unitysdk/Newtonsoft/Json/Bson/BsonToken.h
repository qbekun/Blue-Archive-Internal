#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace Newtonsoft::Json::Bson { class BsonType; }

#define NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x9547510)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x9547520)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_CALCULATEDSIZE_OFFSET UNITYSDK_OFFSET(0x9547530)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_CALCULATEDSIZE_OFFSET UNITYSDK_OFFSET(0x9547540)
#define NEWTONSOFT_JSON_BSON_BSONTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9547550)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonToken_TypeDefinitionIndex = 32132;

	class BsonToken : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Bson::BsonToken* _Parent_k__BackingField; // 0x10
		::System::Int32 _CalculatedSize_k__BackingField; // 0x18

		::Newtonsoft::Json::Bson::BsonType* get_Type()
		{
			return (return (::Newtonsoft::Json::Bson::BsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_TYPE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Bson::BsonToken* get_Parent()
		{
			return (return (::Newtonsoft::Json::Bson::BsonToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_Parent(::Newtonsoft::Json::Bson::BsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CalculatedSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_GET_CALCULATEDSIZE_OFFSET))(nullptr);
		}

		::System::Void set_CalculatedSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_SET_CALCULATEDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONTOKEN_.CTOR_OFFSET))(nullptr);
		}

	};
}

