#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchema; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMARESOLVER_GET_LOADEDSCHEMAS_OFFSET UNITYSDK_OFFSET(0x94F44D0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMARESOLVER_SET_LOADEDSCHEMAS_OFFSET UNITYSDK_OFFSET(0x94F44E0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMARESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E94F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMARESOLVER_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x94F44F0)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaResolver_TypeDefinitionIndex = 31992;

	class JsonSchemaResolver : public Il2CppObject
	{
	public:
		Il2CppObject* _LoadedSchemas_k__BackingField; // 0x10

		Il2CppObject* get_LoadedSchemas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMARESOLVER_GET_LOADEDSCHEMAS_OFFSET))(nullptr);
		}

		::System::Void set_LoadedSchemas(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMARESOLVER_SET_LOADEDSCHEMAS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMARESOLVER_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* GetSchema(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMARESOLVER_GETSCHEMA_OFFSET))(str, nullptr);
		}

	};
}

