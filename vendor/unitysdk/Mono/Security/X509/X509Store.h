#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509Crl; }

#define MONO_SECURITY_X509_X509STORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9105DF0)
#define MONO_SECURITY_X509_X509STORE_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9105E30)
#define MONO_SECURITY_X509_X509STORE_GET_CRLS_OFFSET UNITYSDK_OFFSET(0x9106090)
#define MONO_SECURITY_X509_X509STORE_LOAD_OFFSET UNITYSDK_OFFSET(0x9106320)
#define MONO_SECURITY_X509_X509STORE_LOADCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9106570)
#define MONO_SECURITY_X509_X509STORE_LOADCRL_OFFSET UNITYSDK_OFFSET(0x91065D0)
#define MONO_SECURITY_X509_X509STORE_CHECKSTORE_OFFSET UNITYSDK_OFFSET(0x9106630)
#define MONO_SECURITY_X509_X509STORE_BUILDCERTIFICATESCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9105E70)
#define MONO_SECURITY_X509_X509STORE_BUILDCRLSCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9106130)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Store_TypeDefinitionIndex = 35756;

	class X509Store : public Il2CppObject
	{
	public:
		::System::String* _storePath; // 0x10
		::Mono::Security::X509::X509CertificateCollection* _certificates; // 0x18
		::System::Collections::ArrayList* _crls; // 0x20
		::System::Boolean _crl; // 0x28
		::System::Boolean _newFormat; // 0x29

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return (return (::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GET_CERTIFICATES_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_Crls()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_GET_CRLS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Load(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_LOAD_OFFSET))(str, nullptr);
		}

		::Mono::Security::X509::X509Certificate* LoadCertificate(::System::String* str)
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_LOADCERTIFICATE_OFFSET))(str, nullptr);
		}

		::Mono::Security::X509::X509Crl* LoadCrl(::System::String* str)
		{
			return (return (::Mono::Security::X509::X509Crl*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_LOADCRL_OFFSET))(str, nullptr);
		}

		::System::Boolean CheckStore(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_CHECKSTORE_OFFSET))(str, arg, nullptr);
		}

		::Mono::Security::X509::X509CertificateCollection* BuildCertificatesCollection(::System::String* str)
		{
			return (return (::Mono::Security::X509::X509CertificateCollection*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_BUILDCERTIFICATESCOLLECTION_OFFSET))(str, nullptr);
		}

		::System::Collections::ArrayList* BuildCrlsCollection(::System::String* str)
		{
			return (return (::System::Collections::ArrayList*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORE_BUILDCRLSCOLLECTION_OFFSET))(str, nullptr);
		}

	};
}

