#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x981A300)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x981A960)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9822200)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9822210)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9822220)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9822230)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x981A100)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_CREATE_OFFSET UNITYSDK_OFFSET(0x9819700)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9822240)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98222C0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9822340)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPRAGMA_OFFSET UNITYSDK_OFFSET(0x9822400)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x981ADC0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98224A0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9822500)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int NameValueHeaderValue_TypeDefinitionIndex = 36696;

	class NameValueHeaderValue : public Il2CppObject
	{
	public:
		::System::String* value; // 0x10
		::System::String* _Name_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Net::Http::Headers::NameValueHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::NameValueHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Net::Http::Headers::NameValueHeaderValue* Create(::System::String* str, ::System::String* str)
		{
			return (return (::System::Net::Http::Headers::NameValueHeaderValue*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_CREATE_OFFSET))(str, str, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParsePragma(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPRAGMA_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseParameters(::System::Net::Http::Headers::Lexer* arg, Il2CppObject&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, Il2CppObject&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEPARAMETERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::NameValueHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::NameValueHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

