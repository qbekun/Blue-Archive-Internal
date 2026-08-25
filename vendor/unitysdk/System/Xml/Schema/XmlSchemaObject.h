#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x98E6DD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x98E6DE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x98E6DF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x98E6E00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_SOURCEURI_OFFSET UNITYSDK_OFFSET(0x98E6E10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_SOURCEURI_OFFSET UNITYSDK_OFFSET(0x98E6E20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x98E6E30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x98E6E40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x98DDEA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x98E6E50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONADD_OFFSET UNITYSDK_OFFSET(0x98E6E60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x98E6E70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x98E6E80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6E90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6EA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98E6EB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x98E6EC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6ED0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98E6EE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_ISPROCESSING_OFFSET UNITYSDK_OFFSET(0x98E6EF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_ISPROCESSING_OFFSET UNITYSDK_OFFSET(0x98E6F00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_CLONE_OFFSET UNITYSDK_OFFSET(0x98E6F10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DD370)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObject_TypeDefinitionIndex = 28179;

	class XmlSchemaObject : public Il2CppObject
	{
	public:
		::System::Int32 lineNum; // 0x10
		::System::Int32 linePos; // 0x14
		::System::String* sourceUri; // 0x18
		::System::Xml::Serialization::XmlSerializerNamespaces* namespaces; // 0x20
		::System::Xml::Schema::XmlSchemaObject* parent; // 0x28
		::System::Boolean isProcessing; // 0x30

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_LineNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_LINENUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_LinePosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_LINEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::String* get_SourceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_SOURCEURI_OFFSET))(nullptr);
		}

		::System::Void set_SourceUri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_SOURCEURI_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* get_Parent()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_Parent(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::Xml::Serialization::XmlSerializerNamespaces* get_Namespaces()
		{
			return (return (::System::Xml::Serialization::XmlSerializerNamespaces*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_NAMESPACES_OFFSET))(nullptr);
		}

		::System::Void set_Namespaces(::System::Xml::Serialization::XmlSerializerNamespaces* arg)
		{
			((::System::Void(*)(::System::Xml::Serialization::XmlSerializerNamespaces*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_NAMESPACES_OFFSET))(arg, nullptr);
		}

		::System::Void OnAdd(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnRemove(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONREMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnClear(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONCLEAR_OFFSET))(arg, nullptr);
		}

		::System::String* get_IdAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_IDATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_IdAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_IDATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SETUNHANDLEDATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnnotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ADDANNOTATION_OFFSET))(arg, nullptr);
		}

		::System::String* get_NameAttribute()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_NAMEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_NameAttribute(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_NAMEATTRIBUTE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsProcessing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_GET_ISPROCESSING_OFFSET))(nullptr);
		}

		::System::Void set_IsProcessing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_SET_ISPROCESSING_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

