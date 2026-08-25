#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class JsonType; }
namespace BestHTTP::JSON::LitJson { class JsonWriter; }

#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISLONG_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETJSONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETLONG_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETDOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETJSONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETLONG_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_IJSONWRAPPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int IJsonWrapper_TypeDefinitionIndex = 23303;

	class IJsonWrapper : public Il2CppObject
	{
	public:
		::System::Boolean get_IsArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISARRAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISBOOLEAN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDouble()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISDOUBLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISINT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLong()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISLONG_OFFSET))(nullptr);
		}

		::System::Boolean get_IsObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsString()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GET_ISSTRING_OFFSET))(nullptr);
		}

		::System::Boolean GetBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETBOOLEAN_OFFSET))(nullptr);
		}

		::System::Double GetDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETDOUBLE_OFFSET))(nullptr);
		}

		::System::Int32 GetInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETINT_OFFSET))(nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonType* GetJsonType()
		{
			return (return (::BestHTTP::JSON::LitJson::JsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETJSONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 GetLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETLONG_OFFSET))(nullptr);
		}

		::System::String* GetString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_GETSTRING_OFFSET))(nullptr);
		}

		::System::Void SetBoolean(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Void SetDouble(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETINT_OFFSET))(arg, nullptr);
		}

		::System::Void SetJsonType(::BestHTTP::JSON::LitJson::JsonType* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::JsonType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETJSONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETLONG_OFFSET))(arg, nullptr);
		}

		::System::Void SetString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_SETSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_TOJSON_OFFSET))(nullptr);
		}

		::System::Void ToJson(::BestHTTP::JSON::LitJson::JsonWriter* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_IJSONWRAPPER_TOJSON_OFFSET))(arg, nullptr);
		}

	};
}

