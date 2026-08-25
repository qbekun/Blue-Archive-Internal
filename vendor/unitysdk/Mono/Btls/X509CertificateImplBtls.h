#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509; }
namespace Mono::Btls { class MonoBtlsKey; }
namespace Mono::Btls { class X509CertificateImplBtls; }
namespace Mono::Btls { class MonoBtlsX509Format; }
namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }

#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC5A70)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC5AC0)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC5BB0)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC5C00)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9AC6870)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_X509_OFFSET UNITYSDK_OFFSET(0x9AC6890)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_NATIVEPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9AC68B0)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_CLONE_OFFSET UNITYSDK_OFFSET(0x9AC68D0)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GETRAWCERTDATA_OFFSET UNITYSDK_OFFSET(0x9AC6930)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_INTERMEDIATECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9AC6970)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AC6980)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_HASPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9AC69D0)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9AC69E0)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9AC6A10)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GETRSAPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9AC6B50)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_GETDSAPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9AC6B80)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_IMPORT_OFFSET UNITYSDK_OFFSET(0x9AC6080)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_IMPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x9AC60E0)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_IMPORTAUTHENTICODE_OFFSET UNITYSDK_OFFSET(0x9AC67A0)
#define MONO_BTLS_X509CERTIFICATEIMPLBTLS_VERIFY_OFFSET UNITYSDK_OFFSET(0x9AC6BD0)

namespace Mono::Btls
{
	inline static constexpr unsigned int X509CertificateImplBtls_TypeDefinitionIndex = 29150;

	class X509CertificateImplBtls : public Il2CppObject
	{
	public:
		::Mono::Btls::MonoBtlsX509* x509; // 0xB0
		::Mono::Btls::MonoBtlsKey* nativePrivateKey; // 0xB8
		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts; // 0xC0

		::System::Void .ctor(::Mono::Btls::MonoBtlsX509* arg)
		{
			((::System::Void(*)(::Mono::Btls::MonoBtlsX509*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Btls::X509CertificateImplBtls* arg)
		{
			((::System::Void(*)(::Mono::Btls::X509CertificateImplBtls*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Mono::Btls::MonoBtlsX509Format* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Mono::Btls::MonoBtlsX509Format*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_ISVALID_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsX509* get_X509()
		{
			return (return (::Mono::Btls::MonoBtlsX509*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_X509_OFFSET))(nullptr);
		}

		::Mono::Btls::MonoBtlsKey* get_NativePrivateKey()
		{
			return (return (::Mono::Btls::MonoBtlsKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_NATIVEPRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_CLONE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRawCertData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GETRAWCERTDATA_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_INTERMEDIATECERTIFICATES_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasPrivateKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_HASPRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey()
		{
			return (return (::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GET_PRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_SET_PRIVATEKEY_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* GetRSAPrivateKey()
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GETRSAPRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::DSA* GetDSAPrivateKey()
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_GETDSAPRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Void Import(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_IMPORT_OFFSET))(arg, nullptr);
		}

		::System::Void ImportPkcs12(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_IMPORTPKCS12_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ImportAuthenticode(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_IMPORTAUTHENTICODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_X509CERTIFICATEIMPLBTLS_VERIFY_OFFSET))(arg, nullptr);
		}

	};
}

