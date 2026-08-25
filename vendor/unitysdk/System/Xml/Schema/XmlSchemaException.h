#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5300)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x98E57F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5930)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5AF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5970)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5BF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98DB970)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D4FD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5C90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D4DE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5D50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5E50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5D70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98E5B10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x98E5720)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_GETRES_OFFSET UNITYSDK_OFFSET(0x98E5F10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x98E5F20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_SOURCEURI_OFFSET UNITYSDK_OFFSET(0x98E5F30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x98E5F40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x98E5F50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_SOURCESCHEMAOBJECT_OFFSET UNITYSDK_OFFSET(0x98E5F60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x98DACE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSCHEMAOBJECT_OFFSET UNITYSDK_OFFSET(0x98E5F70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x98E5F90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x98E5FF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaException_TypeDefinitionIndex = 28149;

	class XmlSchemaException : public Il2CppObject
	{
	public:
		::System::String* res; // 0x90
		::Il2CppArray<::System::Object*>* args; // 0x98
		::System::String* sourceUri; // 0xA0
		::System::Int32 lineNumber; // 0xA8
		::System::Int32 linePosition; // 0xAC
		::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject; // 0xB0
		::System::String* message; // 0xB8

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Exception* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, arg, str, arg, arg, arg, nullptr);
		}

		::System::String* CreateMessage(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_CREATEMESSAGE_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_GetRes()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_GETRES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_ARGS_OFFSET))(nullptr);
		}

		::System::String* get_SourceUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_SOURCEURI_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaObject* get_SourceSchemaObject()
		{
			return (return (::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_SOURCESCHEMAOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetSource(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSOURCE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SetSchemaObject(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSCHEMAOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetSource(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_SETSOURCE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

