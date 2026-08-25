#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class CertificateList; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IVerifierFactoryProvider; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IVerifierFactory; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { class DateTimeObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509CrlEntry; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_.CTOR_OFFSET UNITYSDK_OFFSET(0x7627A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETX509EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x7629E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETENCODED_OFFSET UNITYSDK_OFFSET(0x762A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_VERIFY_OFFSET UNITYSDK_OFFSET(0x762B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_VERIFY_OFFSET UNITYSDK_OFFSET(0x762BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_CHECKSIGNATURE_OFFSET UNITYSDK_OFFSET(0x762CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x7630D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_ISSUERDN_OFFSET UNITYSDK_OFFSET(0x7630F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_THISUPDATE_OFFSET UNITYSDK_OFFSET(0x763110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_NEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x763140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_LOADCRLENTRIES_OFFSET UNITYSDK_OFFSET(0x7631D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETREVOKEDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x763710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETREVOKEDCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x763BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETTBSCERTLIST_OFFSET UNITYSDK_OFFSET(0x763C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETSIGNATURE_OFFSET UNITYSDK_OFFSET(0x763DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_SIGALGNAME_OFFSET UNITYSDK_OFFSET(0x763DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_SIGALGOID_OFFSET UNITYSDK_OFFSET(0x763DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETSIGALGPARAMS_OFFSET UNITYSDK_OFFSET(0x763E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_EQUALS_OFFSET UNITYSDK_OFFSET(0x763E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x763F80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x763FE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_ISREVOKED_OFFSET UNITYSDK_OFFSET(0x765110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_ISINDIRECTCRL_OFFSET UNITYSDK_OFFSET(0x7651E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509Crl_TypeDefinitionIndex = 21540;

	class X509Crl : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CertificateList* c; // 0x10
		::System::String* sigAlgName; // 0x18
		::Il2CppArray<::System::Object*>* sigAlgParams; // 0x20
		::System::Boolean isIndirect; // 0x28
		::System::Boolean hashValueSet; // 0x29
		::System::Int32 hashValue; // 0x2C

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CertificateList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CertificateList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETX509EXTENSIONS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETENCODED_OFFSET))(nullptr);
		}

		::System::Void Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_VERIFY_OFFSET))(arg, nullptr);
		}

		::System::Void Verify(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_VERIFY_OFFSET))(arg, nullptr);
		}

		::System::Void CheckSignature(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IVerifierFactory*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_CHECKSIGNATURE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_VERSION_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_ISSUERDN_OFFSET))(nullptr);
		}

		::System::DateTime* get_ThisUpdate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_THISUPDATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_NextUpdate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_NEXTUPDATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* LoadCrlEntries()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_LOADCRLENTRIES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CrlEntry* GetRevokedCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CrlEntry*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETREVOKEDCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetRevokedCertificates()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETREVOKEDCERTIFICATES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetTbsCertList()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETTBSCERTLIST_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSignature()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETSIGNATURE_OFFSET))(nullptr);
		}

		::System::String* get_SigAlgName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_SIGALGNAME_OFFSET))(nullptr);
		}

		::System::String* get_SigAlgOid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_SIGALGOID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSigAlgParams()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETSIGALGPARAMS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsRevoked(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_ISREVOKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsIndirectCrl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRL_GET_ISINDIRECTCRL_OFFSET))(nullptr);
		}

	};
}

