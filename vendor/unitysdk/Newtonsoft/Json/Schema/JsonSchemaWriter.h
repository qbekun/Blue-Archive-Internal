#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Schema { class JsonSchemaResolver; }
namespace Newtonsoft::Json::Schema { class JsonSchema; }
namespace Newtonsoft::Json::Schema { class JsonSchemaType; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E9B90)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_REFERENCEORWRITESCHEMA_OFFSET UNITYSDK_OFFSET(0x94F4690)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITESCHEMA_OFFSET UNITYSDK_OFFSET(0x94E9C10)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITESCHEMADICTIONARYIFNOTNULL_OFFSET UNITYSDK_OFFSET(0x94F4D60)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITEITEMS_OFFSET UNITYSDK_OFFSET(0x94F50D0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITETYPE_OFFSET UNITYSDK_OFFSET(0x94F47F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITEPROPERTYIFNOTNULL_OFFSET UNITYSDK_OFFSET(0x94F4790)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaWriter_TypeDefinitionIndex = 31995;

	class JsonSchemaWriter : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::JsonWriter* _writer; // 0x10
		::Newtonsoft::Json::Schema::JsonSchemaResolver* _resolver; // 0x18

		::System::Void .ctor(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Schema::JsonSchemaResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReferenceOrWriteSchema(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_REFERENCEORWRITESCHEMA_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSchema(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITESCHEMA_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSchemaDictionaryIfNotNull(::Newtonsoft::Json::JsonWriter* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITESCHEMADICTIONARYIFNOTNULL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void WriteItems(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITEITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void WriteType(::System::String* str, ::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Schema::JsonSchemaType* arg)
		{
			((::System::Void(*)(::System::String*, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Schema::JsonSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITETYPE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void WritePropertyIfNotNull(::Newtonsoft::Json::JsonWriter* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAWRITER_WRITEPROPERTYIFNOTNULL_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

