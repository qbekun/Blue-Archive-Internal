#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Schema { class JsonSchema; }
namespace Newtonsoft::Json::Schema { class JsonSchemaModel; }
namespace Newtonsoft::Json::Schema { class ValidationEventHandler; }
namespace Newtonsoft::Json { class JsonToken; }
namespace Newtonsoft::Json::Schema { class JsonSchemaException; }
namespace Newtonsoft::Json::Schema { class JsonSchemaType; }

#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_ADD_VALIDATIONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9485070)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_REMOVE_VALIDATIONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x9485110)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x94851B0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x94851E0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x9485210)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x9485240)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_SET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x9485270)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x9485280)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x94852B0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_PUSH_OFFSET UNITYSDK_OFFSET(0x94852E0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_POP_OFFSET UNITYSDK_OFFSET(0x9485350)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_CURRENTSCHEMAS_OFFSET UNITYSDK_OFFSET(0x9485410)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_CURRENTMEMBERSCHEMAS_OFFSET UNITYSDK_OFFSET(0x9485430)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_RAISEERROR_OFFSET UNITYSDK_OFFSET(0x94866E0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_ONVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x9486A10)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9486AB0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_SCHEMA_OFFSET UNITYSDK_OFFSET(0x9486B70)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_SET_SCHEMA_OFFSET UNITYSDK_OFFSET(0x9486B80)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_READER_OFFSET UNITYSDK_OFFSET(0x9486C30)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9486C40)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATENOTDISALLOWED_OFFSET UNITYSDK_OFFSET(0x9486C80)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_GETCURRENTNODESCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x9486E40)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASINT32_OFFSET UNITYSDK_OFFSET(0x9486ED0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASBYTES_OFFSET UNITYSDK_OFFSET(0x9488930)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASDECIMAL_OFFSET UNITYSDK_OFFSET(0x9488970)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASDOUBLE_OFFSET UNITYSDK_OFFSET(0x94889B0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x94889F0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASSTRING_OFFSET UNITYSDK_OFFSET(0x9488A30)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASDATETIME_OFFSET UNITYSDK_OFFSET(0x9488A70)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x9488AB0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x9488AF0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATECURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x9486F10)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x94893E0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEENDOBJECT_OFFSET UNITYSDK_OFFSET(0x948B520)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEENDARRAY_OFFSET UNITYSDK_OFFSET(0x948B8D0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATENULL_OFFSET UNITYSDK_OFFSET(0x948B4E0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x948B4A0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATESTRING_OFFSET UNITYSDK_OFFSET(0x948AFA0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEINTEGER_OFFSET UNITYSDK_OFFSET(0x948A2A0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_PROCESSVALUE_OFFSET UNITYSDK_OFFSET(0x9488F90)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEFLOAT_OFFSET UNITYSDK_OFFSET(0x948A9E0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_FLOATINGPOINTREMAINDER_OFFSET UNITYSDK_OFFSET(0x948BC90)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_ISZERO_OFFSET UNITYSDK_OFFSET(0x948BC30)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x948A0E0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_ISPROPERTYDEFINIED_OFFSET UNITYSDK_OFFSET(0x948BD00)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEARRAY_OFFSET UNITYSDK_OFFSET(0x948C140)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEOBJECT_OFFSET UNITYSDK_OFFSET(0x948C160)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_TESTTYPE_OFFSET UNITYSDK_OFFSET(0x948BB10)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_NEWTONSOFT.JSON.IJSONLINEINFO.HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x948C180)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x948C230)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x948C2E0)
#define NEWTONSOFT_JSON_JSONVALIDATINGREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x948C390)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonValidatingReader_TypeDefinitionIndex = 31776;

	class JsonValidatingReader : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::JsonReader* _reader; // 0x78
		Il2CppObject* _stack; // 0x80
		::Newtonsoft::Json::Schema::JsonSchema* _schema; // 0x88
		::Newtonsoft::Json::Schema::JsonSchemaModel* _model; // 0x90
		SchemaScope* _currentScope; // 0x98
		::Newtonsoft::Json::Schema::ValidationEventHandler* ValidationEventHandler; // 0xA0
		Il2CppObject* EmptySchemaList; // 0x0

		::System::Void add_ValidationEventHandler(::Newtonsoft::Json::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_ADD_VALIDATIONEVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ValidationEventHandler(::Newtonsoft::Json::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_REMOVE_VALIDATIONEVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_PATH_OFFSET))(nullptr);
		}

		::System::Char get_QuoteChar()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_QUOTECHAR_OFFSET))(nullptr);
		}

		::System::Void set_QuoteChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_SET_QUOTECHAR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonToken* get_TokenType()
		{
			return (return (::Newtonsoft::Json::JsonToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_TOKENTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Void Push(SchemaScope* arg)
		{
			((::System::Void(*)(SchemaScope*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_PUSH_OFFSET))(arg, nullptr);
		}

		SchemaScope* Pop()
		{
			return (return (SchemaScope*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_POP_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentSchemas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_CURRENTSCHEMAS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentMemberSchemas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_CURRENTMEMBERSCHEMAS_OFFSET))(nullptr);
		}

		::System::Void RaiseError(::System::String* str, ::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::System::String*, ::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_RAISEERROR_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnValidationEvent(::Newtonsoft::Json::Schema::JsonSchemaException* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaException*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_ONVALIDATIONEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::JsonReader* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* get_Schema()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_SCHEMA_OFFSET))(nullptr);
		}

		::System::Void set_Schema(::Newtonsoft::Json::Schema::JsonSchema* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_SET_SCHEMA_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonReader* get_Reader()
		{
			return (return (::Newtonsoft::Json::JsonReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GET_READER_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void ValidateNotDisallowed(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATENOTDISALLOWED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCurrentNodeSchemaType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_GETCURRENTNODESCHEMATYPE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsInt32()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASINT32_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ReadAsBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsDecimal()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASDECIMAL_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsDouble()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASDOUBLE_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsBoolean()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASBOOLEAN_OFFSET))(nullptr);
		}

		::System::String* ReadAsString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsDateTime()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsDateTimeOffset()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READASDATETIMEOFFSET_OFFSET))(nullptr);
		}

		::System::Boolean Read()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_READ_OFFSET))(nullptr);
		}

		::System::Void ValidateCurrentToken()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATECURRENTTOKEN_OFFSET))(nullptr);
		}

		::System::Void WriteToken(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_WRITETOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateEndObject(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEENDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateEndArray(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEENDARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateNull(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATENULL_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateBoolean(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateString(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATESTRING_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateInteger(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_PROCESSVALUE_OFFSET))(nullptr);
		}

		::System::Void ValidateFloat(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Double FloatingPointRemainder(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_FLOATINGPOINTREMAINDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsZero(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_ISZERO_OFFSET))(arg, nullptr);
		}

		::System::Void ValidatePropertyName(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEPROPERTYNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPropertyDefinied(::Newtonsoft::Json::Schema::JsonSchemaModel* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_ISPROPERTYDEFINIED_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean ValidateArray(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateObject(::Newtonsoft::Json::Schema::JsonSchemaModel* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_VALIDATEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TestType(::Newtonsoft::Json::Schema::JsonSchemaModel* arg, ::Newtonsoft::Json::Schema::JsonSchemaType* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Schema::JsonSchemaModel*, ::Newtonsoft::Json::Schema::JsonSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_TESTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_NEWTONSOFT.JSON.IJSONLINEINFO.HASLINEINFO_OFFSET))(nullptr);
		}

		::System::Int32 Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINENUMBER_OFFSET))(nullptr);
		}

		::System::Int32 Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_NEWTONSOFT.JSON.IJSONLINEINFO.GET_LINEPOSITION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONVALIDATINGREADER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

