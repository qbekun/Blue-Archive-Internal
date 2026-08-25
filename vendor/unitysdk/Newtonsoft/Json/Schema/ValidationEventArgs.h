#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class JsonSchemaException; }

#define NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F5650)
#define NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTARGS_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x94F56D0)
#define NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTARGS_GET_PATH_OFFSET UNITYSDK_OFFSET(0x94F56E0)
#define NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTARGS_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x94E8E80)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int ValidationEventArgs_TypeDefinitionIndex = 31997;

	class ValidationEventArgs : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Schema::JsonSchemaException* _ex; // 0x10

		::System::Void .ctor(::Newtonsoft::Json::Schema::JsonSchemaException* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaException*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaException* get_Exception()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaException*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTARGS_GET_EXCEPTION_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTARGS_GET_PATH_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_VALIDATIONEVENTARGS_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

