#pragma once
#include "../unitysdk.h"

#define SHARPJSON_LEXER_GET_HASERROR_OFFSET UNITYSDK_OFFSET(0x958FB10)
#define SHARPJSON_LEXER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x958FB20)
#define SHARPJSON_LEXER_SET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x958FB30)
#define SHARPJSON_LEXER_GET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x958FB40)
#define SHARPJSON_LEXER_SET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x958FB50)
#define SHARPJSON_LEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0x958FB60)
#define SHARPJSON_LEXER_RESET_OFFSET UNITYSDK_OFFSET(0x958FC00)
#define SHARPJSON_LEXER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x958FC20)
#define SHARPJSON_LEXER_GETNUMBERSTRING_OFFSET UNITYSDK_OFFSET(0x95900C0)
#define SHARPJSON_LEXER_PARSEFLOATNUMBER_OFFSET UNITYSDK_OFFSET(0x9590200)
#define SHARPJSON_LEXER_PARSEDOUBLENUMBER_OFFSET UNITYSDK_OFFSET(0x9590330)
#define SHARPJSON_LEXER_GETLASTINDEXOFNUMBER_OFFSET UNITYSDK_OFFSET(0x9590180)
#define SHARPJSON_LEXER_SKIPWHITESPACES_OFFSET UNITYSDK_OFFSET(0x9590010)
#define SHARPJSON_LEXER_LOOKAHEAD_OFFSET UNITYSDK_OFFSET(0x9590460)
#define SHARPJSON_LEXER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x95906F0)
#define SHARPJSON_LEXER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x9590490)

namespace SharpJson
{
	inline static constexpr unsigned int Lexer_TypeDefinitionIndex = 34946;

	class Lexer : public Il2CppObject
	{
	public:
		::System::Int32 _lineNumber_k__BackingField; // 0x10
		::System::Boolean _parseNumbersAsFloat_k__BackingField; // 0x14
		::Il2CppArray<::System::Object*>* json; // 0x18
		::System::Int32 index; // 0x20
		::System::Boolean success; // 0x24
		::Il2CppArray<::System::Object*>* stringBuffer; // 0x28

		::System::Boolean get_hasError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_HASERROR_OFFSET))(nullptr);
		}

		::System::Int32 get_lineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_lineNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SET_LINENUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_parseNumbersAsFloat()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GET_PARSENUMBERSASFLOAT_OFFSET))(nullptr);
		}

		::System::Void set_parseNumbersAsFloat(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SET_PARSENUMBERSASFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_RESET_OFFSET))(nullptr);
		}

		::System::String* ParseString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSESTRING_OFFSET))(nullptr);
		}

		::System::String* GetNumberString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GETNUMBERSTRING_OFFSET))(nullptr);
		}

		::System::Single ParseFloatNumber()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSEFLOATNUMBER_OFFSET))(nullptr);
		}

		::System::Double ParseDoubleNumber()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_PARSEDOUBLENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 GetLastIndexOfNumber(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_GETLASTINDEXOFNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void SkipWhiteSpaces()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_SKIPWHITESPACES_OFFSET))(nullptr);
		}

		Token* LookAhead()
		{
			return (return (Token*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_LOOKAHEAD_OFFSET))(nullptr);
		}

		Token* NextToken()
		{
			return (return (Token*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_NEXTTOKEN_OFFSET))(nullptr);
		}

		Token* NextToken(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (Token*(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_LEXER_NEXTTOKEN_OFFSET))(arg, arg, nullptr);
		}

	};
}

