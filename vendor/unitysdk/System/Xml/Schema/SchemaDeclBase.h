#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98AD590)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98AD640)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x98AD6B0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x98AD6C0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x98AD6D0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x98AD730)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x98AD740)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_ISDECLAREDINEXTERNAL_OFFSET UNITYSDK_OFFSET(0x98AD750)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PRESENCE_OFFSET UNITYSDK_OFFSET(0x98AD760)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_PRESENCE_OFFSET UNITYSDK_OFFSET(0x98AD770)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_MAXLENGTH_OFFSET UNITYSDK_OFFSET(0x98AD780)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_MAXLENGTH_OFFSET UNITYSDK_OFFSET(0x98AD790)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_MINLENGTH_OFFSET UNITYSDK_OFFSET(0x98AD7A0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_MINLENGTH_OFFSET UNITYSDK_OFFSET(0x98AD7B0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98AD7C0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x98AD7D0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x98AD7E0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x98AD7F0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x98AD800)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x98AD900)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x98AD910)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUERAW_OFFSET UNITYSDK_OFFSET(0x98AD920)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DEFAULTVALUERAW_OFFSET UNITYSDK_OFFSET(0x98AD980)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x98AD990)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DEFAULTVALUETYPED_OFFSET UNITYSDK_OFFSET(0x98AD9A0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_CHECKENUMERATION_OFFSET UNITYSDK_OFFSET(0x98AD9B0)
#define SYSTEM_XML_SCHEMA_SCHEMADECLBASE_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x98ADA60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaDeclBase_TypeDefinitionIndex = 28092;

	class SchemaDeclBase : public Il2CppObject
	{
	public:
		::System::Xml::XmlQualifiedName* name; // 0x10
		::System::String* prefix; // 0x18
		::System::Boolean isDeclaredInExternal; // 0x20
		Use* presence; // 0x24
		::System::Xml::Schema::XmlSchemaType* schemaType; // 0x28
		::System::Xml::Schema::XmlSchemaDatatype* datatype; // 0x30
		::System::String* defaultValueRaw; // 0x38
		::System::Object* defaultValueTyped; // 0x40
		::System::Int64 maxLength; // 0x48
		::System::Int64 minLength; // 0x50
		Il2CppObject* values; // 0x58

		::System::Void .ctor(::System::Xml::XmlQualifiedName* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::XmlQualifiedName* get_Name()
		{
			return (return (::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::String* get_Prefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PREFIX_OFFSET))(nullptr);
		}

		::System::Void set_Prefix(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_PREFIX_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsDeclaredInExternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_ISDECLAREDINEXTERNAL_OFFSET))(nullptr);
		}

		::System::Void set_IsDeclaredInExternal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_ISDECLAREDINEXTERNAL_OFFSET))(arg, nullptr);
		}

		Use* get_Presence()
		{
			return (return (Use*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_PRESENCE_OFFSET))(nullptr);
		}

		::System::Void set_Presence(Use* arg)
		{
			((::System::Void(*)(Use*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_PRESENCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_MAXLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_MAXLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MinLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_MINLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MinLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_MINLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaType* get_SchemaType()
		{
			return (return (::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_SCHEMATYPE_OFFSET))(nullptr);
		}

		::System::Void set_SchemaType(::System::Xml::Schema::XmlSchemaType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_SCHEMATYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* get_Datatype()
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DATATYPE_OFFSET))(nullptr);
		}

		::System::Void set_Datatype(::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DATATYPE_OFFSET))(arg, nullptr);
		}

		::System::Void AddValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_ADDVALUE_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void set_Values(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_VALUES_OFFSET))(arg, nullptr);
		}

		::System::String* get_DefaultValueRaw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUERAW_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValueRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DEFAULTVALUERAW_OFFSET))(str, nullptr);
		}

		::System::Object* get_DefaultValueTyped()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_GET_DEFAULTVALUETYPED_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValueTyped(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_SET_DEFAULTVALUETYPED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckEnumeration(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_CHECKENUMERATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckValue(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMADECLBASE_CHECKVALUE_OFFSET))(arg, nullptr);
		}

	};
}

