#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9816BA0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9821480)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9821870)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GET_CHARSET_OFFSET UNITYSDK_OFFSET(0x9815370)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SET_CHARSET_OFFSET UNITYSDK_OFFSET(0x9816BD0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x98212F0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x98217F0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9821B10)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9821B70)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9821C20)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9821C90)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9821CF0)
#define SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TRYPARSEMEDIATYPE_OFFSET UNITYSDK_OFFSET(0x9821880)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int MediaTypeHeaderValue_TypeDefinitionIndex = 36694;

	class MediaTypeHeaderValue : public Il2CppObject
	{
	public:
		Il2CppObject* parameters; // 0x10
		::System::String* media_type; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Net::Http::Headers::MediaTypeHeaderValue* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::MediaTypeHeaderValue*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_CharSet()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GET_CHARSET_OFFSET))(nullptr);
		}

		::System::Void set_CharSet(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SET_CHARSET_OFFSET))(str, nullptr);
		}

		::System::Void set_MediaType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SET_MEDIATYPE_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Parameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::Http::Headers::MediaTypeHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::MediaTypeHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* TryParseMediaType(::System::Net::Http::Headers::Lexer* arg, ::System::String&* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::Http::Headers::Lexer*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_MEDIATYPEHEADERVALUE_TRYPARSEMEDIATYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

