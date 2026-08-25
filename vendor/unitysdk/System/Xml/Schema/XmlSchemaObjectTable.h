#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E77D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x98E78A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_INSERT_OFFSET UNITYSDK_OFFSET(0x98E79F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REPLACE_OFFSET UNITYSDK_OFFSET(0x98E7C30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x98E7DC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x98E7E40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_FINDINDEXBYVALUE_OFFSET UNITYSDK_OFFSET(0x98E7B90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x98E7F80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x98E7FD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x98E8020)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x98E8090)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x98E8170)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectTable_TypeDefinitionIndex = 28187;

	class XmlSchemaObjectTable : public Il2CppObject
	{
	public:
		Il2CppObject* table; // 0x10
		Il2CppObject* entries; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Insert(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Replace(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REPLACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Remove(::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindIndexByValue(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_FINDINDEXBYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

