#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9824050)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98240D0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x98240E0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x98240F0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x9824100)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_PRODUCT_OFFSET UNITYSDK_OFFSET(0x9824110)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9824120)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9824130)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98241D0)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9824210)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9824420)
#define SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9824770)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ProductInfoHeaderValue_TypeDefinitionIndex = 36711;

	class ProductInfoHeaderValue : public Il2CppObject
	{
	public:
		::System::String* _Comment_k__BackingField; // 0x10
		::System::Net::Http::Headers::ProductHeaderValue* _Product_k__BackingField; // 0x18

		::System::Void .ctor(::System::Net::Http::Headers::ProductHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::ProductHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Comment()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_COMMENT_OFFSET))(str, nullptr);
		}

		::System::Net::Http::Headers::ProductHeaderValue* get_Product()
		{
			return (return (::System::Net::Http::Headers::ProductHeaderValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GET_PRODUCT_OFFSET))(nullptr);
		}

		::System::Void set_Product(::System::Net::Http::Headers::ProductHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::ProductHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SET_PRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::ProductInfoHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ProductInfoHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_PRODUCTINFOHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

