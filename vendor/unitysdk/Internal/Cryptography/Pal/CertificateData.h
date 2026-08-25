#pragma once
#include "../../../unitysdk.h"

namespace Internal::Cryptography::Pal { class GeneralNameType; }

#define INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ACA420)
#define INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x9ACACB0)
#define INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_GETSIMPLENAMEINFO_OFFSET UNITYSDK_OFFSET(0x9ACB410)
#define INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_FINDALTNAMEMATCH_OFFSET UNITYSDK_OFFSET(0x9ACB910)
#define INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_READREVERSERDNS_OFFSET UNITYSDK_OFFSET(0x9ACBAF0)

namespace Internal::Cryptography::Pal
{
	inline static constexpr unsigned int CertificateData_TypeDefinitionIndex = 29160;

	class CertificateData : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* RawData; // 0x10
		::Il2CppArray<::System::Object*>* SubjectPublicKeyInfo; // 0x18
		::System::Int32 Version; // 0x20
		::Il2CppArray<::System::Object*>* SerialNumber; // 0x28
		AlgorithmIdentifier* TbsSignature; // 0x30
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Issuer; // 0x40
		::System::DateTime* NotBefore; // 0x48
		::System::DateTime* NotAfter; // 0x50
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Subject; // 0x58
		AlgorithmIdentifier* PublicKeyAlgorithm; // 0x60
		::Il2CppArray<::System::Object*>* PublicKey; // 0x70
		::Il2CppArray<::System::Object*>* IssuerUniqueId; // 0x78
		::Il2CppArray<::System::Object*>* SubjectUniqueId; // 0x80
		Il2CppObject* Extensions; // 0x88
		AlgorithmIdentifier* SignatureAlgorithm; // 0x90
		::Il2CppArray<::System::Object*>* SignatureValue; // 0xA0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Security::Cryptography::X509Certificates::X509NameType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_GETNAMEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetSimpleNameInfo(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* arg)
		{
			return (return (::System::String*(*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_GETSIMPLENAMEINFO_OFFSET))(arg, nullptr);
		}

		::System::String* FindAltNameMatch(::Il2CppArray<::System::Object*>* arg, ::Internal::Cryptography::Pal::GeneralNameType* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::Internal::Cryptography::Pal::GeneralNameType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_FINDALTNAMEMATCH_OFFSET))(arg, arg, str, nullptr);
		}

		Il2CppObject* ReadReverseRdns(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* arg)
		{
			return (return (Il2CppObject*(*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_PAL_CERTIFICATEDATA_READREVERSERDNS_OFFSET))(arg, nullptr);
		}

	};
}

