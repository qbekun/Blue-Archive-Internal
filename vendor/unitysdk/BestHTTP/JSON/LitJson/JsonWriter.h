#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class WriterContext; }
namespace BestHTTP::JSON::LitJson { class Condition; }

#define BESTHTTP_JSON_LITJSON_JSONWRITER_GET_INDENTVALUE_OFFSET UNITYSDK_OFFSET(0x8B2490)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_SET_INDENTVALUE_OFFSET UNITYSDK_OFFSET(0x8B24A0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_GET_PRETTYPRINT_OFFSET UNITYSDK_OFFSET(0x8B24C0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_SET_PRETTYPRINT_OFFSET UNITYSDK_OFFSET(0x8B24D0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_GET_TEXTWRITER_OFFSET UNITYSDK_OFFSET(0x8B24E0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_GET_VALIDATE_OFFSET UNITYSDK_OFFSET(0x8B24F0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_SET_VALIDATE_OFFSET UNITYSDK_OFFSET(0x8B2500)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_GET_LOWERCASEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8B2510)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_SET_LOWERCASEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8B2520)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8B2530)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A7150)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8B26B0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A5D60)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_DOVALIDATION_OFFSET UNITYSDK_OFFSET(0x8B2720)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x8B2590)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_INTTOHEX_OFFSET UNITYSDK_OFFSET(0x8B2920)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_INDENT_OFFSET UNITYSDK_OFFSET(0x8B2A40)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_PUT_OFFSET UNITYSDK_OFFSET(0x8B2A50)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_PUTNEWLINE_OFFSET UNITYSDK_OFFSET(0x8B2AE0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_PUTNEWLINE_OFFSET UNITYSDK_OFFSET(0x8B2AF0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_PUTSTRING_OFFSET UNITYSDK_OFFSET(0x8B2B90)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_UNINDENT_OFFSET UNITYSDK_OFFSET(0x8B2EC0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8B2ED0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_RESET_OFFSET UNITYSDK_OFFSET(0x8AEA60)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8A4930)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8AF990)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8A4A30)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8AE650)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8A4BC0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8A4CE0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8A4850)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x8AE770)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEARRAYEND_OFFSET UNITYSDK_OFFSET(0x8A4F40)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEARRAYSTART_OFFSET UNITYSDK_OFFSET(0x8A4E00)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEOBJECTEND_OFFSET UNITYSDK_OFFSET(0x8A5360)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEOBJECTSTART_OFFSET UNITYSDK_OFFSET(0x8A50E0)
#define BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x8A5220)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int JsonWriter_TypeDefinitionIndex = 23324;

	class JsonWriter : public Il2CppObject
	{
	public:
		::System::Globalization::NumberFormatInfo* number_format; // 0x0
		::BestHTTP::JSON::LitJson::WriterContext* context; // 0x10
		Il2CppObject* ctx_stack; // 0x18
		::System::Boolean has_reached_end; // 0x20
		::Il2CppArray<::System::Object*>* hex_seq; // 0x28
		::System::Int32 indentation; // 0x30
		::System::Int32 indent_value; // 0x34
		::System::Text::StringBuilder* inst_string_builder; // 0x38
		::System::Boolean pretty_print; // 0x40
		::System::Boolean validate; // 0x41
		::System::Boolean lower_case_properties; // 0x42
		::System::IO::TextWriter* writer; // 0x48

		::System::Int32 get_IndentValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_GET_INDENTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_IndentValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_SET_INDENTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PrettyPrint()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_GET_PRETTYPRINT_OFFSET))(nullptr);
		}

		::System::Void set_PrettyPrint(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_SET_PRETTYPRINT_OFFSET))(arg, nullptr);
		}

		::System::IO::TextWriter* get_TextWriter()
		{
			return (return (::System::IO::TextWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_GET_TEXTWRITER_OFFSET))(nullptr);
		}

		::System::Boolean get_Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_GET_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void set_Validate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_SET_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_LowerCaseProperties()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_GET_LOWERCASEPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void set_LowerCaseProperties(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_SET_LOWERCASEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void DoValidation(::BestHTTP::JSON::LitJson::Condition* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::Condition*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_DOVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_INIT_OFFSET))(nullptr);
		}

		::System::Void IntToHex(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_INTTOHEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Indent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_INDENT_OFFSET))(nullptr);
		}

		::System::Void Put(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_PUT_OFFSET))(str, nullptr);
		}

		::System::Void PutNewline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_PUTNEWLINE_OFFSET))(nullptr);
		}

		::System::Void PutNewline(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_PUTNEWLINE_OFFSET))(arg, nullptr);
		}

		::System::Void PutString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_PUTSTRING_OFFSET))(str, nullptr);
		}

		::System::Void Unindent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_UNINDENT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_RESET_OFFSET))(nullptr);
		}

		::System::Void Write(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Write(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET))(str, nullptr);
		}

		::System::Void Write(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteArrayEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEARRAYEND_OFFSET))(nullptr);
		}

		::System::Void WriteArrayStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEARRAYSTART_OFFSET))(nullptr);
		}

		::System::Void WriteObjectEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEOBJECTEND_OFFSET))(nullptr);
		}

		::System::Void WriteObjectStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEOBJECTSTART_OFFSET))(nullptr);
		}

		::System::Void WritePropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET))(str, nullptr);
		}

	};
}

