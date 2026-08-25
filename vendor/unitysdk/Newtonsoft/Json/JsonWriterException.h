#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriterException; }
namespace Newtonsoft::Json { class JsonWriter; }

#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_GET_PATH_OFFSET UNITYSDK_OFFSET(0x949A220)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x949A230)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x949A240)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x949A250)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x949A260)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x949A280)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x94994C0)
#define NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x949A2C0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonWriterException_TypeDefinitionIndex = 31788;

	class JsonWriterException : public Il2CppObject
	{
	public:
		::System::String* _Path_k__BackingField; // 0x90

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::Newtonsoft::Json::JsonWriterException* Create(::Newtonsoft::Json::JsonWriter* arg, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::Newtonsoft::Json::JsonWriterException*(*)(::Newtonsoft::Json::JsonWriter*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

		::Newtonsoft::Json::JsonWriterException* Create(::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::Newtonsoft::Json::JsonWriterException*(*)(::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITEREXCEPTION_CREATE_OFFSET))(str, str, arg, nullptr);
		}

	};
}

