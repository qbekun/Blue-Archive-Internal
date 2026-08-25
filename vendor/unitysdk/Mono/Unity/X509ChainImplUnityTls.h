#pragma once
#include "../../unitysdk.h"

#define MONO_UNITY_X509CHAINIMPLUNITYTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96CEAE0)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D0340)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x96D0690)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_GET_NATIVECERTIFICATECHAIN_OFFSET UNITYSDK_OFFSET(0x96D06C0)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_GET_CHAINELEMENTS_OFFSET UNITYSDK_OFFSET(0x96D06D0)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x96D09E0)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_GET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x96D0B10)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_BUILD_OFFSET UNITYSDK_OFFSET(0x96D0B20)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_RESET_OFFSET UNITYSDK_OFFSET(0x96D0B30)
#define MONO_UNITY_X509CHAINIMPLUNITYTLS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96D0BC0)

namespace Mono::Unity
{
	inline static constexpr unsigned int X509ChainImplUnityTls_TypeDefinitionIndex = 29052;

	class X509ChainImplUnityTls : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements; // 0x10
		::System::Object** ownedList; // 0x18
		unitytls_x509list_ref* nativeCertificateChain; // 0x20
		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy; // 0x28
		Il2CppObject* chainStatusList; // 0x30
		::System::Boolean reverseOrder; // 0x38

		::System::Void .ctor(unitytls_x509list_ref* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(unitytls_x509list_ref*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object** arg, ::System::Object** arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_GET_ISVALID_OFFSET))(nullptr);
		}

		unitytls_x509list_ref* get_NativeCertificateChain()
		{
			return (return (unitytls_x509list_ref*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_GET_NATIVECERTIFICATECHAIN_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_GET_CHAINELEMENTS_OFFSET))(nullptr);
		}

		::System::Void AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_GET_CHAINPOLICY_OFFSET))(nullptr);
		}

		::System::Boolean Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_RESET_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_X509CHAINIMPLUNITYTLS_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

