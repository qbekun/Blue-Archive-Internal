#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Cookies { class Cookie; }
namespace BestHTTP::Logger { class LoggingContext; }

#define BESTHTTP_COOKIES_COOKIE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8F5480)
#define BESTHTTP_COOKIES_COOKIE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8F5490)
#define BESTHTTP_COOKIES_COOKIE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8F54A0)
#define BESTHTTP_COOKIES_COOKIE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8F54B0)
#define BESTHTTP_COOKIES_COOKIE_GET_DATE_OFFSET UNITYSDK_OFFSET(0x8F54C0)
#define BESTHTTP_COOKIES_COOKIE_SET_DATE_OFFSET UNITYSDK_OFFSET(0x8F54D0)
#define BESTHTTP_COOKIES_COOKIE_GET_LASTACCESS_OFFSET UNITYSDK_OFFSET(0x8F54E0)
#define BESTHTTP_COOKIES_COOKIE_SET_LASTACCESS_OFFSET UNITYSDK_OFFSET(0x8F54F0)
#define BESTHTTP_COOKIES_COOKIE_GET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x8F5500)
#define BESTHTTP_COOKIES_COOKIE_SET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x8F5510)
#define BESTHTTP_COOKIES_COOKIE_GET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x8F5520)
#define BESTHTTP_COOKIES_COOKIE_SET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x8F5530)
#define BESTHTTP_COOKIES_COOKIE_GET_ISSESSION_OFFSET UNITYSDK_OFFSET(0x8F5540)
#define BESTHTTP_COOKIES_COOKIE_SET_ISSESSION_OFFSET UNITYSDK_OFFSET(0x8F5550)
#define BESTHTTP_COOKIES_COOKIE_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x8F5560)
#define BESTHTTP_COOKIES_COOKIE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x8F5570)
#define BESTHTTP_COOKIES_COOKIE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x8F5580)
#define BESTHTTP_COOKIES_COOKIE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x8F5590)
#define BESTHTTP_COOKIES_COOKIE_GET_ISSECURE_OFFSET UNITYSDK_OFFSET(0x8F55A0)
#define BESTHTTP_COOKIES_COOKIE_SET_ISSECURE_OFFSET UNITYSDK_OFFSET(0x8F55B0)
#define BESTHTTP_COOKIES_COOKIE_GET_ISHTTPONLY_OFFSET UNITYSDK_OFFSET(0x8F55C0)
#define BESTHTTP_COOKIES_COOKIE_SET_ISHTTPONLY_OFFSET UNITYSDK_OFFSET(0x8F55D0)
#define BESTHTTP_COOKIES_COOKIE_GET_SAMESITE_OFFSET UNITYSDK_OFFSET(0x8F55E0)
#define BESTHTTP_COOKIES_COOKIE_SET_SAMESITE_OFFSET UNITYSDK_OFFSET(0x8F55F0)
#define BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F5600)
#define BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F5730)
#define BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F5670)
#define BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F5800)
#define BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F58C0)
#define BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F57A0)
#define BESTHTTP_COOKIES_COOKIE_WILLEXPIREINTHEFUTURE_OFFSET UNITYSDK_OFFSET(0x8F59A0)
#define BESTHTTP_COOKIES_COOKIE_GUESSSIZE_OFFSET UNITYSDK_OFFSET(0x8F5AD0)
#define BESTHTTP_COOKIES_COOKIE_PARSE_OFFSET UNITYSDK_OFFSET(0x8F5B50)
#define BESTHTTP_COOKIES_COOKIE_SAVETO_OFFSET UNITYSDK_OFFSET(0x8F68D0)
#define BESTHTTP_COOKIES_COOKIE_LOADFROM_OFFSET UNITYSDK_OFFSET(0x8F6B00)
#define BESTHTTP_COOKIES_COOKIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8F6CC0)
#define BESTHTTP_COOKIES_COOKIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8F6D00)
#define BESTHTTP_COOKIES_COOKIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8F6D60)
#define BESTHTTP_COOKIES_COOKIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8F6E00)
#define BESTHTTP_COOKIES_COOKIE_READVALUE_OFFSET UNITYSDK_OFFSET(0x8F6E40)
#define BESTHTTP_COOKIES_COOKIE_PARSECOOKIEHEADER_OFFSET UNITYSDK_OFFSET(0x8F6590)
#define BESTHTTP_COOKIES_COOKIE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x8F6ED0)

namespace BestHTTP::Cookies
{
	inline static constexpr unsigned int Cookie_TypeDefinitionIndex = 23414;

	class Cookie : public Il2CppObject
	{
	public:
		::System::Int32 Version; // 0x0
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _Value_k__BackingField; // 0x18
		::System::DateTime* _Date_k__BackingField; // 0x20
		::System::DateTime* _LastAccess_k__BackingField; // 0x28
		::System::DateTime* _Expires_k__BackingField; // 0x30
		::System::Int64 _MaxAge_k__BackingField; // 0x38
		::System::Boolean _IsSession_k__BackingField; // 0x40
		::System::String* _Domain_k__BackingField; // 0x48
		::System::String* _Path_k__BackingField; // 0x50
		::System::Boolean _IsSecure_k__BackingField; // 0x58
		::System::Boolean _IsHttpOnly_k__BackingField; // 0x59
		::System::String* _SameSite_k__BackingField; // 0x60

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_Date()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_DATE_OFFSET))(nullptr);
		}

		::System::Void set_Date(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_DATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastAccess()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_LASTACCESS_OFFSET))(nullptr);
		}

		::System::Void set_LastAccess(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_LASTACCESS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_Expires()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_EXPIRES_OFFSET))(nullptr);
		}

		::System::Void set_Expires(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_EXPIRES_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxAge()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_MAXAGE_OFFSET))(nullptr);
		}

		::System::Void set_MaxAge(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_MAXAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSession()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_ISSESSION_OFFSET))(nullptr);
		}

		::System::Void set_IsSession(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_ISSESSION_OFFSET))(arg, nullptr);
		}

		::System::String* get_Domain()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_DOMAIN_OFFSET))(nullptr);
		}

		::System::Void set_Domain(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_DOMAIN_OFFSET))(str, nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_PATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsSecure()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_ISSECURE_OFFSET))(nullptr);
		}

		::System::Void set_IsSecure(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_ISSECURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsHttpOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_ISHTTPONLY_OFFSET))(nullptr);
		}

		::System::Void set_IsHttpOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_ISHTTPONLY_OFFSET))(arg, nullptr);
		}

		::System::String* get_SameSite()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GET_SAMESITE_OFFSET))(nullptr);
		}

		::System::Void set_SameSite(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SET_SAMESITE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::String* str, ::System::String* str, ::System::DateTime* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::String*, ::System::String*, ::System::DateTime*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::String* str, ::System::String* str, ::System::Int64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::String*, ::System::String*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean WillExpireInTheFuture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_WILLEXPIREINTHEFUTURE_OFFSET))(nullptr);
		}

		::System::UInt32 GuessSize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GUESSSIZE_OFFSET))(nullptr);
		}

		::BestHTTP::Cookies::Cookie* Parse(::System::String* str, ::System::Uri* arg, ::BestHTTP::Logger::LoggingContext* arg)
		{
			return (return (::BestHTTP::Cookies::Cookie*(*)(::System::String*, ::System::Uri*, ::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SaveTo(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_SAVETO_OFFSET))(arg, nullptr);
		}

		::System::Void LoadFrom(::System::IO::BinaryReader* arg)
		{
			((::System::Void(*)(::System::IO::BinaryReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_LOADFROM_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::BestHTTP::Cookies::Cookie* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::Cookies::Cookie*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ReadValue(::System::String* str, int32_t&* arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_READVALUE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* ParseCookieHeader(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_PARSECOOKIEHEADER_OFFSET))(str, nullptr);
		}

		::System::Int32 CompareTo(::BestHTTP::Cookies::Cookie* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Cookies::Cookie*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_COOKIES_COOKIE_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

