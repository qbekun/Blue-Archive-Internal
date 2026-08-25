#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509ExtensionCollection; }
namespace Mono::Security::X509 { class X509Certificate; }

#define MONO_SECURITY_X509_X509CRL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FF890)
#define MONO_SECURITY_X509_X509CRL_PARSE_OFFSET UNITYSDK_OFFSET(0x90FF9A0)
#define MONO_SECURITY_X509_X509CRL_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9100490)
#define MONO_SECURITY_X509_X509CRL_GET_HASH_OFFSET UNITYSDK_OFFSET(0x91004A0)
#define MONO_SECURITY_X509_X509CRL_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x91006C0)
#define MONO_SECURITY_X509_X509CRL_GET_NEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x91006D0)
#define MONO_SECURITY_X509_X509CRL_COMPARE_OFFSET UNITYSDK_OFFSET(0x91006E0)
#define MONO_SECURITY_X509_X509CRL_GETCRLENTRY_OFFSET UNITYSDK_OFFSET(0x9100730)
#define MONO_SECURITY_X509_X509CRL_GETCRLENTRY_OFFSET UNITYSDK_OFFSET(0x91007C0)
#define MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9100A30)
#define MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9100E00)
#define MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9100ED0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Crl_TypeDefinitionIndex = 35748;

	class X509Crl : public Il2CppObject
	{
	public:
		::System::String* issuer; // 0x10
		::System::Byte version; // 0x18
		::System::DateTime* thisUpdate; // 0x20
		::System::DateTime* nextUpdate; // 0x28
		::System::Collections::ArrayList* entries; // 0x30
		::System::String* signatureOID; // 0x38
		::Il2CppArray<::System::Object*>* signature; // 0x40
		::Mono::Security::X509::X509ExtensionCollection* extensions; // 0x48
		::Il2CppArray<::System::Object*>* encoded; // 0x50
		::Il2CppArray<::System::Object*>* hash_value; // 0x58

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Parse(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_PARSE_OFFSET))(arg, nullptr);
		}

		::Mono::Security::X509::X509ExtensionCollection* get_Extensions()
		{
			return (return (::Mono::Security::X509::X509ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_EXTENSIONS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Hash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_HASH_OFFSET))(nullptr);
		}

		::System::String* get_IssuerName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_ISSUERNAME_OFFSET))(nullptr);
		}

		::System::DateTime* get_NextUpdate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GET_NEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		X509CrlEntry* GetCrlEntry(::Mono::Security::X509::X509Certificate* arg)
		{
			return (return (X509CrlEntry*(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GETCRLENTRY_OFFSET))(arg, nullptr);
		}

		X509CrlEntry* GetCrlEntry(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (X509CrlEntry*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_GETCRLENTRY_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::DSA* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::DSA*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::RSA* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CRL_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

	};
}

