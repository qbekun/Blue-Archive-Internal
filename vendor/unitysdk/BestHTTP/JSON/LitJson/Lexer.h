#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class FsmContext; }

#define BESTHTTP_JSON_LITJSON_LEXER_STATE8_OFFSET UNITYSDK_OFFSET(0x8B2F40)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE26_OFFSET UNITYSDK_OFFSET(0x8B3090)
#define BESTHTTP_JSON_LITJSON_LEXER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x8B21C0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE16_OFFSET UNITYSDK_OFFSET(0x8B3120)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE17_OFFSET UNITYSDK_OFFSET(0x8B31A0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE24_OFFSET UNITYSDK_OFFSET(0x8B3220)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE19_OFFSET UNITYSDK_OFFSET(0x8B32B0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE1_OFFSET UNITYSDK_OFFSET(0x8B3380)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE15_OFFSET UNITYSDK_OFFSET(0x8B3570)
#define BESTHTTP_JSON_LITJSON_LEXER_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x8B3600)
#define BESTHTTP_JSON_LITJSON_LEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B1A90)
#define BESTHTTP_JSON_LITJSON_LEXER_NEXTCHAR_OFFSET UNITYSDK_OFFSET(0x8B3610)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE14_OFFSET UNITYSDK_OFFSET(0x8B3650)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE2_OFFSET UNITYSDK_OFFSET(0x8B36D0)
#define BESTHTTP_JSON_LITJSON_LEXER_GET_ENDOFINPUT_OFFSET UNITYSDK_OFFSET(0x8B3790)
#define BESTHTTP_JSON_LITJSON_LEXER_SET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x8B37A0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE21_OFFSET UNITYSDK_OFFSET(0x8B37B0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE23_OFFSET UNITYSDK_OFFSET(0x8B3A60)
#define BESTHTTP_JSON_LITJSON_LEXER_POPULATEFSMTABLES_OFFSET UNITYSDK_OFFSET(0x8B3B30)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE28_OFFSET UNITYSDK_OFFSET(0x8B4870)
#define BESTHTTP_JSON_LITJSON_LEXER_PROCESSESCCHAR_OFFSET UNITYSDK_OFFSET(0x8B39A0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE6_OFFSET UNITYSDK_OFFSET(0x8B4910)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE13_OFFSET UNITYSDK_OFFSET(0x8B4A20)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE4_OFFSET UNITYSDK_OFFSET(0x8B4AA0)
#define BESTHTTP_JSON_LITJSON_LEXER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x8B4BA0)
#define BESTHTTP_JSON_LITJSON_LEXER_UNGETCHAR_OFFSET UNITYSDK_OFFSET(0x8B3020)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE5_OFFSET UNITYSDK_OFFSET(0x8B4BB0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE11_OFFSET UNITYSDK_OFFSET(0x8B4C60)
#define BESTHTTP_JSON_LITJSON_LEXER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET UNITYSDK_OFFSET(0x8B4CF0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE10_OFFSET UNITYSDK_OFFSET(0x8B4D00)
#define BESTHTTP_JSON_LITJSON_LEXER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8B4D80)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE12_OFFSET UNITYSDK_OFFSET(0x8B4DC0)
#define BESTHTTP_JSON_LITJSON_LEXER_HEXVALUE_OFFSET UNITYSDK_OFFSET(0x8B4E40)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE25_OFFSET UNITYSDK_OFFSET(0x8B4E60)
#define BESTHTTP_JSON_LITJSON_LEXER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x8B4EF0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE18_OFFSET UNITYSDK_OFFSET(0x8B4F00)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE22_OFFSET UNITYSDK_OFFSET(0x8B4F90)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE7_OFFSET UNITYSDK_OFFSET(0x8B53C0)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE20_OFFSET UNITYSDK_OFFSET(0x8B5470)
#define BESTHTTP_JSON_LITJSON_LEXER_GET_ALLOWCOMMENTS_OFFSET UNITYSDK_OFFSET(0x8B5500)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE3_OFFSET UNITYSDK_OFFSET(0x8B5510)
#define BESTHTTP_JSON_LITJSON_LEXER_GETCHAR_OFFSET UNITYSDK_OFFSET(0x8B3030)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE27_OFFSET UNITYSDK_OFFSET(0x8B5650)
#define BESTHTTP_JSON_LITJSON_LEXER_STATE9_OFFSET UNITYSDK_OFFSET(0x8B56E0)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 23327;

	class Lexer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* fsm_return_table; // 0x0
		::Il2CppArray<::System::Object*>* fsm_handler_table; // 0x8
		::System::Boolean allow_comments; // 0x10
		::System::Boolean allow_single_quoted_strings; // 0x11
		::System::Boolean end_of_input; // 0x12
		::BestHTTP::JSON::LitJson::FsmContext* fsm_context; // 0x18
		::System::Int32 input_buffer; // 0x20
		::System::Int32 input_char; // 0x24
		::System::IO::TextReader* reader; // 0x28
		::System::Int32 state; // 0x30
		::System::Text::StringBuilder* string_buffer; // 0x38
		::System::String* string_value; // 0x40
		::System::Int32 token; // 0x48
		::System::Int32 unichar; // 0x4C

		::System::Boolean State8(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE8_OFFSET))(arg, nullptr);
		}

		::System::Boolean State26(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE26_OFFSET))(arg, nullptr);
		}

		::System::Boolean NextToken()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_NEXTTOKEN_OFFSET))(nullptr);
		}

		::System::Boolean State16(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE16_OFFSET))(arg, nullptr);
		}

		::System::Boolean State17(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE17_OFFSET))(arg, nullptr);
		}

		::System::Boolean State24(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE24_OFFSET))(arg, nullptr);
		}

		::System::Boolean State19(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE19_OFFSET))(arg, nullptr);
		}

		::System::Boolean State1(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE1_OFFSET))(arg, nullptr);
		}

		::System::Boolean State15(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE15_OFFSET))(arg, nullptr);
		}

		::System::String* get_StringValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_GET_STRINGVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 NextChar()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_NEXTCHAR_OFFSET))(nullptr);
		}

		::System::Boolean State14(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE14_OFFSET))(arg, nullptr);
		}

		::System::Boolean State2(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE2_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EndOfInput()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_GET_ENDOFINPUT_OFFSET))(nullptr);
		}

		::System::Void set_AllowComments(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_SET_ALLOWCOMMENTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean State21(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE21_OFFSET))(arg, nullptr);
		}

		::System::Boolean State23(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE23_OFFSET))(arg, nullptr);
		}

		::System::Void PopulateFsmTables(::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_POPULATEFSMTABLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean State28(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE28_OFFSET))(arg, nullptr);
		}

		::System::Char ProcessEscChar(::System::Int32 arg)
		{
			return (return (::System::Char(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_PROCESSESCCHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean State6(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE6_OFFSET))(arg, nullptr);
		}

		::System::Boolean State13(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE13_OFFSET))(arg, nullptr);
		}

		::System::Boolean State4(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE4_OFFSET))(arg, nullptr);
		}

		::System::Void set_AllowSingleQuotedStrings(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_SET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(arg, nullptr);
		}

		::System::Void UngetChar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_UNGETCHAR_OFFSET))(nullptr);
		}

		::System::Boolean State5(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE5_OFFSET))(arg, nullptr);
		}

		::System::Boolean State11(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE11_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowSingleQuotedStrings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_GET_ALLOWSINGLEQUOTEDSTRINGS_OFFSET))(nullptr);
		}

		::System::Boolean State10(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE10_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean State12(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE12_OFFSET))(arg, nullptr);
		}

		::System::Int32 HexValue(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_HEXVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean State25(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE25_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Token()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Boolean State18(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE18_OFFSET))(arg, nullptr);
		}

		::System::Boolean State22(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE22_OFFSET))(arg, nullptr);
		}

		::System::Boolean State7(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE7_OFFSET))(arg, nullptr);
		}

		::System::Boolean State20(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE20_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowComments()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_GET_ALLOWCOMMENTS_OFFSET))(nullptr);
		}

		::System::Boolean State3(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE3_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetChar()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_GETCHAR_OFFSET))(nullptr);
		}

		::System::Boolean State27(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE27_OFFSET))(arg, nullptr);
		}

		::System::Boolean State9(::BestHTTP::JSON::LitJson::FsmContext* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::FsmContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_LEXER_STATE9_OFFSET))(arg, nullptr);
		}

	};
}

