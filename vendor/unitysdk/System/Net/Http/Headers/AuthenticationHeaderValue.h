#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9816CD0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x9816CE0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x9816CF0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x9816D00)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x9816D10)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9816D20)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9816D30)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9816DD0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9816E50)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x98171C0)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9816F60)
#define SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98176E0)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int AuthenticationHeaderValue_TypeDefinitionIndex = 36667;

	class AuthenticationHeaderValue : public Il2CppObject
	{
	public:
		::System::String* _Parameter_k__BackingField; // 0x10
		::System::String* _Scheme_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Parameter()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_PARAMETER_OFFSET))(str, nullptr);
		}

		::System::String* get_Scheme()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GET_SCHEME_OFFSET))(nullptr);
		}

		::System::Void set_Scheme(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SET_SCHEME_OFFSET))(str, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::Http::Headers::AuthenticationHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::AuthenticationHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::AuthenticationHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::AuthenticationHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_AUTHENTICATIONHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

