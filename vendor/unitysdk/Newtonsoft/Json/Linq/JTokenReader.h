#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JContainer; }

#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_GET_CURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x9517E80)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9517E90)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9517EF0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_READ_OFFSET UNITYSDK_OFFSET(0x9517F70)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_READOVER_OFFSET UNITYSDK_OFFSET(0x9518160)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x95188A0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_GETENDTOKEN_OFFSET UNITYSDK_OFFSET(0x9518980)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_READINTO_OFFSET UNITYSDK_OFFSET(0x95180D0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_SETEND_OFFSET UNITYSDK_OFFSET(0x95188E0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x9518240)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_SAFETOSTRING_OFFSET UNITYSDK_OFFSET(0x9518AE0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT.JSON.IJSONLINEINFO.HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x9518B10)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x9518BC0)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x9518C70)
#define NEWTONSOFT_JSON_LINQ_JTOKENREADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9518D20)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JTokenReader_TypeDefinitionIndex = 32051;

	class JTokenReader : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JToken* _root; // 0x78
		::System::String* _initialPath; // 0x80
		::Newtonsoft::Json::Linq::JToken* _parent; // 0x88
		::Newtonsoft::Json::Linq::JToken* _current; // 0x90

		::Newtonsoft::Json::Linq::JToken* get_CurrentToken()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_GET_CURRENTTOKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JToken* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_READ_OFFSET))(nullptr);
		}

		::System::Boolean ReadOver(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_READOVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReadToEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_READTOEND_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndToken(::Newtonsoft::Json::Linq::JContainer* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_GETENDTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReadInto(::Newtonsoft::Json::Linq::JContainer* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_READINTO_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetEnd(::Newtonsoft::Json::Linq::JContainer* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_SETEND_OFFSET))(arg, nullptr);
		}

		::System::Void SetToken(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_SETTOKEN_OFFSET))(arg, nullptr);
		}

		::System::String* SafeToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_SAFETOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT.JSON.IJSONLINEINFO.HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKENREADER_GET_PATH_OFFSET))(nullptr);
		}

	};
}

