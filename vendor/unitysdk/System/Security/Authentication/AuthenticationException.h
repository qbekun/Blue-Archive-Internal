#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B03F90)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B03FE0)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B03FF0)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B04000)

namespace System::Security::Authentication
{
	inline static constexpr unsigned int AuthenticationException_TypeDefinitionIndex = 29264;

	class AuthenticationException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

