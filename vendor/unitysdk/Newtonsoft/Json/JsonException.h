#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonException; }
namespace Newtonsoft::Json { class IJsonLineInfo; }

#define NEWTONSOFT_JSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x944F870)
#define NEWTONSOFT_JSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x944F8C0)
#define NEWTONSOFT_JSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x944F920)
#define NEWTONSOFT_JSON_JSONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x944F980)
#define NEWTONSOFT_JSON_JSONEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x944F9F0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonException_TypeDefinitionIndex = 31690;

	class JsonException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::JsonException* Create(::Newtonsoft::Json::IJsonLineInfo* arg, ::System::String* str, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::JsonException*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONEXCEPTION_CREATE_OFFSET))(arg, str, str, nullptr);
		}

	};
}

