#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_COOKIETOKENIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A56660)
#define SYSTEM_NET_COOKIETOKENIZER_GET_ENDOFCOOKIE_OFFSET UNITYSDK_OFFSET(0x9A566A0)
#define SYSTEM_NET_COOKIETOKENIZER_SET_ENDOFCOOKIE_OFFSET UNITYSDK_OFFSET(0x9A566B0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x9A566C0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9A566D0)
#define SYSTEM_NET_COOKIETOKENIZER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9A566E0)
#define SYSTEM_NET_COOKIETOKENIZER_GET_QUOTED_OFFSET UNITYSDK_OFFSET(0x9A566F0)
#define SYSTEM_NET_COOKIETOKENIZER_SET_QUOTED_OFFSET UNITYSDK_OFFSET(0x9A56700)
#define SYSTEM_NET_COOKIETOKENIZER_GET_TOKEN_OFFSET UNITYSDK_OFFSET(0x9A56710)
#define SYSTEM_NET_COOKIETOKENIZER_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x9A56720)
#define SYSTEM_NET_COOKIETOKENIZER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9A56730)
#define SYSTEM_NET_COOKIETOKENIZER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9A56740)
#define SYSTEM_NET_COOKIETOKENIZER_EXTRACT_OFFSET UNITYSDK_OFFSET(0x9A56750)
#define SYSTEM_NET_COOKIETOKENIZER_FINDNEXT_OFFSET UNITYSDK_OFFSET(0x9A567D0)
#define SYSTEM_NET_COOKIETOKENIZER_NEXT_OFFSET UNITYSDK_OFFSET(0x9A56AC0)
#define SYSTEM_NET_COOKIETOKENIZER_RESET_OFFSET UNITYSDK_OFFSET(0x9A56DA0)
#define SYSTEM_NET_COOKIETOKENIZER_TOKENFROMNAME_OFFSET UNITYSDK_OFFSET(0x9A56E20)
#define SYSTEM_NET_COOKIETOKENIZER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A57070)

namespace System::Net
{
	inline static constexpr unsigned int CookieTokenizer_TypeDefinitionIndex = 29730;

	class CookieTokenizer : public Il2CppObject
	{
	public:
		::System::Boolean m_eofCookie; // 0x10
		::System::Int32 m_index; // 0x14
		::System::Int32 m_length; // 0x18
		::System::String* m_name; // 0x20
		::System::Boolean m_quoted; // 0x28
		::System::Int32 m_start; // 0x2C
		::System::Net::CookieToken* m_token; // 0x30
		::System::Int32 m_tokenLength; // 0x34
		::System::String* m_tokenStream; // 0x38
		::System::String* m_value; // 0x40
		::Il2CppArray<::System::Object*>* RecognizedAttributes; // 0x0
		::Il2CppArray<::System::Object*>* RecognizedServerAttributes; // 0x8

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean get_EndOfCookie()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_ENDOFCOOKIE_OFFSET))(nullptr);
		}

		::System::Void set_EndOfCookie(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_ENDOFCOOKIE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Eof()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_EOF_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_Quoted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_QUOTED_OFFSET))(nullptr);
		}

		::System::Void set_Quoted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_QUOTED_OFFSET))(arg, nullptr);
		}

		::System::Net::CookieToken* get_Token()
		{
			return (return (::System::Net::CookieToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_TOKEN_OFFSET))(nullptr);
		}

		::System::Void set_Token(::System::Net::CookieToken* arg)
		{
			((::System::Void(*)(::System::Net::CookieToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_TOKEN_OFFSET))(arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::String* Extract()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_EXTRACT_OFFSET))(nullptr);
		}

		::System::Net::CookieToken* FindNext(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Net::CookieToken*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_FINDNEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::CookieToken* Next(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Net::CookieToken*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_NEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_RESET_OFFSET))(nullptr);
		}

		::System::Net::CookieToken* TokenFromName(::System::Boolean arg)
		{
			return (return (::System::Net::CookieToken*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_TOKENFROMNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIETOKENIZER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

