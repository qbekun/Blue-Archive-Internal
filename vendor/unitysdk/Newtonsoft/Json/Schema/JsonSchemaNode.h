#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchemaNode; }
namespace Newtonsoft::Json::Schema { class JsonSchema; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_ID_OFFSET UNITYSDK_OFFSET(0x94F40E0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x94F40F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F4100)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_PATTERNPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F4110)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x94F4120)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F4130)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F4140)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_ADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94F4150)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_SET_ADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94F4160)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F37B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F4170)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_COMBINE_OFFSET UNITYSDK_OFFSET(0x94F39A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GETID_OFFSET UNITYSDK_OFFSET(0x94F34D0)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaNode_TypeDefinitionIndex = 31989;

	class JsonSchemaNode : public Il2CppObject
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		Il2CppObject* _Schemas_k__BackingField; // 0x18
		Il2CppObject* _Properties_k__BackingField; // 0x20
		Il2CppObject* _PatternProperties_k__BackingField; // 0x28
		Il2CppObject* _Items_k__BackingField; // 0x30
		::Newtonsoft::Json::Schema::JsonSchemaNode* _AdditionalProperties_k__BackingField; // 0x38
		::Newtonsoft::Json::Schema::JsonSchemaNode* _AdditionalItems_k__BackingField; // 0x40

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* get_Schemas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_SCHEMAS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Properties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_PatternProperties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_PATTERNPROPERTIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_Items()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_ITEMS_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaNode* get_AdditionalProperties()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_ADDITIONALPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaNode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_SET_ADDITIONALPROPERTIES_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaNode* get_AdditionalItems()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GET_ADDITIONALITEMS_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaNode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_SET_ADDITIONALITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Schema::JsonSchemaNode* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaNode* Combine(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaNode*(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_COMBINE_OFFSET))(arg, nullptr);
		}

		::System::String* GetId(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMANODE_GETID_OFFSET))(arg, nullptr);
		}

	};
}

