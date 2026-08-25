#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509ExtensionsGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class V2AttributeCertificateInfoGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class AttributeCertificateHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class AttributeCertificateIssuer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Attribute; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISignatureFactory; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8BD9B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8BDA60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETHOLDER_OFFSET UNITYSDK_OFFSET(0x8BDAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETISSUER_OFFSET UNITYSDK_OFFSET(0x8BDB00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x8BDB40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETNOTBEFORE_OFFSET UNITYSDK_OFFSET(0x8BDBC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETNOTAFTER_OFFSET UNITYSDK_OFFSET(0x8BDC40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETSIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x8BDCC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8BDE80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETISSUERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x8BDED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x8BDF80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x8BE010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x8BE0A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x8BE120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x8BE1A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_GET_SIGNATUREALGNAMES_OFFSET UNITYSDK_OFFSET(0x8BE7A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509V2AttributeCertificateGenerator_TypeDefinitionIndex = 21549;

	class X509V2AttributeCertificateGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* extGenerator; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* acInfoGen; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOID; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId; // 0x28
		::System::String* signatureAlgorithm; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Void SetHolder(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETHOLDER_OFFSET))(arg, nullptr);
		}

		::System::Void SetIssuer(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETISSUER_OFFSET))(arg, nullptr);
		}

		::System::Void SetSerialNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETSERIALNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void SetNotBefore(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETNOTBEFORE_OFFSET))(arg, nullptr);
		}

		::System::Void SetNotAfter(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETNOTAFTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetSignatureAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETSIGNATUREALGORITHM_OFFSET))(str, nullptr);
		}

		::System::Void AddAttribute(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Attribute* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Attribute*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_ADDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetIssuerUniqueId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_SETISSUERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void AddExtension(::System::String* str, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_ADDEXTENSION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddExtension(::System::String* str, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_ADDEXTENSION_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_GENERATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* Generate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_GENERATE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerable* get_SignatureAlgNames()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509V2ATTRIBUTECERTIFICATEGENERATOR_GET_SIGNATUREALGNAMES_OFFSET))(nullptr);
		}

	};
}

