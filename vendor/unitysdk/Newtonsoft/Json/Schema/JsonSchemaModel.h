#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchemaType; }
namespace Newtonsoft::Json::Schema { class JsonSchemaModel; }
namespace Newtonsoft::Json::Schema { class JsonSchema; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x94F1980)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x94F1990)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x94F19A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x94F19B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MINIMUMLENGTH_OFFSET UNITYSDK_OFFSET(0x94F19C0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MINIMUMLENGTH_OFFSET UNITYSDK_OFFSET(0x94F19D0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MAXIMUMLENGTH_OFFSET UNITYSDK_OFFSET(0x94F19E0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MAXIMUMLENGTH_OFFSET UNITYSDK_OFFSET(0x94F19F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_DIVISIBLEBY_OFFSET UNITYSDK_OFFSET(0x94F1A00)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_DIVISIBLEBY_OFFSET UNITYSDK_OFFSET(0x94F1A10)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MINIMUM_OFFSET UNITYSDK_OFFSET(0x94F1A20)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MINIMUM_OFFSET UNITYSDK_OFFSET(0x94F1A30)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MAXIMUM_OFFSET UNITYSDK_OFFSET(0x94F1A40)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MAXIMUM_OFFSET UNITYSDK_OFFSET(0x94F1A50)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_EXCLUSIVEMINIMUM_OFFSET UNITYSDK_OFFSET(0x94F1A60)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_EXCLUSIVEMINIMUM_OFFSET UNITYSDK_OFFSET(0x94F1A70)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_EXCLUSIVEMAXIMUM_OFFSET UNITYSDK_OFFSET(0x94F1A80)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_EXCLUSIVEMAXIMUM_OFFSET UNITYSDK_OFFSET(0x94F1A90)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MINIMUMITEMS_OFFSET UNITYSDK_OFFSET(0x94F1AA0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MINIMUMITEMS_OFFSET UNITYSDK_OFFSET(0x94F1AB0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MAXIMUMITEMS_OFFSET UNITYSDK_OFFSET(0x94F1AC0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MAXIMUMITEMS_OFFSET UNITYSDK_OFFSET(0x94F1AD0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_PATTERNS_OFFSET UNITYSDK_OFFSET(0x94F1AE0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_PATTERNS_OFFSET UNITYSDK_OFFSET(0x94F1AF0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x94F1B00)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x94F1B10)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F1B20)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F1B30)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_PATTERNPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F1B40)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_PATTERNPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F1B50)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F1B70)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F1B80)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94F1BA0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94F1BB0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_POSITIONALITEMSVALIDATION_OFFSET UNITYSDK_OFFSET(0x94F1BD0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_POSITIONALITEMSVALIDATION_OFFSET UNITYSDK_OFFSET(0x94F1BE0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ALLOWADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F1BF0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ALLOWADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94F1C00)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ALLOWADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94F1C10)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ALLOWADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94F1C20)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_UNIQUEITEMS_OFFSET UNITYSDK_OFFSET(0x94F1C30)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_UNIQUEITEMS_OFFSET UNITYSDK_OFFSET(0x94F1C40)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ENUM_OFFSET UNITYSDK_OFFSET(0x94F1C50)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ENUM_OFFSET UNITYSDK_OFFSET(0x94F1C60)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_DISALLOW_OFFSET UNITYSDK_OFFSET(0x94F1C80)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_DISALLOW_OFFSET UNITYSDK_OFFSET(0x94F1C90)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F1CA0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x94F1CD0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_COMBINE_OFFSET UNITYSDK_OFFSET(0x94F1FE0)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaModel_TypeDefinitionIndex = 31986;

	class JsonSchemaModel : public Il2CppObject
	{
	public:
		::System::Boolean _Required_k__BackingField; // 0x10
		::Newtonsoft::Json::Schema::JsonSchemaType* _Type_k__BackingField; // 0x14
		Il2CppObject* _MinimumLength_k__BackingField; // 0x18
		Il2CppObject* _MaximumLength_k__BackingField; // 0x20
		Il2CppObject* _DivisibleBy_k__BackingField; // 0x28
		Il2CppObject* _Minimum_k__BackingField; // 0x38
		Il2CppObject* _Maximum_k__BackingField; // 0x48
		::System::Boolean _ExclusiveMinimum_k__BackingField; // 0x58
		::System::Boolean _ExclusiveMaximum_k__BackingField; // 0x59
		Il2CppObject* _MinimumItems_k__BackingField; // 0x5C
		Il2CppObject* _MaximumItems_k__BackingField; // 0x64
		Il2CppObject* _Patterns_k__BackingField; // 0x70
		Il2CppObject* _Items_k__BackingField; // 0x78
		Il2CppObject* _Properties_k__BackingField; // 0x80
		Il2CppObject* _PatternProperties_k__BackingField; // 0x88
		::Newtonsoft::Json::Schema::JsonSchemaModel* _AdditionalProperties_k__BackingField; // 0x90
		::Newtonsoft::Json::Schema::JsonSchemaModel* _AdditionalItems_k__BackingField; // 0x98
		::System::Boolean _PositionalItemsValidation_k__BackingField; // 0xA0
		::System::Boolean _AllowAdditionalProperties_k__BackingField; // 0xA1
		::System::Boolean _AllowAdditionalItems_k__BackingField; // 0xA2
		::System::Boolean _UniqueItems_k__BackingField; // 0xA3
		Il2CppObject* _Enum_k__BackingField; // 0xA8
		::Newtonsoft::Json::Schema::JsonSchemaType* _Disallow_k__BackingField; // 0xB0

		::System::Boolean get_Required()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_REQUIRED_OFFSET))(nullptr);
		}

		::System::Void set_Required(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_REQUIRED_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaType* get_Type()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::Newtonsoft::Json::Schema::JsonSchemaType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_TYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MinimumLength()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MINIMUMLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MinimumLength(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MINIMUMLENGTH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MaximumLength()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MAXIMUMLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MaximumLength(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MAXIMUMLENGTH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DivisibleBy()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_DIVISIBLEBY_OFFSET))(nullptr);
		}

		::System::Void set_DivisibleBy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_DIVISIBLEBY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Minimum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MINIMUM_OFFSET))(nullptr);
		}

		::System::Void set_Minimum(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MINIMUM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Maximum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MAXIMUM_OFFSET))(nullptr);
		}

		::System::Void set_Maximum(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MAXIMUM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ExclusiveMinimum()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_EXCLUSIVEMINIMUM_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveMinimum(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_EXCLUSIVEMINIMUM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ExclusiveMaximum()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_EXCLUSIVEMAXIMUM_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveMaximum(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_EXCLUSIVEMAXIMUM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MinimumItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MINIMUMITEMS_OFFSET))(nullptr);
		}

		::System::Void set_MinimumItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MINIMUMITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MaximumItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_MAXIMUMITEMS_OFFSET))(nullptr);
		}

		::System::Void set_MaximumItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_MAXIMUMITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Patterns()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_PATTERNS_OFFSET))(nullptr);
		}

		::System::Void set_Patterns(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_PATTERNS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Items()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Void set_Items(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Properties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_Properties(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_PROPERTIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PatternProperties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_PATTERNPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_PatternProperties(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_PATTERNPROPERTIES_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaModel* get_AdditionalProperties()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ADDITIONALPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ADDITIONALPROPERTIES_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaModel* get_AdditionalItems()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ADDITIONALITEMS_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ADDITIONALITEMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PositionalItemsValidation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_POSITIONALITEMSVALIDATION_OFFSET))(nullptr);
		}

		::System::Void set_PositionalItemsValidation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_POSITIONALITEMSVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowAdditionalProperties()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ALLOWADDITIONALPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_AllowAdditionalProperties(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ALLOWADDITIONALPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowAdditionalItems()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ALLOWADDITIONALITEMS_OFFSET))(nullptr);
		}

		::System::Void set_AllowAdditionalItems(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ALLOWADDITIONALITEMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UniqueItems()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_UNIQUEITEMS_OFFSET))(nullptr);
		}

		::System::Void set_UniqueItems(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_UNIQUEITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Enum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_ENUM_OFFSET))(nullptr);
		}

		::System::Void set_Enum(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_ENUM_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaType* get_Disallow()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_GET_DISALLOW_OFFSET))(nullptr);
		}

		::System::Void set_Disallow(::Newtonsoft::Json::Schema::JsonSchemaType* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_SET_DISALLOW_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaModel* Create(Il2CppObject* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaModel*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void Combine(::Newtonsoft::Json::Schema::JsonSchemaModel* arg, ::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAMODEL_COMBINE_OFFSET))(arg, arg, nullptr);
		}

	};
}

