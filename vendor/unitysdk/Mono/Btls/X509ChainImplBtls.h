#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509StoreCtx; }
namespace Mono::Btls { class MonoBtlsX509Chain; }

#define MONO_BTLS_X509CHAINIMPLBTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC6E70)
#define MONO_BTLS_X509CHAINIMPLBTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC6F00)
#define MONO_BTLS_X509CHAINIMPLBTLS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9AC72A0)
#define MONO_BTLS_X509CHAINIMPLBTLS_GET_STORECTX_OFFSET UNITYSDK_OFFSET(0x9AC72C0)
#define MONO_BTLS_X509CHAINIMPLBTLS_GET_CHAINELEMENTS_OFFSET UNITYSDK_OFFSET(0x9AC72E0)
#define MONO_BTLS_X509CHAINIMPLBTLS_GET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x9AC76A0)
#define MONO_BTLS_X509CHAINIMPLBTLS_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x9AC76B0)
#define MONO_BTLS_X509CHAINIMPLBTLS_BUILD_OFFSET UNITYSDK_OFFSET(0x9AC77E0)
#define MONO_BTLS_X509CHAINIMPLBTLS_RESET_OFFSET UNITYSDK_OFFSET(0x9AC77F0)
#define MONO_BTLS_X509CHAINIMPLBTLS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AC7880)

namespace Mono::Btls
{
	inline static constexpr unsigned int X509ChainImplBtls_TypeDefinitionIndex = 29151;

	class X509ChainImplBtls : public Il2CppObject
	{
	public:
		::Mono::Btls::MonoBtlsX509StoreCtx* storeCtx; // 0x10
		::Mono::Btls::MonoBtlsX509Chain* chain; // 0x18
		::Mono::Btls::MonoBtlsX509Chain* untrustedChain; // 0x20
		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements; // 0x28
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* untrusted; // 0x30
		::Il2CppArray<::System::Object*>* certificates; // 0x38
		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy; // 0x40
		Il2CppObject* chainStatusList; // 0x48

		::System::Void .ctor(::Mono::Btls::MonoBtlsX509Chain* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509Chain*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Btls::MonoBtlsX509StoreCtx* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509StoreCtx*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_GET_ISVALID_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509StoreCtx* get_StoreCtx()
		{
			return (return (::Mono::Btls::MonoBtlsX509StoreCtx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_GET_STORECTX_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_GET_CHAINELEMENTS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_GET_CHAINPOLICY_OFFSET))(nullptr);
		}

		::System::Void AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_RESET_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CHAINIMPLBTLS_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

