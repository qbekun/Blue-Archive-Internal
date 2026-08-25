#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E1010)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x98E1160)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x98E1190)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x98E11A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x98E11B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x98E1260)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x98E1340)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x98E13D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x98E1700)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x98E1710)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x98E1720)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x98DB3B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETSCHEMANAMES_OFFSET UNITYSDK_OFFSET(0x98E1750)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x98D9590)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x98E1800)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x98E1980)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x98E1B00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x98E1B10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaCollection_TypeDefinitionIndex = 28133;

	class XmlSchemaCollection : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* collection; // 0x10
		::System::Xml::XmlNameTable* nameTable; // 0x18
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x20
		::System::Threading::ReaderWriterLock* wLock; // 0x28
		::System::Int32 timeout; // 0x30
		::System::Boolean isThreadSafe; // 0x34
		::System::Xml::Schema::ValidationEventHandler* validationEventHandler; // 0x38
		::System::Xml::XmlResolver* xmlResolver; // 0x40

		::System::Void .ctor(::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* arg)
		{
			((::System::Void(*)(::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SET_XMLRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* get_Item(::System::String* str)
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaCollectionEnumerator* GetEnumerator()
		{
			return (return (::System::Xml::Schema::XmlSchemaCollectionEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::SchemaInfo* GetSchemaInfo(::System::String* str)
		{
			return (return (::System::Xml::Schema::SchemaInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETSCHEMAINFO_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::SchemaNames* GetSchemaNames(::System::Xml::XmlNameTable* arg)
		{
			return (return (::System::Xml::Schema::SchemaNames*(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETSCHEMANAMES_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* Add(::System::String* str, ::System::Xml::Schema::SchemaInfo* arg, ::System::Xml::Schema::XmlSchema* arg, ::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::System::String*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::XmlSchema*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* Add(::System::String* str, ::System::Xml::Schema::SchemaInfo* arg, ::System::Xml::Schema::XmlSchema* arg, ::System::Boolean arg, ::System::Xml::XmlResolver* arg)
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::System::String*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::XmlSchema*, ::System::Boolean, ::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::Xml::Schema::XmlSchemaCollectionNode* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::XmlSchemaCollectionNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Xml::Schema::ValidationEventHandler* get_EventHandler()
		{
			return (return (::System::Xml::Schema::ValidationEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_EVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EventHandler(::System::Xml::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SET_EVENTHANDLER_OFFSET))(arg, nullptr);
		}

	};
}

