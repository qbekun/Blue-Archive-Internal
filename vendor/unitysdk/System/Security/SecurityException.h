#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_SECURITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91801F0)
#define SYSTEM_SECURITY_SECURITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9180240)
#define SYSTEM_SECURITY_SECURITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9180260)
#define SYSTEM_SECURITY_SECURITYEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9180390)
#define SYSTEM_SECURITY_SECURITYEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91803B0)
#define SYSTEM_SECURITY_SECURITYEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91804C0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityException_TypeDefinitionIndex = 24282;

	class SecurityException : public Il2CppObject
	{
	public:
		::System::String* permissionState; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

