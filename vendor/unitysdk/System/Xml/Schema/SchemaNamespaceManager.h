#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x98B6850)
#define SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x98B6880)
#define SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x98B69B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaNamespaceManager_TypeDefinitionIndex = 28099;

	class SchemaNamespaceManager : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaObject* node; // 0x50

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* LookupNamespace(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(str, nullptr);
		}

		::System::String* LookupPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMESPACEMANAGER_LOOKUPPREFIX_OFFSET))(str, nullptr);
		}

	};
}

