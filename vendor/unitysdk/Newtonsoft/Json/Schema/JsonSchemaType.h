#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchemaType; }

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaType_TypeDefinitionIndex = 31993;

	class JsonSchemaType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Newtonsoft::Json::Schema::JsonSchemaType* None; // 0x0
		::Newtonsoft::Json::Schema::JsonSchemaType* String; // 0x0
		::Newtonsoft::Json::Schema::JsonSchemaType* Float; // 0x0
		::Newtonsoft::Json::Schema::JsonSchemaType* Integer; // 0x0
		::Newtonsoft::Json::Schema::JsonSchemaType* Boolean; // 0x0
		::Newtonsoft::Json::Schema::JsonSchemaType* Object; // 0x0
		::Newtonsoft::Json::Schema::JsonSchemaType* Array; // 0x0
		::Newtonsoft::Json::Schema::JsonSchemaType* Null; // 0x0
		::Newtonsoft::Json::Schema::JsonSchemaType* Any; // 0x0

	};
}

