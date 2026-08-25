#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonReaderException; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class IJsonLineInfo; }

#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x9457B10)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x9457B20)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9457B30)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9457B40)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9457B90)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9457BF0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9457C50)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9457CC0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x9452500)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x9452BA0)
#define NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET UNITYSDK_OFFSET(0x9457D60)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonReaderException_TypeDefinitionIndex = 31705;

	class JsonReaderException : public Il2CppObject
	{
	public:
		::System::Int32 _LineNumber_k__BackingField; // 0x90
		::System::Int32 _LinePosition_k__BackingField; // 0x94
		::System::String* _Path_k__BackingField; // 0x98

		::System::Int32 get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_.CTOR_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* arg, ::System::String* str)
		{
			return (return (::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET))(arg, str, nullptr);
		}

		::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::JsonReader* arg, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

		::Newtonsoft::Json::JsonReaderException* Create(::Newtonsoft::Json::IJsonLineInfo* arg, ::System::String* str, ::System::String* str, ::System::Exception* arg)
		{
			return (return (::Newtonsoft::Json::JsonReaderException*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADEREXCEPTION_CREATE_OFFSET))(arg, str, str, arg, nullptr);
		}

	};
}

