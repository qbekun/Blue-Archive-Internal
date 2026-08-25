#pragma once
#include "unitysdk.h"

#define SECURESTRINGHELPER_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x9A66740)
#define SECURESTRINGHELPER_CREATESECURESTRING_OFFSET UNITYSDK_OFFSET(0x9A668E0)

	inline static constexpr unsigned int SecureStringHelper_TypeDefinitionIndex = 29750;

	class SecureStringHelper : public Il2CppObject
	{
	public:
		::System::String* CreateString(::System::Security::SecureString* arg)
		{
			return (return (::System::String*(*)(::System::Security::SecureString*, ::PVOID))((::PBYTE)hIl2Cpp + SECURESTRINGHELPER_CREATESTRING_OFFSET))(arg, nullptr);
		}

		::System::Security::SecureString* CreateSecureString(::System::String* str)
		{
			return (return (::System::Security::SecureString*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SECURESTRINGHELPER_CREATESECURESTRING_OFFSET))(str, nullptr);
		}

	};

