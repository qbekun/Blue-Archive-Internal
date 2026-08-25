#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_DIM_OFFSET UNITYSDK_OFFSET(0x9A0B710)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_ISLIST_OFFSET UNITYSDK_OFFSET(0x9A0B720)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_ISDECIMAL_OFFSET UNITYSDK_OFFSET(0x9A0B730)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_DVALUE_OFFSET UNITYSDK_OFFSET(0x9A0B750)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9A0B770)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9A0B780)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0B790)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9A0B8F0)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_SETDECIMAL_OFFSET UNITYSDK_OFFSET(0x9A0B900)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_LISTDVALUEEQUALS_OFFSET UNITYSDK_OFFSET(0x9A0BDA0)
#define SYSTEM_XML_SCHEMA_TYPEDOBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9A0BF00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int TypedObject_TypeDefinitionIndex = 27966;

	class TypedObject : public Il2CppObject
	{
	public:
		DecimalStruct* dstruct; // 0x10
		::System::Object* ovalue; // 0x18
		::System::String* svalue; // 0x20
		::System::Xml::Schema::XmlSchemaDatatype* xsdtype; // 0x28
		::System::Int32 dim; // 0x30
		::System::Boolean isList; // 0x34

		::System::Int32 get_Dim()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_DIM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_ISLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDecimal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_ISDECIMAL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Dvalue()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_DVALUE_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* get_Type()
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::String* str, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetDecimal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_SETDECIMAL_OFFSET))(nullptr);
		}

		::System::Boolean ListDValueEquals(::System::Xml::Schema::TypedObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::TypedObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_LISTDVALUEEQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Xml::Schema::TypedObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::TypedObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_TYPEDOBJECT_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

