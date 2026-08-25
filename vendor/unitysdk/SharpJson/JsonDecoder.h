#pragma once
#include "../unitysdk.h"

namespace SharpJson { class Lexer; }

#define SHARPJSON_JSONDECODER_GET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x9590720)
#define SHARPJSON_JSONDECODER_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x9590730)
#define SHARPJSON_JSONDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x9590740)
#define SHARPJSON_JSONDECODER_EVALLEXER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHARPJSON_JSONDECODER_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x9590A50)
#define SHARPJSON_JSONDECODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9590A60)
#define SHARPJSON_JSONDECODER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x95907D0)
#define SHARPJSON_JSONDECODER_TRIGGERERROR_OFFSET UNITYSDK_OFFSET(0x9591020)
#define SHARPJSON_JSONDECODER_SET_PARSENUMBERSASFLOAT_OFFSET UNITYSDK_OFFSET(0x95910B0)
#define SHARPJSON_JSONDECODER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x9590DA0)
#define SHARPJSON_JSONDECODER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x9590A90)
#define SHARPJSON_JSONDECODER_DECODETEXT_OFFSET UNITYSDK_OFFSET(0x95910C0)

namespace SharpJson
{
	inline static constexpr unsigned int JsonDecoder_TypeDefinitionIndex = 34947;

	class JsonDecoder : public Il2CppObject
	{
	public:
		::System::String* _errorMessage_k__BackingField; // 0x10
		::System::Boolean _parseNumbersAsFloat_k__BackingField; // 0x18
		::SharpJson::Lexer* lexer; // 0x20

		::System::Boolean get_parseNumbersAsFloat()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_GET_PARSENUMBERSASFLOAT_OFFSET))(nullptr);
		}

		::System::String* get_errorMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_GET_ERRORMESSAGE_OFFSET))(nullptr);
		}

		::System::Object* Decode(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_DECODE_OFFSET))(str, nullptr);
		}

		Il2CppObject* EvalLexer(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_EVALLEXER_OFFSET))(arg, nullptr);
		}

		::System::Void set_errorMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_SET_ERRORMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* ParseValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_PARSEVALUE_OFFSET))(nullptr);
		}

		::System::Void TriggerError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_TRIGGERERROR_OFFSET))(str, nullptr);
		}

		::System::Void set_parseNumbersAsFloat(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_SET_PARSENUMBERSASFLOAT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ParseArray()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_PARSEARRAY_OFFSET))(nullptr);
		}

		Il2CppObject* ParseObject()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_PARSEOBJECT_OFFSET))(nullptr);
		}

		::System::Object* DecodeText(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SHARPJSON_JSONDECODER_DECODETEXT_OFFSET))(str, nullptr);
		}

	};
}

