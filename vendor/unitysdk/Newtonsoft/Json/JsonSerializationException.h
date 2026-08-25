#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonSerializationException; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class IJsonLineInfo; }

#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x9457FB0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x9457FC0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9457FD0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9457FE0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9458030)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9458090)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94580F0)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9458160)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x944E860)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x9458200)
#define NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x9458280)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializationException_TypeDefinitionIndex = 31707;

	class JsonSerializationException : public Il2CppObject
	{
	public:
		::System::Int32 _LineNumber_k__BackingField; // 0x90
		::System::Int32 _LinePosition_k__BackingField; // 0x94
		::System::String* _Path_k__BackingField; // 0x98

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_.CTOR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::JsonReader* arg, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET))(arg, str, nullptr);
		}

		::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::JsonReader* arg, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

		::Newtonsoft::Json::JsonSerializationException* Create(::Newtonsoft::Json::IJsonLineInfo* arg, ::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::Newtonsoft::Json::JsonSerializationException*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZATIONEXCEPTION_CREATE_OFFSET))(arg, str, str, arg, nullptr);
		}

	};
}

