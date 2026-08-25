#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonToken; }
namespace Newtonsoft::Json::Bson { class BsonType; }

#define NEWTONSOFT_JSON_BSON_BSONEMPTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x95479F0)
#define NEWTONSOFT_JSON_BSON_BSONEMPTY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9547A10)
#define NEWTONSOFT_JSON_BSON_BSONEMPTY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9547A20)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonEmpty_TypeDefinitionIndex = 32135;

	class BsonEmpty : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Bson::BsonToken* Null; // 0x0
		::Newtonsoft::Json::Bson::BsonToken* Undefined; // 0x8
		::Newtonsoft::Json::Bson::BsonType* _Type_k__BackingField; // 0x20

		::System::Void .ctor(::Newtonsoft::Json::Bson::BsonType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Bson::BsonType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONEMPTY_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Bson::BsonType* get_Type()
		{
			return (return (::Newtonsoft::Json::Bson::BsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONEMPTY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONEMPTY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

