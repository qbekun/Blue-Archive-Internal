#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509ExtensionsGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class V2TbsCertListGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Crl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISignatureFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class TbsCertificateList; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8BE800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8BE8B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_SETISSUERDN_OFFSET UNITYSDK_OFFSET(0x8BE920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_SETTHISUPDATE_OFFSET UNITYSDK_OFFSET(0x8BE950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_SETNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x8BE9D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDCRLENTRY_OFFSET UNITYSDK_OFFSET(0x8BEA50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDCRLENTRY_OFFSET UNITYSDK_OFFSET(0x8BEB10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDCRLENTRY_OFFSET UNITYSDK_OFFSET(0x8BEC10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDCRL_OFFSET UNITYSDK_OFFSET(0x8BECD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_SETSIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x8BF1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x8BF3A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x8BF430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x8BF460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x8BF520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x8BF5B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x8BF630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x8BF6B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATECERTLIST_OFFSET UNITYSDK_OFFSET(0x8BFB50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATEJCAOBJECT_OFFSET UNITYSDK_OFFSET(0x8BFBC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GET_SIGNATUREALGNAMES_OFFSET UNITYSDK_OFFSET(0x8BFD80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509V2CrlGenerator_TypeDefinitionIndex = 21550;

	class X509V2CrlGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* extGenerator; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* tbsGen; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOID; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId; // 0x28
		::System::String* signatureAlgorithm; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Void SetIssuerDN(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_SETISSUERDN_OFFSET))(arg, nullptr);
		}

		::System::Void SetThisUpdate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_SETTHISUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNextUpdate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_SETNEXTUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void AddCrlEntry(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::DateTime* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDCRLENTRY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddCrlEntry(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::DateTime* arg, ::System::Int32 arg, ::System::DateTime* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime*, ::System::Int32, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDCRLENTRY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddCrlEntry(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDCRLENTRY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddCrl(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDCRL_OFFSET))(arg, nullptr);
		}

		::System::Void SetSignatureAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_SETSIGNATUREALGORITHM_OFFSET))(str, nullptr);
		}

		::System::Void AddExtension(::System::String* str, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDEXTENSION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDEXTENSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddExtension(::System::String* str, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDEXTENSION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddExtension(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_ADDEXTENSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GenerateCertList()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATECERTLIST_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* GenerateJcaObject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::TbsCertificateList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GENERATEJCAOBJECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerable* get_SignatureAlgNames()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2CRLGENERATOR_GET_SIGNATUREALGNAMES_OFFSET))(nullptr);
		}

	};
}

