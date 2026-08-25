#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class ParserToken; }

#define BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A62D0)
#define BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A6320)
#define BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A63C0)
#define BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A6460)
#define BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A6500)
#define BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A65A0)
#define BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A6600)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int JsonException_TypeDefinitionIndex = 23306;

	class JsonException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::JSON::LitJson::ParserToken* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::ParserToken*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::JSON::LitJson::ParserToken* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::ParserToken*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

