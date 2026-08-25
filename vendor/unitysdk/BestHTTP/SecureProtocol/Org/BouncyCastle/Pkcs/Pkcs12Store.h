#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { class AsymmetricKeyEntry; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectKeyIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class PrivateKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class EncryptedPrivateKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { class X509CertificateEntry; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_CREATESUBJECTKEYID_OFFSET UNITYSDK_OFFSET(0x987060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9870D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9872B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x987420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x987490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_LOADKEYBAG_OFFSET UNITYSDK_OFFSET(0x989100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_LOADPKCS8SHROUDEDKEYBAG_OFFSET UNITYSDK_OFFSET(0x989D10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_LOAD_OFFSET UNITYSDK_OFFSET(0x987510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETKEY_OFFSET UNITYSDK_OFFSET(0x98A580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_ISCERTIFICATEENTRY_OFFSET UNITYSDK_OFFSET(0x98A7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_ISKEYENTRY_OFFSET UNITYSDK_OFFSET(0x98A870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETALIASESTABLE_OFFSET UNITYSDK_OFFSET(0x98A8F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GET_ALIASES_OFFSET UNITYSDK_OFFSET(0x98B2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_CONTAINSALIAS_OFFSET UNITYSDK_OFFSET(0x98B3B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x98B400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETCERTIFICATEALIAS_OFFSET UNITYSDK_OFFSET(0x98B640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETCERTIFICATECHAIN_OFFSET UNITYSDK_OFFSET(0x98BF50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_SETCERTIFICATEENTRY_OFFSET UNITYSDK_OFFSET(0x98CB80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_SETKEYENTRY_OFFSET UNITYSDK_OFFSET(0x98CDB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_DELETEENTRY_OFFSET UNITYSDK_OFFSET(0x98D070)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_ISENTRYOFTYPE_OFFSET UNITYSDK_OFFSET(0x98D8C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_SIZE_OFFSET UNITYSDK_OFFSET(0x98D9D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x98D9E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_SAVE_OFFSET UNITYSDK_OFFSET(0x98DA90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_CALCULATEPBEMAC_OFFSET UNITYSDK_OFFSET(0x989FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_CRYPTPBEDATA_OFFSET UNITYSDK_OFFSET(0x98A230)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	inline static constexpr unsigned int Pkcs12Store_TypeDefinitionIndex = 21681;

	class Pkcs12Store : public Il2CppObject
	{
	public:
		::System::String* IgnoreUselessPasswordProperty; // 0x0
		IgnoresCaseHashtable* keys; // 0x10
		::System::Collections::IDictionary* localIds; // 0x18
		IgnoresCaseHashtable* certs; // 0x20
		::System::Collections::IDictionary* chainCerts; // 0x28
		::System::Collections::IDictionary* keyCerts; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyAlgorithm; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* keyPrfAlgorithm; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* certAlgorithm; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* certPrfAlgorithm; // 0x50
		::System::Boolean useDerEncoding; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* unmarkedKeyEntry; // 0x60
		::System::Int32 MinIterations; // 0x0
		::System::Int32 SaltSize; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier* CreateSubjectKeyID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_CREATESUBJECTKEYID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadKeyBag(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_LOADKEYBAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadPkcs8ShroudedKeyBag(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_LOADPKCS8SHROUDEDKEYBAG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Load(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_LOAD_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* GetKey(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean IsCertificateEntry(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_ISCERTIFICATEENTRY_OFFSET))(str, nullptr);
		}

		::System::Boolean IsKeyEntry(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_ISKEYENTRY_OFFSET))(str, nullptr);
		}

		::System::Collections::IDictionary* GetAliasesTable()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETALIASESTABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerable* get_Aliases()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GET_ALIASES_OFFSET))(nullptr);
		}

		::System::Boolean ContainsAlias(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_CONTAINSALIAS_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry* GetCertificate(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETCERTIFICATE_OFFSET))(str, nullptr);
		}

		::System::String* GetCertificateAlias(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETCERTIFICATEALIAS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCertificateChain(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GETCERTIFICATECHAIN_OFFSET))(str, nullptr);
		}

		::System::Void SetCertificateEntry(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::X509CertificateEntry*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_SETCERTIFICATEENTRY_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetKeyEntry(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::AsymmetricKeyEntry*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_SETKEYENTRY_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void DeleteEntry(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_DELETEENTRY_OFFSET))(str, nullptr);
		}

		::System::Boolean IsEntryOfType(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_ISENTRYOFTYPE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_SIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Save(::System::IO::Stream* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_SAVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculatePbeMac(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_CALCULATEPBEMAC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CryptPbeData(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKCS_PKCS12STORE_CRYPTPBEDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

