#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F4A70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x98F4A90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F4AB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F4AC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F4BB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F4BF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaValidationException_TypeDefinitionIndex = 28206;

	class XmlSchemaValidationException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET))(str, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET))(str, arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Exception* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATIONEXCEPTION_.CTOR_OFFSET))(str, arg, arg, str, arg, arg, nullptr);
		}

	};
}

