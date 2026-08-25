#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x918E310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x918E320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_CRYPTOKEYSECURITY_OFFSET UNITYSDK_OFFSET(0x918E410)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_CRYPTOKEYSECURITY_OFFSET UNITYSDK_OFFSET(0x918E420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_KEYPASSWORD_OFFSET UNITYSDK_OFFSET(0x918E430)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_KEYPASSWORD_OFFSET UNITYSDK_OFFSET(0x918E440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_PARENTWINDOWHANDLE_OFFSET UNITYSDK_OFFSET(0x918E4A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_PARENTWINDOWHANDLE_OFFSET UNITYSDK_OFFSET(0x918E4B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E4D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E580)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E5D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E790)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CspParameters_TypeDefinitionIndex = 24329;

	class CspParameters : public Il2CppObject
	{
	public:
		::System::Int32 ProviderType; // 0x10
		::System::String* ProviderName; // 0x18
		::System::String* KeyContainerName; // 0x20
		::System::Int32 KeyNumber; // 0x28
		::System::Int32 m_flags; // 0x2C
		::System::Security::AccessControl::CryptoKeySecurity* m_cryptoKeySecurity; // 0x30
		::System::Security::SecureString* m_keyPassword; // 0x38
		::System::Int32 m_parentWindowHandle; // 0x40

		::System::Security::Cryptography::CspProviderFlags* get_Flags()
		{
			return (return (::System::Security::Cryptography::CspProviderFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void set_Flags(::System::Security::Cryptography::CspProviderFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::CspProviderFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Security::AccessControl::CryptoKeySecurity* get_CryptoKeySecurity()
		{
			return (return (::System::Security::AccessControl::CryptoKeySecurity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_CRYPTOKEYSECURITY_OFFSET))(nullptr);
		}

		::System::Void set_CryptoKeySecurity(::System::Security::AccessControl::CryptoKeySecurity* arg)
		{
			((::System::Void(*)(::System::Security::AccessControl::CryptoKeySecurity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_CRYPTOKEYSECURITY_OFFSET))(arg, nullptr);
		}

		::System::Security::SecureString* get_KeyPassword()
		{
			return (return (::System::Security::SecureString*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_KEYPASSWORD_OFFSET))(nullptr);
		}

		::System::Void set_KeyPassword(::System::Security::SecureString* arg)
		{
			((::System::Void(*)(::System::Security::SecureString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_KEYPASSWORD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParentWindowHandle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_GET_PARENTWINDOWHANDLE_OFFSET))(nullptr);
		}

		::System::Void set_ParentWindowHandle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_SET_PARENTWINDOWHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Security::AccessControl::CryptoKeySecurity* arg, ::System::Security::SecureString* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Security::AccessControl::CryptoKeySecurity*, ::System::Security::SecureString*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Security::AccessControl::CryptoKeySecurity* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Security::AccessControl::CryptoKeySecurity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::Security::Cryptography::CspProviderFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::System::Security::Cryptography::CspProviderFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::CspParameters* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::CspParameters*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

