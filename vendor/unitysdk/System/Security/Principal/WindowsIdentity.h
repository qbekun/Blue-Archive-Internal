#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BDF50)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BE180)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91BE1D0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x91BE210)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_IMPERSONATE_OFFSET UNITYSDK_OFFSET(0x91BE300)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x91BE3F0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x91BE400)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x91BE490)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91BE7C0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x91BE010)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x91BE2F0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET UNITYSDK_OFFSET(0x91BE480)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91BE900)

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsIdentity_TypeDefinitionIndex = 24416;

	class WindowsIdentity : public Il2CppObject
	{
	public:
		::System::Int32 _token; // 0x78
		::System::String* _type; // 0x80
		::System::Security::Principal::WindowsAccountType* _account; // 0x88
		::System::Boolean _authenticated; // 0x8C
		::System::String* _name; // 0x90
		::System::Runtime::Serialization::SerializationInfo* _info; // 0x98
		::System::Int32 invalidWindows; // 0x0

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::Security::Principal::WindowsAccountType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Security::Principal::WindowsAccountType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_DISPOSE_OFFSET))(nullptr);
		}

		::System::Security::Principal::WindowsIdentity* GetCurrent()
		{
			return (return (::System::Security::Principal::WindowsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENT_OFFSET))(nullptr);
		}

		::System::Security::Principal::WindowsImpersonationContext* Impersonate()
		{
			return (return (::System::Security::Principal::WindowsImpersonationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_IMPERSONATE_OFFSET))(nullptr);
		}

		::System::String* get_AuthenticationType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetToken(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCurrentToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET))(nullptr);
		}

		::System::String* GetTokenName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

