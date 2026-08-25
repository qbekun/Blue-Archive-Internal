#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509Certificate; }

#define MONO_SECURITY_X509_PKCS12_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F1420)
#define MONO_SECURITY_X509_PKCS12_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F1540)
#define MONO_SECURITY_X509_PKCS12_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F2590)
#define MONO_SECURITY_X509_PKCS12_DECODE_OFFSET UNITYSDK_OFFSET(0x90F17F0)
#define MONO_SECURITY_X509_PKCS12_FINALIZE_OFFSET UNITYSDK_OFFSET(0x90F34E0)
#define MONO_SECURITY_X509_PKCS12_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x90F15C0)
#define MONO_SECURITY_X509_PKCS12_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x90F35B0)
#define MONO_SECURITY_X509_PKCS12_SET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x90F35C0)
#define MONO_SECURITY_X509_PKCS12_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x90F35D0)
#define MONO_SECURITY_X509_PKCS12_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x90F40C0)
#define MONO_SECURITY_X509_PKCS12_GET_RNG_OFFSET UNITYSDK_OFFSET(0x90F46A0)
#define MONO_SECURITY_X509_PKCS12_COMPARE_OFFSET UNITYSDK_OFFSET(0x90F2760)
#define MONO_SECURITY_X509_PKCS12_GETSYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x90F46E0)
#define MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET UNITYSDK_OFFSET(0x90F3EE0)
#define MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET UNITYSDK_OFFSET(0x90F3360)
#define MONO_SECURITY_X509_PKCS12_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x90F4F00)
#define MONO_SECURITY_X509_PKCS12_GETEXISTINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x90F5130)
#define MONO_SECURITY_X509_PKCS12_ADDPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x90F5B50)
#define MONO_SECURITY_X509_PKCS12_READSAFEBAG_OFFSET UNITYSDK_OFFSET(0x90F27B0)
#define MONO_SECURITY_X509_PKCS12_PKCS8SHROUDEDKEYBAGSAFEBAG_OFFSET UNITYSDK_OFFSET(0x90F5E10)
#define MONO_SECURITY_X509_PKCS12_CERTIFICATESAFEBAG_OFFSET UNITYSDK_OFFSET(0x90F6EC0)
#define MONO_SECURITY_X509_PKCS12_MAC_OFFSET UNITYSDK_OFFSET(0x90F25D0)
#define MONO_SECURITY_X509_PKCS12_GETBYTES_OFFSET UNITYSDK_OFFSET(0x90F7D80)
#define MONO_SECURITY_X509_PKCS12_ENCRYPTEDCONTENTINFO_OFFSET UNITYSDK_OFFSET(0x90FA8F0)
#define MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x90FA8E0)
#define MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x90FACC0)
#define MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x90FA8D0)
#define MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x90FB0D0)
#define MONO_SECURITY_X509_PKCS12_COMPAREASYMMETRICALGORITHM_OFFSET UNITYSDK_OFFSET(0x90FB9F0)
#define MONO_SECURITY_X509_PKCS12_ADDPKCS8SHROUDEDKEYBAG_OFFSET UNITYSDK_OFFSET(0x90FBA90)
#define MONO_SECURITY_X509_PKCS12_CLONE_OFFSET UNITYSDK_OFFSET(0x90FBF40)
#define MONO_SECURITY_X509_PKCS12_GET_MAXIMUMPASSWORDLENGTH_OFFSET UNITYSDK_OFFSET(0x90FC070)
#define MONO_SECURITY_X509_PKCS12_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90FC0C0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int PKCS12_TypeDefinitionIndex = 35745;

	class PKCS12 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _password; // 0x10
		::System::Collections::ArrayList* _keyBags; // 0x18
		::System::Collections::ArrayList* _secretBags; // 0x20
		::Mono::Security::X509::X509CertificateCollection* _certs; // 0x28
		::System::Boolean _keyBagsChanged; // 0x30
		::System::Boolean _secretBagsChanged; // 0x31
		::System::Boolean _certsChanged; // 0x32
		::System::Int32 _iterations; // 0x34
		::System::Collections::ArrayList* _safeBags; // 0x38
		::System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x40
		::System::Int32 password_max_length; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void Decode(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECODE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void set_Password(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SET_PASSWORD_OFFSET))(str, nullptr);
		}

		::System::Int32 get_IterationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_ITERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_IterationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_SET_ITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* get_Keys()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_KEYS_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509CertificateCollection* get_Certificates()
		{
			return (return (::Mono::Security::X509::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_CERTIFICATES_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RandomNumberGenerator* get_RNG()
		{
			return (return (::System::Security::Cryptography::RandomNumberGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_RNG_OFFSET))(nullptr);
		}

		::System::Boolean Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Security::Cryptography::SymmetricAlgorithm*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETSYMMETRICALGORITHM_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decrypt(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decrypt(EncryptedData* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(EncryptedData*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_DECRYPT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encrypt(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ENCRYPT_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Security::Cryptography::DSAParameters* GetExistingParameters(bool&* arg)
		{
			return (return (::System::Security::Cryptography::DSAParameters*(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETEXISTINGPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void AddPrivateKey(PrivateKeyInfo* arg)
		{
			((::System::Void(*)(PrivateKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDPRIVATEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void ReadSafeBag(::Mono::Security::ASN1* arg)
		{
			((::System::Void(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_READSAFEBAG_OFFSET))(arg, nullptr);
		}

		::Mono::Security::ASN1* Pkcs8ShroudedKeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm* arg, ::System::Collections::IDictionary* arg)
		{
			return (return (::Mono::Security::ASN1*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_PKCS8SHROUDEDKEYBAGSAFEBAG_OFFSET))(arg, arg, nullptr);
		}

		::Mono::Security::ASN1* CertificateSafeBag(::Mono::Security::X509::X509Certificate* arg, ::System::Collections::IDictionary* arg)
		{
			return (return (::Mono::Security::ASN1*(*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_CERTIFICATESAFEBAG_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MAC(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_MAC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GETBYTES_OFFSET))(nullptr);
		}

		ContentInfo* EncryptedContentInfo(::Mono::Security::ASN1* arg, ::System::String* str)
		{
			return (return (ContentInfo*(*)(::Mono::Security::ASN1*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ENCRYPTEDCONTENTINFO_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddCertificate(::Mono::Security::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void AddCertificate(::Mono::Security::X509::X509Certificate* arg, ::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDCERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveCertificate(::Mono::Security::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveCertificate(::Mono::Security::X509::X509Certificate* arg, ::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_REMOVECERTIFICATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CompareAsymmetricAlgorithm(::System::Security::Cryptography::AsymmetricAlgorithm* arg, ::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_COMPAREASYMMETRICALGORITHM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm* arg, ::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_ADDPKCS8SHROUDEDKEYBAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_MaximumPasswordLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_GET_MAXIMUMPASSWORDLENGTH_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_PKCS12_.CCTOR_OFFSET))(nullptr);
		}

	};
}

