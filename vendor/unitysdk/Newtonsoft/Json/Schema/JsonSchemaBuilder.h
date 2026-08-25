#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchemaResolver; }
namespace Newtonsoft::Json::Schema { class JsonSchema; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Schema { class JsonSchemaType; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E9610)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PUSH_OFFSET UNITYSDK_OFFSET(0x94EB190)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_POP_OFFSET UNITYSDK_OFFSET(0x94EB350)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_GET_CURRENTSCHEMA_OFFSET UNITYSDK_OFFSET(0x94EB4A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_READ_OFFSET UNITYSDK_OFFSET(0x94E96F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_UNESCAPEREFERENCE_OFFSET UNITYSDK_OFFSET(0x94EC4C0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_RESOLVEREFERENCES_OFFSET UNITYSDK_OFFSET(0x94EB940)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_BUILDSCHEMA_OFFSET UNITYSDK_OFFSET(0x94EB4B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSSCHEMAPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94EC570)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSEXTENDS_OFFSET UNITYSDK_OFFSET(0x94EEDC0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSENUM_OFFSET UNITYSDK_OFFSET(0x94EE900)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94EE780)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94EE840)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94EDC00)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSITEMS_OFFSET UNITYSDK_OFFSET(0x94EE1F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSTYPE_OFFSET UNITYSDK_OFFSET(0x94ED5F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_MAPTYPE_OFFSET UNITYSDK_OFFSET(0x94EF290)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_MAPTYPE_OFFSET UNITYSDK_OFFSET(0x94EF430)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaBuilder_TypeDefinitionIndex = 31980;

	class JsonSchemaBuilder : public Il2CppObject
	{
	public:
		Il2CppObject* _stack; // 0x10
		::Newtonsoft::Json::Schema::JsonSchemaResolver* _resolver; // 0x18
		Il2CppObject* _documentSchemas; // 0x20
		::Newtonsoft::Json::Schema::JsonSchema* _currentSchema; // 0x28
		::Newtonsoft::Json::Linq::JObject* _rootSchema; // 0x30

		::System::Void .ctor(::Newtonsoft::Json::Schema::JsonSchemaResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Push(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PUSH_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Pop()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_POP_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* get_CurrentSchema()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_GET_CURRENTSCHEMA_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Read(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_READ_OFFSET))(arg, nullptr);
		}

		::System::String* UnescapeReference(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_UNESCAPEREFERENCE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* ResolveReferences(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_RESOLVEREFERENCES_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* BuildSchema(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_BUILDSCHEMA_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessSchemaProperties(::Newtonsoft::Json::Linq::JObject* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSSCHEMAPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessExtends(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSEXTENDS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessEnum(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSENUM_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAdditionalProperties(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSADDITIONALPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAdditionalItems(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSADDITIONALITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ProcessProperties(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessItems(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ProcessType(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_PROCESSTYPE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaType* MapType(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaType*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_MAPTYPE_OFFSET))(str, nullptr);
		}

		::System::String* MapType(::Newtonsoft::Json::Schema::JsonSchemaType* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Schema::JsonSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMABUILDER_MAPTYPE_OFFSET))(arg, nullptr);
		}

	};
}

