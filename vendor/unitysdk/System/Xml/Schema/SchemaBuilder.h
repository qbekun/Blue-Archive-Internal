#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMABUILDER_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SCHEMABUILDER_PROCESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SCHEMABUILDER_ISCONTENTPARSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SCHEMABUILDER_PROCESSMARKUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SCHEMABUILDER_PROCESSCDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SCHEMABUILDER_STARTCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SCHEMABUILDER_ENDCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SCHEMABUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x988FFD0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaBuilder_TypeDefinitionIndex = 28087;

	class SchemaBuilder : public Il2CppObject
	{
	public:
		::System::Boolean ProcessElement(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER_PROCESSELEMENT_OFFSET))(str, str, str, nullptr);
		}

		::System::Void ProcessAttribute(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER_PROCESSATTRIBUTE_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Boolean IsContentParsed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER_ISCONTENTPARSED_OFFSET))(nullptr);
		}

		::System::Void ProcessMarkup(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER_PROCESSMARKUP_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessCData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER_PROCESSCDATA_OFFSET))(str, nullptr);
		}

		::System::Void StartChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER_STARTCHILDREN_OFFSET))(nullptr);
		}

		::System::Void EndChildren()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER_ENDCHILDREN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMABUILDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

