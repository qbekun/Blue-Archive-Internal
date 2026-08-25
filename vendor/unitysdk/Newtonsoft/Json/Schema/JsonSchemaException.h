#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x94EF770)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x94EF780)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_GET_PATH_OFFSET UNITYSDK_OFFSET(0x94EF790)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94EF7A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94EF7B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94EF7C0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94EF7D0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94EF7F0)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaException_TypeDefinitionIndex = 31982;

	class JsonSchemaException : public Il2CppObject
	{
	public:
		::System::Int32 _LineNumber_k__BackingField; // 0x90
		::System::Int32 _LinePosition_k__BackingField; // 0x94
		::System::String* _Path_k__BackingField; // 0x98

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAEXCEPTION_.CTOR_OFFSET))(str, arg, str, arg, arg, nullptr);
		}

	};
}

