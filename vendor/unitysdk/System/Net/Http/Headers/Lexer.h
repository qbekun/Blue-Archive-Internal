#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_LEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9816F30)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x98208A0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x98208B0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x98175D0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x98208C0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETQUOTEDSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9819670)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_GETREMAININGSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9817650)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISSTARSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x981BB60)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x9820950)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_OFFSET UNITYSDK_OFFSET(0x981BBF0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETTIMESPANVALUE_OFFSET UNITYSDK_OFFSET(0x98195B0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9820A60)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_OFFSET UNITYSDK_OFFSET(0x9820BA0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x9820C70)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDTOKEN_OFFSET UNITYSDK_OFFSET(0x9820D80)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDCHARACTER_OFFSET UNITYSDK_OFFSET(0x9820E10)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_EATCHAR_OFFSET UNITYSDK_OFFSET(0x981C560)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x981C520)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_SCANCOMMENTOPTIONAL_OFFSET UNITYSDK_OFFSET(0x9820ED0)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_SCAN_OFFSET UNITYSDK_OFFSET(0x9817260)
#define SYSTEM_NET_HTTP_HEADERS_LEXER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9821020)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 36692;

	class Lexer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* token_chars; // 0x0
		::System::Int32 last_token_char; // 0x8
		::Il2CppArray<::System::Object*>* dt_formats; // 0x10
		::System::String* s; // 0x10
		::System::Int32 pos; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Position()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::String* GetStringValue(::System::Net::Http::Headers::Token* arg)
		{
			return (return (::System::String*(*)(::System::Net::Http::Headers::Token*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* GetStringValue(::System::Net::Http::Headers::Token* arg, ::System::Net::Http::Headers::Token* arg)
		{
			return (return (::System::String*(*)(::System::Net::Http::Headers::Token*, ::System::Net::Http::Headers::Token*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETSTRINGVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetQuotedStringValue(::System::Net::Http::Headers::Token* arg)
		{
			return (return (::System::String*(*)(::System::Net::Http::Headers::Token*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETQUOTEDSTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* GetRemainingStringValue(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_GETREMAININGSTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStarStringValue(::System::Net::Http::Headers::Token* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Token*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISSTARSTRINGVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetNumericValue(::System::Net::Http::Headers::Token* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Token*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetNumericValue(::System::Net::Http::Headers::Token* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Token*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETNUMERICVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* TryGetTimeSpanValue(::System::Net::Http::Headers::Token* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::Headers::Token*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETTIMESPANVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetDateValue(::System::Net::Http::Headers::Token* arg, ::System::DateTimeOffset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Token*, ::System::DateTimeOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDateValue(::System::String* str, ::System::DateTimeOffset&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::DateTimeOffset&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDATEVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetDoubleValue(::System::Net::Http::Headers::Token* arg, double&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Token*, double&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_TRYGETDOUBLEVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidToken(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDTOKEN_OFFSET))(str, nullptr);
		}

		::System::Boolean IsValidCharacter(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_ISVALIDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void EatChar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_EATCHAR_OFFSET))(nullptr);
		}

		::System::Int32 PeekChar()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_PEEKCHAR_OFFSET))(nullptr);
		}

		::System::Boolean ScanCommentOptional(::System::String&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_SCANCOMMENTOPTIONAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Http::Headers::Token* Scan(::System::Boolean arg)
		{
			return (return (::System::Net::Http::Headers::Token*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_SCAN_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_LEXER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

