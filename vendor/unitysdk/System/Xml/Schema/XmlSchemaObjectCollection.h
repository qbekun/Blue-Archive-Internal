#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DD360)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x98E6F90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x98E7080)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x98E7130)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x98DEFD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x98E71B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x98E7260)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONINSERT_OFFSET UNITYSDK_OFFSET(0x98E7310)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONSET_OFFSET UNITYSDK_OFFSET(0x98E7340)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x98E73A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x98E73D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x98E3950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x98E7400)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectCollection_TypeDefinitionIndex = 28180;

	class XmlSchemaObjectCollection : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObject* parent; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Int32 arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectEnumerator* GetEnumerator()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 Add(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Remove(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnInsert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONINSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSet(::System::Int32 arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONCLEAR_OFFSET))(nullptr);
		}

		::System::Void OnRemove(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONREMOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_CLONE_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Xml::Schema::XmlSchemaObjectCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

	};
}

