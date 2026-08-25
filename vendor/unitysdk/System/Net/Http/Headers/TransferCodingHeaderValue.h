#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9827340)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98276E0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x9827660)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x98276F0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9827700)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9827760)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9827810)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9827890)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x98278E0)
#define SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9827980)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int TransferCodingHeaderValue_TypeDefinitionIndex = 36717;

	class TransferCodingHeaderValue : public Il2CppObject
	{
	public:
		::System::String* value; // 0x10
		Il2CppObject* parameters; // 0x18

		::System::Void .ctor(::System::Net::Http::Headers::TransferCodingHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::TransferCodingHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Parameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::TransferCodingHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::TransferCodingHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TRANSFERCODINGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

