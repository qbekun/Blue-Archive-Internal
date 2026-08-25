#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9823B30)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9823B40)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9823B50)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9823B60)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x9823B70)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9823B80)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9823B90)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9823C30)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9823CA0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9823D40)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9824000)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ProductHeaderValue_TypeDefinitionIndex = 36710;

	class ProductHeaderValue : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _Version_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_Version(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SET_VERSION_OFFSET))(str, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::ProductHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ProductHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

