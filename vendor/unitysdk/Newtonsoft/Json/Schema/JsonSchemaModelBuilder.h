#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchemaNodeCollection; }
namespace Newtonsoft::Json::Schema { class JsonSchemaNode; }
namespace Newtonsoft::Json::Schema { class JsonSchemaModel; }
namespace Newtonsoft::Json::Schema { class JsonSchema; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x94F2410)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDSCHEMA_OFFSET UNITYSDK_OFFSET(0x94F2550)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F3A00)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDPROPERTY_OFFSET UNITYSDK_OFFSET(0x94F3EC0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDITEM_OFFSET UNITYSDK_OFFSET(0x94F3D00)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F3E80)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94F3E40)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_BUILDNODEMODEL_OFFSET UNITYSDK_OFFSET(0x94F2C80)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F4000)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaModelBuilder_TypeDefinitionIndex = 31987;

	class JsonSchemaModelBuilder : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* _nodes; // 0x10
		Il2CppObject* _nodeModels; // 0x18
		::Newtonsoft::Json::Schema::JsonSchemaNode* _node; // 0x20

		::Newtonsoft::Json::Schema::JsonSchemaModel* Build(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaModel*(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaNode* AddSchema(::Newtonsoft::Json::Schema::JsonSchemaNode* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaNode*(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDSCHEMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProperties(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProperty(Il2CppObject* arg, ::System::String* str, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDPROPERTY_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void AddItem(::Newtonsoft::Json::Schema::JsonSchemaNode* arg, ::System::Int32 arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::System::Int32, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDITEM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddAdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaNode* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDADDITIONALPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaNode* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_ADDADDITIONALITEMS_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaModel* BuildNodeModel(::Newtonsoft::Json::Schema::JsonSchemaNode* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaModel*(*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_BUILDNODEMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODELBUILDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

