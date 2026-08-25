#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Authentication { class AuthenticationTypes; }

#define BESTHTTP_AUTHENTICATION_CREDENTIALS_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x927F50)
#define BESTHTTP_AUTHENTICATION_CREDENTIALS_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x927F60)
#define BESTHTTP_AUTHENTICATION_CREDENTIALS_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x927F70)
#define BESTHTTP_AUTHENTICATION_CREDENTIALS_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x927F80)
#define BESTHTTP_AUTHENTICATION_CREDENTIALS_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x927F90)
#define BESTHTTP_AUTHENTICATION_CREDENTIALS_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x927FA0)
#define BESTHTTP_AUTHENTICATION_CREDENTIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x927FB0)
#define BESTHTTP_AUTHENTICATION_CREDENTIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x928000)

namespace BestHTTP::Authentication
{
	inline static constexpr unsigned int Credentials_TypeDefinitionIndex = 23477;

	class Credentials : public Il2CppObject
	{
	public:
		::BestHTTP::Authentication::AuthenticationTypes* _Type_k__BackingField; // 0x10
		::System::String* _UserName_k__BackingField; // 0x18
		::System::String* _Password_k__BackingField; // 0x20

		::BestHTTP::Authentication::AuthenticationTypes* get_Type()
		{
			return (return (::BestHTTP::Authentication::AuthenticationTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_CREDENTIALS_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::BestHTTP::Authentication::AuthenticationTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::Authentication::AuthenticationTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_CREDENTIALS_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_UserName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_CREDENTIALS_GET_USERNAME_OFFSET))(nullptr);
		}

		::System::Void set_UserName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_CREDENTIALS_SET_USERNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Password()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_CREDENTIALS_GET_PASSWORD_OFFSET))(nullptr);
		}

		::System::Void set_Password(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_CREDENTIALS_SET_PASSWORD_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_CREDENTIALS_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::BestHTTP::Authentication::AuthenticationTypes* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::Authentication::AuthenticationTypes*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_AUTHENTICATION_CREDENTIALS_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

	};
}

