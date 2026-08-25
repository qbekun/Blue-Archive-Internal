#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class MonoRemoteCertificateValidationCallback; }
namespace Mono::Security::Interface { class MonoLocalCertificateSelectionCallback; }
namespace Mono::Security::Interface { class ICertificateValidator; }
namespace Mono::Security::Interface { class MonoTlsSettings; }

#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x910C660)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x910C670)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CLIENTCERTIFICATESELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x910C680)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CLIENTCERTIFICATESELECTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x910C690)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_USESERVICEPOINTMANAGERCALLBACK_OFFSET UNITYSDK_OFFSET(0x910C6A0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_USESERVICEPOINTMANAGERCALLBACK_OFFSET UNITYSDK_OFFSET(0x910C6B0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CALLBACKNEEDSCERTIFICATECHAIN_OFFSET UNITYSDK_OFFSET(0x910C6C0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATEVALIDATIONTIME_OFFSET UNITYSDK_OFFSET(0x910C6D0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CERTIFICATEVALIDATIONTIME_OFFSET UNITYSDK_OFFSET(0x910C6E0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x910C6F0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x910C700)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_USERSETTINGS_OFFSET UNITYSDK_OFFSET(0x910C710)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_USERSETTINGS_OFFSET UNITYSDK_OFFSET(0x910C720)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATESEARCHPATHS_OFFSET UNITYSDK_OFFSET(0x910C730)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CERTIFICATESEARCHPATHS_OFFSET UNITYSDK_OFFSET(0x910C740)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_SENDCLOSENOTIFY_OFFSET UNITYSDK_OFFSET(0x910C750)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_SENDCLOSENOTIFY_OFFSET UNITYSDK_OFFSET(0x910C760)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CLIENTCERTIFICATEISSUERS_OFFSET UNITYSDK_OFFSET(0x910C770)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CLIENTCERTIFICATEISSUERS_OFFSET UNITYSDK_OFFSET(0x910C780)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_DISALLOWUNAUTHENTICATEDCERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x910C790)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_DISALLOWUNAUTHENTICATEDCERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x910C7A0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_ENABLEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x910C7B0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_ENABLEDPROTOCOLS_OFFSET UNITYSDK_OFFSET(0x910C7C0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_ENABLEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x910C7D0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_ENABLEDCIPHERS_OFFSET UNITYSDK_OFFSET(0x910C7E0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x910C7F0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x910C800)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_COPYDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x910C8A0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x910C9E0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_CLONEWITHVALIDATOR_OFFSET UNITYSDK_OFFSET(0x910C9F0)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x910C980)
#define MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x910CA70)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsSettings_TypeDefinitionIndex = 35800;

	class MonoTlsSettings : public Il2CppObject
	{
	public:
		::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* _RemoteCertificateValidationCallback_k__BackingField; // 0x10
		::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* _ClientCertificateSelectionCallback_k__BackingField; // 0x18
		Il2CppObject* _CertificateValidationTime_k__BackingField; // 0x20
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _TrustAnchors_k__BackingField; // 0x30
		::System::Object* _UserSettings_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _CertificateSearchPaths_k__BackingField; // 0x40
		::System::Boolean _SendCloseNotify_k__BackingField; // 0x48
		::Il2CppArray<::System::Object*>* _ClientCertificateIssuers_k__BackingField; // 0x50
		::System::Boolean _DisallowUnauthenticatedCertificateRequest_k__BackingField; // 0x58
		Il2CppObject* _EnabledProtocols_k__BackingField; // 0x5C
		::Il2CppArray<::System::Object*>* _EnabledCiphers_k__BackingField; // 0x68
		::System::Boolean cloned; // 0x70
		::System::Boolean checkCertName; // 0x71
		::System::Boolean checkCertRevocationStatus; // 0x72
		Il2CppObject* useServicePointManagerCallback; // 0x73
		::System::Boolean skipSystemValidators; // 0x75
		::System::Boolean callbackNeedsChain; // 0x76
		::Mono::Security::Interface::ICertificateValidator* certificateValidator; // 0x78
		::Mono::Security::Interface::MonoTlsSettings* defaultSettings; // 0x0

		::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* get_RemoteCertificateValidationCallback()
		{
			return (return (::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_RemoteCertificateValidationCallback(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_REMOTECERTIFICATEVALIDATIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* get_ClientCertificateSelectionCallback()
		{
			return (return (::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CLIENTCERTIFICATESELECTIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_ClientCertificateSelectionCallback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CLIENTCERTIFICATESELECTIONCALLBACK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_UseServicePointManagerCallback()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_USESERVICEPOINTMANAGERCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_UseServicePointManagerCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_USESERVICEPOINTMANAGERCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CallbackNeedsCertificateChain()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CALLBACKNEEDSCERTIFICATECHAIN_OFFSET))(nullptr);
		}

		Il2CppObject* get_CertificateValidationTime()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATEVALIDATIONTIME_OFFSET))(nullptr);
		}

		::System::Void set_CertificateValidationTime(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CERTIFICATEVALIDATIONTIME_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_TrustAnchors()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_TRUSTANCHORS_OFFSET))(nullptr);
		}

		::System::Void set_TrustAnchors(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_TRUSTANCHORS_OFFSET))(arg, nullptr);
		}

		::System::Object* get_UserSettings()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_USERSETTINGS_OFFSET))(nullptr);
		}

		::System::Void set_UserSettings(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_USERSETTINGS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CertificateSearchPaths()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATESEARCHPATHS_OFFSET))(nullptr);
		}

		::System::Void set_CertificateSearchPaths(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CERTIFICATESEARCHPATHS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SendCloseNotify()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_SENDCLOSENOTIFY_OFFSET))(nullptr);
		}

		::System::Void set_SendCloseNotify(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_SENDCLOSENOTIFY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ClientCertificateIssuers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CLIENTCERTIFICATEISSUERS_OFFSET))(nullptr);
		}

		::System::Void set_ClientCertificateIssuers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_CLIENTCERTIFICATEISSUERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisallowUnauthenticatedCertificateRequest()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_DISALLOWUNAUTHENTICATEDCERTIFICATEREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_DisallowUnauthenticatedCertificateRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_DISALLOWUNAUTHENTICATEDCERTIFICATEREQUEST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EnabledProtocols()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_ENABLEDPROTOCOLS_OFFSET))(nullptr);
		}

		::System::Void set_EnabledProtocols(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_ENABLEDPROTOCOLS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EnabledCiphers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_ENABLEDCIPHERS_OFFSET))(nullptr);
		}

		::System::Void set_EnabledCiphers(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_SET_ENABLEDCIPHERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_DefaultSettings()
		{
			return (return (::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_DEFAULTSETTINGS_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::MonoTlsSettings* CopyDefaultSettings()
		{
			return (return (::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_COPYDEFAULTSETTINGS_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::ICertificateValidator* get_CertificateValidator()
		{
			return (return (::Mono::Security::Interface::ICertificateValidator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_GET_CERTIFICATEVALIDATOR_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::MonoTlsSettings* CloneWithValidator(::Mono::Security::Interface::ICertificateValidator* arg)
		{
			return (return (::Mono::Security::Interface::MonoTlsSettings*(*)(::Mono::Security::Interface::ICertificateValidator*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_CLONEWITHVALIDATOR_OFFSET))(arg, nullptr);
		}

		::Mono::Security::Interface::MonoTlsSettings* Clone()
		{
			return (return (::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			((::System::Void(*)(::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSSETTINGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

