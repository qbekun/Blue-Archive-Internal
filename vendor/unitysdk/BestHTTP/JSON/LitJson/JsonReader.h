#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class Lexer; }
namespace BestHTTP::JSON::LitJson { class JsonToken; }
namespace BestHTTP::JSON::LitJson { class ParserToken; }

#define BESTHTTP_JSON_LITJSON_JSONREADER_GET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x8B0FB0)
#define BESTHTTP_JSON_LITJSON_JSONREADER_SET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x8B0FD0)
#define BESTHTTP_JSON_LITJSON_JSONREADER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x8B0FF0)
#define BESTHTTP_JSON_LITJSON_JSONREADER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x8B1010)
#define BESTHTTP_JSON_LITJSON_JSONREADER_GET_SKIPNONMEMBERS_OFFSET UNITYSDK_OFFSET(0x8B1030)
#define BESTHTTP_JSON_LITJSON_JSONREADER_SET_SKIPNONMEMBERS_OFFSET UNITYSDK_OFFSET(0x8B1040)
#define BESTHTTP_JSON_LITJSON_JSONREADER_GET_ENDOFINPUT_OFFSET UNITYSDK_OFFSET(0x8B1050)
#define BESTHTTP_JSON_LITJSON_JSONREADER_GET_ENDOFJSON_OFFSET UNITYSDK_OFFSET(0x8B1060)
#define BESTHTTP_JSON_LITJSON_JSONREADER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x8B1070)
#define BESTHTTP_JSON_LITJSON_JSONREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8B1080)
#define BESTHTTP_JSON_LITJSON_JSONREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8B1090)
#define BESTHTTP_JSON_LITJSON_JSONREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8AF360)
#define BESTHTTP_JSON_LITJSON_JSONREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8AF010)
#define BESTHTTP_JSON_LITJSON_JSONREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B1900)
#define BESTHTTP_JSON_LITJSON_JSONREADER_POPULATEPARSETABLE_OFFSET UNITYSDK_OFFSET(0x8B10E0)
#define BESTHTTP_JSON_LITJSON_JSONREADER_TABLEADDCOL_OFFSET UNITYSDK_OFFSET(0x8B1C70)
#define BESTHTTP_JSON_LITJSON_JSONREADER_TABLEADDROW_OFFSET UNITYSDK_OFFSET(0x8B1B90)
#define BESTHTTP_JSON_LITJSON_JSONREADER_PROCESSNUMBER_OFFSET UNITYSDK_OFFSET(0x8B1D90)
#define BESTHTTP_JSON_LITJSON_JSONREADER_PROCESSSYMBOL_OFFSET UNITYSDK_OFFSET(0x8B2000)
#define BESTHTTP_JSON_LITJSON_JSONREADER_READTOKEN_OFFSET UNITYSDK_OFFSET(0x8B2170)
#define BESTHTTP_JSON_LITJSON_JSONREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x8B23B0)
#define BESTHTTP_JSON_LITJSON_JSONREADER_READ_OFFSET UNITYSDK_OFFSET(0x8AC750)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int JsonReader_TypeDefinitionIndex = 23321;

	class JsonReader : public Il2CppObject
	{
	public:
		Il2CppObject* parse_table; // 0x0
		Il2CppObject* automaton_stack; // 0x10
		::System::Int32 current_input; // 0x18
		::System::Int32 current_symbol; // 0x1C
		::System::Boolean end_of_json; // 0x20
		::System::Boolean end_of_input; // 0x21
		::BestHTTP::JSON::LitJson::Lexer* lexer; // 0x28
		::System::Boolean parser_in_string; // 0x30
		::System::Boolean parser_return; // 0x31
		::System::Boolean read_started; // 0x32
		::System::IO::TextReader* reader; // 0x38
		::System::Boolean reader_is_owned; // 0x40
		::System::Boolean skip_non_members; // 0x41
		::System::Object* token_value; // 0x48
		::BestHTTP::JSON::LitJson::JsonToken* token; // 0x50

		::System::Boolean get_AllowComments()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_GET_ALLOWCOMMENTS_OFFSET))(nullptr);
		}

		::System::Void set_AllowComments(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_SET_ALLOWCOMMENTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowSingleQuotedStrings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(nullptr);
		}

		::System::Void set_AllowSingleQuotedStrings(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SkipNonMembers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_GET_SKIPNONMEMBERS_OFFSET))(nullptr);
		}

		::System::Void set_SkipNonMembers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_SET_SKIPNONMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EndOfInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_GET_ENDOFINPUT_OFFSET))(nullptr);
		}

		::System::Boolean get_EndOfJson()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_GET_ENDOFJSON_OFFSET))(nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonToken* get_Token()
		{
			return (return (::BestHTTP::JSON::LitJson::JsonToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* PopulateParseTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_POPULATEPARSETABLE_OFFSET))(nullptr);
		}

		::System::Void TableAddCol(Il2CppObject* arg, ::BestHTTP::JSON::LitJson::ParserToken* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::BestHTTP::JSON::LitJson::ParserToken*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_TABLEADDCOL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void TableAddRow(Il2CppObject* arg, ::BestHTTP::JSON::LitJson::ParserToken* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::BestHTTP::JSON::LitJson::ParserToken*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_TABLEADDROW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessNumber(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_PROCESSNUMBER_OFFSET))(str, nullptr);
		}

		::System::Void ProcessSymbol()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_PROCESSSYMBOL_OFFSET))(nullptr);
		}

		::System::Boolean ReadToken()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_READTOKEN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONREADER_READ_OFFSET))(nullptr);
		}

	};
}

