#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JValue; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonToken; }
namespace Newtonsoft::Json::Linq { class JTokenType; }

#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITETOKENASYNC_OFFSET UNITYSDK_OFFSET(0x9518E00)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_CURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x9518F00)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x9518F10)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9518F20)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9518FB0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9519000)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9519010)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x9519020)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDPARENT_OFFSET UNITYSDK_OFFSET(0x95190D0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_REMOVEPARENT_OFFSET UNITYSDK_OFFSET(0x9519130)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x95191B0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x9519260)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x9519320)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9519330)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDRAWVALUE_OFFSET UNITYSDK_OFFSET(0x9519430)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDJVALUE_OFFSET UNITYSDK_OFFSET(0x9519550)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x95196C0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x9519750)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x9519780)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x9519850)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x95198D0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x95199A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9519AD0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9519B40)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9519BB0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9519CD0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9519DE0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x9519F10)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A040)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A160)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A1D0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A240)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A360)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A3D0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A440)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A590)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A6E0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A810)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A8D0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951A9E0)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x951AB10)
#define NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x951AC80)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenWriter_TypeDefinitionIndex = 32053;

	class JTokenWriter : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JContainer* _token; // 0x60
		::Newtonsoft::Json::Linq::JContainer* _parent; // 0x68
		::Newtonsoft::Json::Linq::JValue* _value; // 0x70
		::Newtonsoft::Json::Linq::JToken* _current; // 0x78

		::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITETOKENASYNC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_CurrentToken()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_CURRENTTOKEN_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Token()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JContainer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void WriteStartObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTOBJECT_OFFSET))(nullptr);
		}

		::System::Void AddParent(::Newtonsoft::Json::Linq::JContainer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDPARENT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_REMOVEPARENT_OFFSET))(nullptr);
		}

		::System::Void WriteStartArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTARRAY_OFFSET))(nullptr);
		}

		::System::Void WriteStartConstructor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(str, nullptr);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEEND_OFFSET))(arg, nullptr);
		}

		::System::Void WritePropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void AddRawValue(::System::Object* arg, ::Newtonsoft::Json::Linq::JTokenType* arg, ::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JTokenType*, ::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDRAWVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddJValue(::Newtonsoft::Json::Linq::JValue* arg, ::Newtonsoft::Json::JsonToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::JsonToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_ADDJVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteNull()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITENULL_OFFSET))(nullptr);
		}

		::System::Void WriteUndefined()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEUNDEFINED_OFFSET))(nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteComment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITECOMMENT_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::SByte arg)
		{
			((::System::Void(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::DateTimeOffset* arg)
		{
			((::System::Void(*)(::System::DateTimeOffset*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Guid* arg)
		{
			((::System::Void(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteValue(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonReader* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENWRITER_WRITETOKEN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

