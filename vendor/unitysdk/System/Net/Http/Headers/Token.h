#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_TOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9817680)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x9820750)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x9820760)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x9820770)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x9820780)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_KIND_OFFSET UNITYSDK_OFFSET(0x9820790)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x98207A0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x98207B0)
#define SYSTEM_NET_HTTP_HEADERS_TOKEN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9820810)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int Token_TypeDefinitionIndex = 36691;

	class Token : public Il2CppObject
	{
	public:
		::System::Net::Http::Headers::Token* Empty; // 0x0
		Type* type; // 0x10
		::System::Int32 _StartPosition_k__BackingField; // 0x14
		::System::Int32 _EndPosition_k__BackingField; // 0x18

		::System::Void .ctor(Type* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Type*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_StartPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_STARTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_StartPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_STARTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EndPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_ENDPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_EndPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_SET_ENDPOSITION_OFFSET))(arg, nullptr);
		}

		Type* get_Kind()
		{
			return (return (Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_GET_KIND_OFFSET))(nullptr);
		}

		Type* op_Implicit(::System::Net::Http::Headers::Token* arg)
		{
			return (return (Type*(*)(::System::Net::Http::Headers::Token*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_TOKEN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

