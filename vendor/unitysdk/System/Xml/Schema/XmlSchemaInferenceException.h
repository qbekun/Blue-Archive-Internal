#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9880C50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9880C70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9880C90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x987E330)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9876500)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInferenceException_TypeDefinitionIndex = 28077;

	class XmlSchemaInferenceException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCEEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

