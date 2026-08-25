#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class CertID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class CertificateID; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D3BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GET_HASHALGOID_OFFSET UNITYSDK_OFFSET(0x9D3FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GETISSUERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x9D4020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GETISSUERKEYHASH_OFFSET UNITYSDK_OFFSET(0x9D4060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x9D40A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_MATCHESISSUER_OFFSET UNITYSDK_OFFSET(0x9D40D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x9D4120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D4130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D4210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_DERIVECERTIFICATEID_OFFSET UNITYSDK_OFFSET(0x9D4260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_CREATECERTID_OFFSET UNITYSDK_OFFSET(0x9D3CE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int CertificateID_TypeDefinitionIndex = 21736;

	class CertificateID : public Il2CppObject
	{
	public:
		::System::String* HashSha1; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID* id; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* get_HashAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GET_HASHALGOID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIssuerNameHash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GETISSUERNAMEHASH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIssuerKeyHash()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GETISSUERKEYHASH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::System::Boolean MatchesIssuer(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_MATCHESISSUER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_TOASN1OBJECT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_GETHASHCODE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* DeriveCertificateID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_DERIVECERTIFICATEID_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID* CreateCertID(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::CertID*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_CERTIFICATEID_CREATECERTID_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

