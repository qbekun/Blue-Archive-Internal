#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98227F0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9822B30)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x9822AB0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9822B40)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9822BA0)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9822C40)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9822C90)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9822D90)
#define SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9822E30)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int NameValueWithParametersHeaderValue_TypeDefinitionIndex = 36697;

	class NameValueWithParametersHeaderValue : public Il2CppObject
	{
	public:
		Il2CppObject* parameters; // 0x20

		::System::Void .ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::NameValueWithParametersHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Parameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::NameValueWithParametersHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::NameValueWithParametersHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_NAMEVALUEWITHPARAMETERSHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

