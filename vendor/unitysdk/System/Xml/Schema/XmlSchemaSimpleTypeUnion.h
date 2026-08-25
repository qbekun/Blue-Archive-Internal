#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_GET_BASETYPES_OFFSET UNITYSDK_OFFSET(0x98F3B00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_GET_MEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x98F3B10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_SET_MEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x98F3B20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_GET_BASEMEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x98F3B30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_SETBASEMEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x98F3B40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_CLONE_OFFSET UNITYSDK_OFFSET(0x98F3B50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F3CF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeUnion_TypeDefinitionIndex = 28201;

	class XmlSchemaSimpleTypeUnion : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* baseTypes; // 0x50
		::Il2CppArray<::System::Object*>* memberTypes; // 0x58
		::Il2CppArray<::System::Object*>* baseMemberTypes; // 0x60

		::System::Xml::Schema::XmlSchemaObjectCollection* get_BaseTypes()
		{
			return (return (::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_GET_BASETYPES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_MemberTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_GET_MEMBERTYPES_OFFSET))(nullptr);
		}

		::System::Void set_MemberTypes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_SET_MEMBERTYPES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_BaseMemberTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_GET_BASEMEMBERTYPES_OFFSET))(nullptr);
		}

		::System::Void SetBaseMemberTypes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_SETBASEMEMBERTYPES_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_.CTOR_OFFSET))(nullptr);
		}

	};
}

