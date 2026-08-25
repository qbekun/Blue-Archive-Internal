#pragma once
#include "../../../../unitysdk.h"

namespace Mono { class ISystemCertificateProvider; }
namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_GET_CERTIFICATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x91BDE60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x91BC440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x91BC330)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x91BD690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_THROWIFCONTEXTINVALID_OFFSET UNITYSDK_OFFSET(0x91BDA30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_GETINVALIDCONTEXTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x91BDAC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_OFFSET UNITYSDK_OFFSET(0x91BBD50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_OFFSET UNITYSDK_OFFSET(0x91BC1C0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Helper_TypeDefinitionIndex = 24411;

	class X509Helper : public Il2CppObject
	{
	public:
		::Mono::ISystemCertificateProvider* get_CertificateProvider()
		{
			return (return (::Mono::ISystemCertificateProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_GET_CERTIFICATEPROVIDER_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_INITFROMCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_THROWIFCONTEXTINVALID_OFFSET))(arg, nullptr);
		}

		::System::Exception* GetInvalidContextException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_GETINVALIDCONTEXTEXCEPTION_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509HELPER_IMPORT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

