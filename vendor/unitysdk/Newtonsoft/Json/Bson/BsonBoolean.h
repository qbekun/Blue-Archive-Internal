#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Bson { class BsonBoolean; }

#define NEWTONSOFT_JSON_BSON_BSONBOOLEAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9547B40)
#define NEWTONSOFT_JSON_BSON_BSONBOOLEAN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9547BB0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBoolean_TypeDefinitionIndex = 32137;

	class BsonBoolean : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Bson::BsonBoolean* False; // 0x0
		::Newtonsoft::Json::Bson::BsonBoolean* True; // 0x8

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBOOLEAN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBOOLEAN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

