#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x981BF60)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_ISWEAK_OFFSET UNITYSDK_OFFSET(0x981BF70)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_ISWEAK_OFFSET UNITYSDK_OFFSET(0x981BF80)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_TAG_OFFSET UNITYSDK_OFFSET(0x981BF90)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_TAG_OFFSET UNITYSDK_OFFSET(0x981BFA0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x981BFB0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x981BFC0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x981C060)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x981C0E0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x981C1E0)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x981C570)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x981C610)
#define SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x981C660)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int EntityTagHeaderValue_TypeDefinitionIndex = 36674;

	class EntityTagHeaderValue : public Il2CppObject
	{
	public:
		::System::Net::Http::Headers::EntityTagHeaderValue* any; // 0x0
		::System::Boolean _IsWeak_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWeak()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_ISWEAK_OFFSET))(nullptr);
		}

		::System::Void set_IsWeak(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_ISWEAK_OFFSET))(arg, nullptr);
		}

		::System::String* get_Tag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GET_TAG_OFFSET))(nullptr);
		}

		::System::Void set_Tag(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SET_TAG_OFFSET))(str, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::Http::Headers::EntityTagHeaderValue&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::EntityTagHeaderValue&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::EntityTagHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::EntityTagHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_ENTITYTAGHEADERVALUE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

