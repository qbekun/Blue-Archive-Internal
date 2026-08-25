#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchema; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Schema { class JsonSchemaResolver; }
namespace Newtonsoft::Json { class JsonWriter; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x94E8EB0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x94E8EC0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x94E8ED0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x94E8EE0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x94E8EF0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x94E8F00)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_READONLY_OFFSET UNITYSDK_OFFSET(0x94E8F10)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x94E8F20)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_HIDDEN_OFFSET UNITYSDK_OFFSET(0x94E8F30)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_HIDDEN_OFFSET UNITYSDK_OFFSET(0x94E8F40)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_TRANSIENT_OFFSET UNITYSDK_OFFSET(0x94E8F50)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_TRANSIENT_OFFSET UNITYSDK_OFFSET(0x94E8F60)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x94E8F70)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x94E8F80)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x94E8F90)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x94E8FA0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_PATTERN_OFFSET UNITYSDK_OFFSET(0x94E8FB0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_PATTERN_OFFSET UNITYSDK_OFFSET(0x94E8FC0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MINIMUMLENGTH_OFFSET UNITYSDK_OFFSET(0x94E8FD0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MINIMUMLENGTH_OFFSET UNITYSDK_OFFSET(0x94E8FE0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MAXIMUMLENGTH_OFFSET UNITYSDK_OFFSET(0x94E8FF0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MAXIMUMLENGTH_OFFSET UNITYSDK_OFFSET(0x94E9000)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DIVISIBLEBY_OFFSET UNITYSDK_OFFSET(0x94E9010)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DIVISIBLEBY_OFFSET UNITYSDK_OFFSET(0x94E9020)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MINIMUM_OFFSET UNITYSDK_OFFSET(0x94E9030)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MINIMUM_OFFSET UNITYSDK_OFFSET(0x94E9040)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MAXIMUM_OFFSET UNITYSDK_OFFSET(0x94E9050)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MAXIMUM_OFFSET UNITYSDK_OFFSET(0x94E9060)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_EXCLUSIVEMINIMUM_OFFSET UNITYSDK_OFFSET(0x94E9070)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_EXCLUSIVEMINIMUM_OFFSET UNITYSDK_OFFSET(0x94E9080)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_EXCLUSIVEMAXIMUM_OFFSET UNITYSDK_OFFSET(0x94E9090)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_EXCLUSIVEMAXIMUM_OFFSET UNITYSDK_OFFSET(0x94E90A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MINIMUMITEMS_OFFSET UNITYSDK_OFFSET(0x94E90B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MINIMUMITEMS_OFFSET UNITYSDK_OFFSET(0x94E90C0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MAXIMUMITEMS_OFFSET UNITYSDK_OFFSET(0x94E90D0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MAXIMUMITEMS_OFFSET UNITYSDK_OFFSET(0x94E90E0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x94E90F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x94E9100)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_POSITIONALITEMSVALIDATION_OFFSET UNITYSDK_OFFSET(0x94E9120)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_POSITIONALITEMSVALIDATION_OFFSET UNITYSDK_OFFSET(0x94E9130)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94E9140)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94E9150)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ALLOWADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94E9170)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ALLOWADDITIONALITEMS_OFFSET UNITYSDK_OFFSET(0x94E9180)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_UNIQUEITEMS_OFFSET UNITYSDK_OFFSET(0x94E9190)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_UNIQUEITEMS_OFFSET UNITYSDK_OFFSET(0x94E91A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x94E91B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x94E91C0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94E91E0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94E91F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_PATTERNPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94E9210)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_PATTERNPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94E9220)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ALLOWADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94E9240)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ALLOWADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94E9250)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_REQUIRES_OFFSET UNITYSDK_OFFSET(0x94E9260)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_REQUIRES_OFFSET UNITYSDK_OFFSET(0x94E9270)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ENUM_OFFSET UNITYSDK_OFFSET(0x94E9290)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ENUM_OFFSET UNITYSDK_OFFSET(0x94E92A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DISALLOW_OFFSET UNITYSDK_OFFSET(0x94E92C0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DISALLOW_OFFSET UNITYSDK_OFFSET(0x94E92D0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x94E92E0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x94E92F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_EXTENDS_OFFSET UNITYSDK_OFFSET(0x94E9310)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_EXTENDS_OFFSET UNITYSDK_OFFSET(0x94E9320)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x94E9340)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x94E9350)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x94E9370)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x94E9380)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_INTERNALID_OFFSET UNITYSDK_OFFSET(0x94E93A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DEFERREDREFERENCE_OFFSET UNITYSDK_OFFSET(0x94E93B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DEFERREDREFERENCE_OFFSET UNITYSDK_OFFSET(0x94E93C0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_REFERENCESRESOLVED_OFFSET UNITYSDK_OFFSET(0x94E93E0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_REFERENCESRESOLVED_OFFSET UNITYSDK_OFFSET(0x94E93F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E9400)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_READ_OFFSET UNITYSDK_OFFSET(0x94E9490)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_READ_OFFSET UNITYSDK_OFFSET(0x94E9570)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_PARSE_OFFSET UNITYSDK_OFFSET(0x94E97F0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_PARSE_OFFSET UNITYSDK_OFFSET(0x94E9850)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x94E9A30)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x94E9A90)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94EB060)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchema_TypeDefinitionIndex = 31978;

	class JsonSchema : public Il2CppObject
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		::System::String* _Title_k__BackingField; // 0x18
		Il2CppObject* _Required_k__BackingField; // 0x20
		Il2CppObject* _ReadOnly_k__BackingField; // 0x22
		Il2CppObject* _Hidden_k__BackingField; // 0x24
		Il2CppObject* _Transient_k__BackingField; // 0x26
		::System::String* _Description_k__BackingField; // 0x28
		Il2CppObject* _Type_k__BackingField; // 0x30
		::System::String* _Pattern_k__BackingField; // 0x38
		Il2CppObject* _MinimumLength_k__BackingField; // 0x40
		Il2CppObject* _MaximumLength_k__BackingField; // 0x48
		Il2CppObject* _DivisibleBy_k__BackingField; // 0x50
		Il2CppObject* _Minimum_k__BackingField; // 0x60
		Il2CppObject* _Maximum_k__BackingField; // 0x70
		Il2CppObject* _ExclusiveMinimum_k__BackingField; // 0x80
		Il2CppObject* _ExclusiveMaximum_k__BackingField; // 0x82
		Il2CppObject* _MinimumItems_k__BackingField; // 0x84
		Il2CppObject* _MaximumItems_k__BackingField; // 0x8C
		Il2CppObject* _Items_k__BackingField; // 0x98
		::System::Boolean _PositionalItemsValidation_k__BackingField; // 0xA0
		::Newtonsoft::Json::Schema::JsonSchema* _AdditionalItems_k__BackingField; // 0xA8
		::System::Boolean _AllowAdditionalItems_k__BackingField; // 0xB0
		::System::Boolean _UniqueItems_k__BackingField; // 0xB1
		Il2CppObject* _Properties_k__BackingField; // 0xB8
		::Newtonsoft::Json::Schema::JsonSchema* _AdditionalProperties_k__BackingField; // 0xC0
		Il2CppObject* _PatternProperties_k__BackingField; // 0xC8
		::System::Boolean _AllowAdditionalProperties_k__BackingField; // 0xD0
		::System::String* _Requires_k__BackingField; // 0xD8
		Il2CppObject* _Enum_k__BackingField; // 0xE0
		Il2CppObject* _Disallow_k__BackingField; // 0xE8
		::Newtonsoft::Json::Linq::JToken* _Default_k__BackingField; // 0xF0
		Il2CppObject* _Extends_k__BackingField; // 0xF8
		::System::String* _Format_k__BackingField; // 0x100
		::System::String* _Location_k__BackingField; // 0x108
		::System::String* _internalId; // 0x110
		::System::String* _DeferredReference_k__BackingField; // 0x118
		::System::Boolean _ReferencesResolved_k__BackingField; // 0x120

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ID_OFFSET))(str, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_TITLE_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Required()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_REQUIRED_OFFSET))(nullptr);
		}

		::System::Void set_Required(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_REQUIRED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReadOnly()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_READONLY_OFFSET))(nullptr);
		}

		::System::Void set_ReadOnly(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_READONLY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Hidden()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_HIDDEN_OFFSET))(nullptr);
		}

		::System::Void set_Hidden(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_HIDDEN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Transient()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_TRANSIENT_OFFSET))(nullptr);
		}

		::System::Void set_Transient(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_TRANSIENT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_Description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DESCRIPTION_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Type()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Pattern()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_PATTERN_OFFSET))(nullptr);
		}

		::System::Void set_Pattern(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_PATTERN_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_MinimumLength()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MINIMUMLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MinimumLength(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MINIMUMLENGTH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MaximumLength()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MAXIMUMLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MaximumLength(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MAXIMUMLENGTH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DivisibleBy()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DIVISIBLEBY_OFFSET))(nullptr);
		}

		::System::Void set_DivisibleBy(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DIVISIBLEBY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Minimum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MINIMUM_OFFSET))(nullptr);
		}

		::System::Void set_Minimum(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MINIMUM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Maximum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MAXIMUM_OFFSET))(nullptr);
		}

		::System::Void set_Maximum(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MAXIMUM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExclusiveMinimum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_EXCLUSIVEMINIMUM_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveMinimum(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_EXCLUSIVEMINIMUM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExclusiveMaximum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_EXCLUSIVEMAXIMUM_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveMaximum(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_EXCLUSIVEMAXIMUM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MinimumItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MINIMUMITEMS_OFFSET))(nullptr);
		}

		::System::Void set_MinimumItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MINIMUMITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MaximumItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_MAXIMUMITEMS_OFFSET))(nullptr);
		}

		::System::Void set_MaximumItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_MAXIMUMITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Items()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Void set_Items(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ITEMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PositionalItemsValidation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_POSITIONALITEMSVALIDATION_OFFSET))(nullptr);
		}

		::System::Void set_PositionalItemsValidation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_POSITIONALITEMSVALIDATION_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* get_AdditionalItems()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ADDITIONALITEMS_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ADDITIONALITEMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowAdditionalItems()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ALLOWADDITIONALITEMS_OFFSET))(nullptr);
		}

		::System::Void set_AllowAdditionalItems(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ALLOWADDITIONALITEMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UniqueItems()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_UNIQUEITEMS_OFFSET))(nullptr);
		}

		::System::Void set_UniqueItems(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_UNIQUEITEMS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Properties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_Properties(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_PROPERTIES_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* get_AdditionalProperties()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ADDITIONALPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalProperties(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ADDITIONALPROPERTIES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PatternProperties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_PATTERNPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_PatternProperties(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_PATTERNPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowAdditionalProperties()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ALLOWADDITIONALPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_AllowAdditionalProperties(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ALLOWADDITIONALPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::String* get_Requires()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_REQUIRES_OFFSET))(nullptr);
		}

		::System::Void set_Requires(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_REQUIRES_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Enum()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_ENUM_OFFSET))(nullptr);
		}

		::System::Void set_Enum(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_ENUM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Disallow()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DISALLOW_OFFSET))(nullptr);
		}

		::System::Void set_Disallow(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DISALLOW_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Default()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void set_Default(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DEFAULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Extends()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_EXTENDS_OFFSET))(nullptr);
		}

		::System::Void set_Extends(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_EXTENDS_OFFSET))(arg, nullptr);
		}

		::System::String* get_Format()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void set_Format(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_FORMAT_OFFSET))(str, nullptr);
		}

		::System::String* get_Location()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Location(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_LOCATION_OFFSET))(str, nullptr);
		}

		::System::String* get_InternalId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_INTERNALID_OFFSET))(nullptr);
		}

		::System::String* get_DeferredReference()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_DEFERREDREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_DeferredReference(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_DEFERREDREFERENCE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_ReferencesResolved()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_GET_REFERENCESRESOLVED_OFFSET))(nullptr);
		}

		::System::Void set_ReferencesResolved(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_SET_REFERENCESRESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Read(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_READ_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Read(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Schema::JsonSchemaResolver* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_READ_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Parse(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_PARSE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Parse(::System::String* str, ::Newtonsoft::Json::Schema::JsonSchemaResolver* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::System::String*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Schema::JsonSchemaResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_WRITETO_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMA_TOSTRING_OFFSET))(nullptr);
		}

	};
}

