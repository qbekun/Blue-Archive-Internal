#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509Certificate; }
namespace Mono::Security::X509 { class X509Chain; }

#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9115FD0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91160C0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_SET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x91160F0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_SIGNINGCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x9116680)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_CHECKSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9116330)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_COMPAREISSUERSERIAL_OFFSET UNITYSDK_OFFSET(0x9117210)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9116690)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_VERIFYCOUNTERSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9117300)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_RESET_OFFSET UNITYSDK_OFFSET(0x9116220)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int AuthenticodeDeformatter_TypeDefinitionIndex = 35816;

	class AuthenticodeDeformatter : public <>c
	{
	public:
		::System::String* filename; // 0x40
		::Il2CppArray<::System::Object*>* rawdata; // 0x48
		::Il2CppArray<::System::Object*>* hash; // 0x50
		::Mono::Security::X509::X509CertificateCollection* coll; // 0x58
		::Mono::Security::ASN1* signedHash; // 0x60
		::System::DateTime* timestamp; // 0x68
		::Mono::Security::X509::X509Certificate* signingCertificate; // 0x70
		::System::Int32 reason; // 0x78
		::System::Boolean trustedRoot; // 0x7C
		::System::Boolean trustedTimestampRoot; // 0x7D
		::Il2CppArray<::System::Object*>* entry; // 0x80
		::Mono::Security::X509::X509Chain* signerChain; // 0x88
		::Mono::Security::X509::X509Chain* timestampChain; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RawData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_SET_RAWDATA_OFFSET))(arg, nullptr);
		}

		::Mono::Security::X509::X509Certificate* get_SigningCertificate()
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_GET_SIGNINGCERTIFICATE_OFFSET))(nullptr);
		}

		::System::Boolean CheckSignature()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_CHECKSIGNATURE_OFFSET))(nullptr);
		}

		::System::Boolean CompareIssuerSerial(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_COMPAREISSUERSERIAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean VerifySignature(SignedData* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::HashAlgorithm* arg)
		{
			return (return (::System::Boolean(*)(SignedData*, ::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::HashAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_VERIFYSIGNATURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean VerifyCounterSignature(SignerInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(SignerInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_VERIFYCOUNTERSIGNATURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEDEFORMATTER_RESET_OFFSET))(nullptr);
		}

	};
}

