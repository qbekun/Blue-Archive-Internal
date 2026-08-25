#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_MAIL_MAILADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAD870)
#define SYSTEM_NET_MAIL_MAILADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAE310)
#define SYSTEM_NET_MAIL_MAILADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAE330)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9AAE600)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9AAE610)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_SMTPADDRESS_OFFSET UNITYSDK_OFFSET(0x9AAE650)
#define SYSTEM_NET_MAIL_MAILADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9AAE6E0)
#define SYSTEM_NET_MAIL_MAILADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x9AAE800)
#define SYSTEM_NET_MAIL_MAILADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9AAE870)
#define SYSTEM_NET_MAIL_MAILADDRESS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AAE8B0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailAddress_TypeDefinitionIndex = 29935;

	class MailAddress : public Il2CppObject
	{
	public:
		::System::Text::Encoding* _displayNameEncoding; // 0x10
		::System::String* _displayName; // 0x18
		::System::String* _userName; // 0x20
		::System::String* _host; // 0x28
		::System::Net::Mime::EncodedStreamFactory* s_encoderFactory; // 0x0

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_Address()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::String* get_SmtpAddress()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_SMTPADDRESS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

