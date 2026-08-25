#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AttCertIssuer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralNames; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_.CTOR_OFFSET UNITYSDK_OFFSET(0x75C0E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_.CTOR_OFFSET UNITYSDK_OFFSET(0x75C120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_GETNAMES_OFFSET UNITYSDK_OFFSET(0x75C200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_GETPRINCIPALS_OFFSET UNITYSDK_OFFSET(0x75C470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_MATCHESDN_OFFSET UNITYSDK_OFFSET(0x75C6A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_CLONE_OFFSET UNITYSDK_OFFSET(0x75C830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_MATCH_OFFSET UNITYSDK_OFFSET(0x75C8B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_EQUALS_OFFSET UNITYSDK_OFFSET(0x75CA50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x75CAF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_MATCH_OFFSET UNITYSDK_OFFSET(0x75CB20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int AttributeCertificateIssuer_TypeDefinitionIndex = 21528;

	class AttributeCertificateIssuer : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* form; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertIssuer* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AttCertIssuer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_GETNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPrincipals()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_GETPRINCIPALS_OFFSET))(nullptr);
		}

		::System::Boolean MatchesDN(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_MATCHESDN_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEISSUER_MATCH_OFFSET))(arg, nullptr);
		}

	};
}

