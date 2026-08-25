#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B0F5B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0F5C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0F610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B0F720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_CLONE_OFFSET UNITYSDK_OFFSET(0x9B0F940)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_CERT_OFFSET UNITYSDK_OFFSET(0x9B0F9A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETRAWCERTDATA_OFFSET UNITYSDK_OFFSET(0x9B0F9C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_HASPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9B0FA10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9B0FA30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9B0FF70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETRSAPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9B10110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETDSAPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x9B101A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x9B0F8E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET UNITYSDK_OFFSET(0x9B10230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_VERIFY_OFFSET UNITYSDK_OFFSET(0x9B10C60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_INTERMEDIATECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9B10E80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_MONOCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9B10E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B10EA0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2ImplMono_TypeDefinitionIndex = 29294;

	class X509Certificate2ImplMono : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts; // 0xB0
		::Mono::Security::X509::X509Certificate* _cert; // 0xB8
		::System::String* empty_error; // 0x0
		::Il2CppArray<::System::Object*>* signedData; // 0x8

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Mono::Security::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_CLONE_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Certificate* get_Cert()
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_CERT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRawCertData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETRAWCERTDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_HasPrivateKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_HASPRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey()
		{
			return (return (::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_PRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_SET_PRIVATEKEY_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::RSA* GetRSAPrivateKey()
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETRSAPRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::DSA* GetDSAPrivateKey()
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GETDSAPRIVATEKEY_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Certificate* ImportPkcs12(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg)
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Security::X509::X509Certificate* ImportPkcs12(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_IMPORTPKCS12_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_VERIFY_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_INTERMEDIATECERTIFICATES_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Certificate* get_MonoCertificate()
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_GET_MONOCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPLMONO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

