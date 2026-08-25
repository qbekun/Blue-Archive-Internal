#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Crl; }
namespace Mono::Security::X509 { class X509Extension; }
namespace Mono::Security::X509 { class X509Store; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B15710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B15850)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINELEMENTS_OFFSET UNITYSDK_OFFSET(0x9B15860)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINPOLICY_OFFSET UNITYSDK_OFFSET(0x9B15870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x9B15880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_BUILD_OFFSET UNITYSDK_OFFSET(0x9B15890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_RESET_OFFSET UNITYSDK_OFFSET(0x9B16400)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ROOTS_OFFSET UNITYSDK_OFFSET(0x9B16640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CERTIFICATEAUTHORITIES_OFFSET UNITYSDK_OFFSET(0x9B169C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_LMROOTSTORE_OFFSET UNITYSDK_OFFSET(0x9B16700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_USERROOTSTORE_OFFSET UNITYSDK_OFFSET(0x9B16820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_LMCASTORE_OFFSET UNITYSDK_OFFSET(0x9B16A80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_USERCASTORE_OFFSET UNITYSDK_OFFSET(0x9B16BA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CERTIFICATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x9B17280)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_BUILDCHAINFROM_OFFSET UNITYSDK_OFFSET(0x9B16070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SELECTBESTFROMCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9B17930)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_FINDPARENT_OFFSET UNITYSDK_OFFSET(0x9B17720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISCHAINCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9B17840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISSELFISSUED_OFFSET UNITYSDK_OFFSET(0x9B17CB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_VALIDATECHAIN_OFFSET UNITYSDK_OFFSET(0x9B161C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESS_OFFSET UNITYSDK_OFFSET(0x9B17CF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PREPAREFORNEXTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9B18140)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_WRAPUP_OFFSET UNITYSDK_OFFSET(0x9B18690)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCERTIFICATEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9B18990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISSIGNEDWITH_OFFSET UNITYSDK_OFFSET(0x9B18950)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETSUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9B17C10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9B17B80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9B18C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9B18B10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATIONONCHAIN_OFFSET UNITYSDK_OFFSET(0x9B183D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATION_OFFSET UNITYSDK_OFFSET(0x9B18CD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATION_OFFSET UNITYSDK_OFFSET(0x9B18EB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKCRLS_OFFSET UNITYSDK_OFFSET(0x9B19900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_FINDCRL_OFFSET UNITYSDK_OFFSET(0x9B190A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCRLEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9B19590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCRLENTRYEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9B19250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B19CD0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ChainImplMono_TypeDefinitionIndex = 29304;

	class X509ChainImplMono : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::X509Certificates::StoreLocation* location; // 0x10
		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements; // 0x18
		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy; // 0x20
		::Il2CppArray<::System::Object*>* status; // 0x28
		::Il2CppArray<::System::Object*>* Empty; // 0x0
		::System::Int32 max_path_length; // 0x30
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* working_issuer_name; // 0x38
		::System::Security::Cryptography::AsymmetricAlgorithm* working_public_key; // 0x40
		::System::Security::Cryptography::X509Certificates::X509ChainElement* bce_restriction; // 0x48
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* roots; // 0x50
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* cas; // 0x58
		::System::Security::Cryptography::X509Certificates::X509Store* root_store; // 0x60
		::System::Security::Cryptography::X509Certificates::X509Store* ca_store; // 0x68
		::System::Security::Cryptography::X509Certificates::X509Store* user_root_store; // 0x70
		::System::Security::Cryptography::X509Certificates::X509Store* user_ca_store; // 0x78
		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection; // 0x80

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainElementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINELEMENTS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CHAINPOLICY_OFFSET))(nullptr);
		}

		::System::Void AddStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ADDSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_RESET_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Roots()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_ROOTS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_CertificateAuthorities()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CERTIFICATEAUTHORITIES_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Store* get_LMRootStore()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_LMROOTSTORE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Store* get_UserRootStore()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_USERROOTSTORE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Store* get_LMCAStore()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_LMCASTORE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Store* get_UserCAStore()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_USERCASTORE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_CertificateCollection()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GET_CERTIFICATECOLLECTION_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* BuildChainFrom(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_BUILDCHAINFROM_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* SelectBestFromCollection(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_SELECTBESTFROMCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate2* FindParent(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate2*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_FINDPARENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsChainComplete(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISCHAINCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSelfIssued(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISSELFISSUED_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_VALIDATECHAIN_OFFSET))(arg, nullptr);
		}

		::System::Void Process(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareForNextCertificate(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PREPAREFORNEXTCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void WrapUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_WRAPUP_OFFSET))(nullptr);
		}

		::System::Void ProcessCertificateExtensions(::System::Security::Cryptography::X509Certificates::X509ChainElement* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCERTIFICATEEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSignedWith(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg, ::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_ISSIGNEDWITH_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetSubjectKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::String*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETSUBJECTKEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::String* GetAuthorityKeyIdentifier(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::System::String*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::String* GetAuthorityKeyIdentifier(::Mono::Security::X509::X509Crl* arg)
		{
			return (return (::System::String*(*)(::Mono::Security::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::String* GetAuthorityKeyIdentifier(::Mono::Security::X509::X509Extension* arg)
		{
			return (return (::System::String*(*)(::Mono::Security::X509::X509Extension*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_GETAUTHORITYKEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void CheckRevocationOnChain(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATIONONCHAIN_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags* CheckRevocation(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate2* arg, ::System::Boolean arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKREVOCATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Mono::Security::X509::X509Crl* CheckCrls(::System::String* str, ::System::String* str, ::Mono::Security::X509::X509Store* arg)
		{
			return (return (::Mono::Security::X509::X509Crl*(*)(::System::String*, ::System::String*, ::Mono::Security::X509::X509Store*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_CHECKCRLS_OFFSET))(str, str, arg, nullptr);
		}

		::Mono::Security::X509::X509Crl* FindCrl(::System::Security::Cryptography::X509Certificates::X509Certificate2* arg)
		{
			return (return (::Mono::Security::X509::X509Crl*(*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_FINDCRL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessCrlExtensions(::Mono::Security::X509::X509Crl* arg)
		{
			return (return (::System::Boolean(*)(::Mono::Security::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCRLEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessCrlEntryExtensions(X509CrlEntry* arg)
		{
			return (return (::System::Boolean(*)(X509CrlEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_PROCESSCRLENTRYEXTENSIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CHAINIMPLMONO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

