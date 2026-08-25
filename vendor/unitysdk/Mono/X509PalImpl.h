#pragma once
#include "../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafePasswordHandle; }

#define MONO_X509PALIMPL_IMPORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_X509PALIMPL_IMPORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_X509PALIMPL_IMPORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_X509PALIMPL_PEM_OFFSET UNITYSDK_OFFSET(0x96C8EE0)
#define MONO_X509PALIMPL_CONVERTDATA_OFFSET UNITYSDK_OFFSET(0x96C8FF0)
#define MONO_X509PALIMPL_IMPORTFALLBACK_OFFSET UNITYSDK_OFFSET(0x96C8300)
#define MONO_X509PALIMPL_IMPORTFALLBACK_OFFSET UNITYSDK_OFFSET(0x96C8690)
#define MONO_X509PALIMPL_GET_SUPPORTSLEGACYBASICCONSTRAINTSEXTENSION_OFFSET UNITYSDK_OFFSET(0x96C9110)
#define MONO_X509PALIMPL_GETCERTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x96C9120)
#define MONO_X509PALIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x96C8ED0)
#define MONO_X509PALIMPL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96C9580)

namespace Mono
{
	inline static constexpr unsigned int X509PalImpl_TypeDefinitionIndex = 28992;

	class X509PalImpl : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* signedData; // 0x0

		::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateImpl*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_IMPORT_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_IMPORT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_IMPORT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PEM(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_PEM_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ConvertData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_CONVERTDATA_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* ImportFallback(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_IMPORTFALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* ImportFallback(::Il2CppArray<::System::Object*>* arg, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* arg, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*(*)(::Il2CppArray<::System::Object*>*, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_IMPORTFALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_SupportsLegacyBasicConstraintsExtension()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_GET_SUPPORTSLEGACYBASICCONSTRAINTSEXTENSION_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ContentType* GetCertContentType(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ContentType*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_GETCERTCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_X509PALIMPL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

