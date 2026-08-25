#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A078C0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A07940)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x9A07A10)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_SCHEMANAMES_OFFSET UNITYSDK_OFFSET(0x9A07A20)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9A07AA0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_COMPILATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x9A07AB0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_HASERRORS_OFFSET UNITYSDK_OFFSET(0x9A07AC0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_ADDTOTABLE_OFFSET UNITYSDK_OFFSET(0x9A07AD0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDATTRIBUTEGROUPREDEFINE_OFFSET UNITYSDK_OFFSET(0x9A07FE0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDGROUPREDEFINE_OFFSET UNITYSDK_OFFSET(0x9A08220)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDTYPEREDEFINE_OFFSET UNITYSDK_OFFSET(0x9A08100)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A083A0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A08320)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A084C0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A08600)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A086C0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A08820)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A088A0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A088B0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9A08410)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENTNOTHROW_OFFSET UNITYSDK_OFFSET(0x9A08940)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int BaseProcessor_TypeDefinitionIndex = 27955;

	class BaseProcessor : public Il2CppObject
	{
	public:
		::System::Xml::XmlNameTable* nameTable; // 0x10
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x18
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x20
		::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings; // 0x28
		::System::Int32 errorCount; // 0x30
		::System::String* NsXml; // 0x38

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Xml::Schema::SchemaNames* arg, ::System::Xml::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Xml::Schema::SchemaNames* arg, ::System::Xml::Schema::ValidationEventHandler* arg, ::System::Xml::Schema::XmlSchemaCompilationSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return (return (::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_NAMETABLE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::SchemaNames* get_SchemaNames()
		{
			return (return (::System::Xml::Schema::SchemaNames*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_SCHEMANAMES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::ValidationEventHandler* get_EventHandler()
		{
			return (return (::System::Xml::Schema::ValidationEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_EVENTHANDLER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaCompilationSettings* get_CompilationSettings()
		{
			return (return (::System::Xml::Schema::XmlSchemaCompilationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_COMPILATIONSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean get_HasErrors()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_HASERRORS_OFFSET))(nullptr);
		}

		::System::Void AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* arg, ::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_ADDTOTABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidAttributeGroupRedefine(::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSchemaObjectTable* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDATTRIBUTEGROUPREDEFINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidGroupRedefine(::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSchemaObjectTable* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDGROUPREDEFINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsValidTypeRedefine(::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSchemaObjectTable* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDTYPEREDEFINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::System::String* str, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::System::String* str, ::System::String* str, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(str, str, str, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Exception* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Exception*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(str, str, str, str, arg, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::String* str, ::System::String* str, ::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendValidationEventNoThrow(::System::Xml::Schema::XmlSchemaException* arg, ::System::Xml::Schema::XmlSeverityType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENTNOTHROW_OFFSET))(arg, arg, nullptr);
		}

	};
}

