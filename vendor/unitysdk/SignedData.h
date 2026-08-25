#pragma once
#include "unitysdk.h"

namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security { class ASN1; }

#define SIGNEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x90EFFA0)
#define SIGNEDDATA_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x90F10D0)
#define SIGNEDDATA_GET_CONTENTINFO_OFFSET UNITYSDK_OFFSET(0x90F10E0)
#define SIGNEDDATA_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x90F1090)
#define SIGNEDDATA_GET_SIGNERINFO_OFFSET UNITYSDK_OFFSET(0x90F10F0)
#define SIGNEDDATA_OIDTONAME_OFFSET UNITYSDK_OFFSET(0x90F0F20)

	inline static constexpr unsigned int SignedData_TypeDefinitionIndex = 35740;

	class SignedData : public Il2CppObject
	{
	public:
		::System::Byte version; // 0x10
		::System::String* hashAlgorithm; // 0x18
		ContentInfo* contentInfo; // 0x20
		::Mono::Security::X509::X509CertificateCollection* certs; // 0x28
		::System::Collections::ArrayList* crls; // 0x30
		SignerInfo* signerInfo; // 0x38
		::System::Boolean mda; // 0x40

		::System::Void .ctor(::Mono::Security::ASN1* arg)
		{
			((::System::Void(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNEDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return (return (::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNEDDATA_GET_CERTIFICATES_OFFSET))(nullptr);
		}

		ContentInfo* get_ContentInfo()
		{
			return (return (ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNEDDATA_GET_CONTENTINFO_OFFSET))(nullptr);
		}

		::System::Void set_HashName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNEDDATA_SET_HASHNAME_OFFSET))(str, nullptr);
		}

		SignerInfo* get_SignerInfo()
		{
			return (return (SignerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIGNEDDATA_GET_SIGNERINFO_OFFSET))(nullptr);
		}

		::System::String* OidToName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SIGNEDDATA_OIDTONAME_OFFSET))(str, nullptr);
		}

	};

