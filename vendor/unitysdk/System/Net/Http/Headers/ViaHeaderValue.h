#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9827E30)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x9827E40)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x9827E50)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_PROTOCOLNAME_OFFSET UNITYSDK_OFFSET(0x9827E60)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_PROTOCOLNAME_OFFSET UNITYSDK_OFFSET(0x9827E70)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x9827E80)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x9827E90)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_RECEIVEDBY_OFFSET UNITYSDK_OFFSET(0x9827EA0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_RECEIVEDBY_OFFSET UNITYSDK_OFFSET(0x9827EB0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET UNITYSDK_OFFSET(0x9827EC0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9827ED0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9827FA0)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9828090)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9828130)
#define SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9828610)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int ViaHeaderValue_TypeDefinitionIndex = 36719;

	class ViaHeaderValue : public Il2CppObject
	{
	public:
		::System::String* _Comment_k__BackingField; // 0x10
		::System::String* _ProtocolName_k__BackingField; // 0x18
		::System::String* _ProtocolVersion_k__BackingField; // 0x20
		::System::String* _ReceivedBy_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Comment()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_COMMENT_OFFSET))(nullptr);
		}

		::System::Void set_Comment(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_COMMENT_OFFSET))(str, nullptr);
		}

		::System::String* get_ProtocolName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_PROTOCOLNAME_OFFSET))(nullptr);
		}

		::System::Void set_ProtocolName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_PROTOCOLNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_ProtocolVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_PROTOCOLVERSION_OFFSET))(nullptr);
		}

		::System::Void set_ProtocolVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_PROTOCOLVERSION_OFFSET))(str, nullptr);
		}

		::System::String* get_ReceivedBy()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GET_RECEIVEDBY_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedBy(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SET_RECEIVEDBY_OFFSET))(str, nullptr);
		}

		::System::Object* System.ICloneable.Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_SYSTEM.ICLONEABLE.CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParseElement(::System::Net::Http::Headers::Lexer* arg, ::System::Net::Http::Headers::ViaHeaderValue&* arg, ::System::Net::Http::Headers::Token&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::Http::Headers::Lexer*, ::System::Net::Http::Headers::ViaHeaderValue&*, ::System::Net::Http::Headers::Token&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TRYPARSEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_VIAHEADERVALUE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

