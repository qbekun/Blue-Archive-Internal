#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509ExtensionCollection; }

#define MONO_SECURITY_X509_X509CERTIFICATE_PARSE_OFFSET UNITYSDK_OFFSET(0x9101070)
#define MONO_SECURITY_X509_X509CERTIFICATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90F0620)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x9101ED0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_DSA_OFFSET UNITYSDK_OFFSET(0x90F5680)
#define MONO_SECURITY_X509_X509CERTIFICATE_SET_DSA_OFFSET UNITYSDK_OFFSET(0x9101F60)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9101FB0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_HASH_OFFSET UNITYSDK_OFFSET(0x9101FC0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x91022A0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHM_OFFSET UNITYSDK_OFFSET(0x91022B0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x91022C0)
#define MONO_SECURITY_X509_X509CERTIFICATE_SET_KEYALGORITHMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x9102340)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_PUBLICKEY_OFFSET UNITYSDK_OFFSET(0x9102350)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_RSA_OFFSET UNITYSDK_OFFSET(0x91023D0)
#define MONO_SECURITY_X509_X509CERTIFICATE_SET_RSA_OFFSET UNITYSDK_OFFSET(0x91025B0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x9102600)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x9102680)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9102700)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_SUBJECTNAME_OFFSET UNITYSDK_OFFSET(0x9102AF0)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDFROM_OFFSET UNITYSDK_OFFSET(0x9102B00)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDUNTIL_OFFSET UNITYSDK_OFFSET(0x9102B10)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9102B20)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_ISCURRENT_OFFSET UNITYSDK_OFFSET(0x9102B30)
#define MONO_SECURITY_X509_X509CERTIFICATE_WASCURRENT_OFFSET UNITYSDK_OFFSET(0x9102B80)
#define MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9102C30)
#define MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9102CF0)
#define MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9102E00)
#define MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSELFSIGNED_OFFSET UNITYSDK_OFFSET(0x9102F80)
#define MONO_SECURITY_X509_X509CERTIFICATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91030C0)
#define MONO_SECURITY_X509_X509CERTIFICATE_PEM_OFFSET UNITYSDK_OFFSET(0x9101DC0)
#define MONO_SECURITY_X509_X509CERTIFICATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9103110)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Certificate_TypeDefinitionIndex = 35749;

	class X509Certificate : public Il2CppObject
	{
	public:
		::Mono::Security::ASN1* decoder; // 0x10
		::Il2CppArray<::System::Object*>* m_encodedcert; // 0x18
		::System::DateTime* m_from; // 0x20
		::System::DateTime* m_until; // 0x28
		::Mono::Security::ASN1* issuer; // 0x30
		::System::String* m_issuername; // 0x38
		::System::String* m_keyalgo; // 0x40
		::Il2CppArray<::System::Object*>* m_keyalgoparams; // 0x48
		::Mono::Security::ASN1* subject; // 0x50
		::System::String* m_subject; // 0x58
		::Il2CppArray<::System::Object*>* m_publickey; // 0x60
		::Il2CppArray<::System::Object*>* signature; // 0x68
		::System::String* m_signaturealgo; // 0x70
		::Il2CppArray<::System::Object*>* m_signaturealgoparams; // 0x78
		::Il2CppArray<::System::Object*>* certhash; // 0x80
		::System::Security::Cryptography::RSA* _rsa; // 0x88
		::System::Security::Cryptography::DSA* _dsa; // 0x90
		::System::Int32 version; // 0x98
		::Il2CppArray<::System::Object*>* serialnumber; // 0xA0
		::Il2CppArray<::System::Object*>* issuerUniqueID; // 0xA8
		::Il2CppArray<::System::Object*>* subjectUniqueID; // 0xB0
		::Mono::Security::X509::X509ExtensionCollection* extensions; // 0xB8
		::System::String* encoding_error; // 0x0

		::System::Void Parse(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetUnsignedBigInteger(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GETUNSIGNEDBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::DSA* get_DSA()
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_DSA_OFFSET))(nullptr);
		}

		::System::Void set_DSA(::System::Security::Cryptography::DSA* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::DSA*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_SET_DSA_OFFSET))(arg, nullptr);
		}

		::Mono::Security::X509::X509ExtensionCollection* get_Extensions()
		{
			return (return (::Mono::Security::X509::X509ExtensionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_EXTENSIONS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Hash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_HASH_OFFSET))(nullptr);
		}

		::System::String* get_IssuerName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSUERNAME_OFFSET))(nullptr);
		}

		::System::String* get_KeyAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_KeyAlgorithmParameters()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_KEYALGORITHMPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_KeyAlgorithmParameters(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_SET_KEYALGORITHMPARAMETERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PublicKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_PUBLICKEY_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::RSA* get_RSA()
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_RSA_OFFSET))(nullptr);
		}

		::System::Void set_RSA(::System::Security::Cryptography::RSA* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::RSA*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_SET_RSA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RawData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_RAWDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SerialNumber()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Signature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SIGNATURE_OFFSET))(nullptr);
		}

		::System::String* get_SubjectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_SUBJECTNAME_OFFSET))(nullptr);
		}

		::System::DateTime* get_ValidFrom()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDFROM_OFFSET))(nullptr);
		}

		::System::DateTime* get_ValidUntil()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_VALIDUNTIL_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCurrent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_ISCURRENT_OFFSET))(nullptr);
		}

		::System::Boolean WasCurrent(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_WASCURRENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::DSA* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::DSA*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::RSA* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_VERIFYSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSelfSigned()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GET_ISSELFSIGNED_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PEM(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_PEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CERTIFICATE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

