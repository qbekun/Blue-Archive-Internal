#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class Holder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralNames; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7599C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x759A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x759B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x759EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x759F40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GET_DIGESTEDOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x75A0A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GET_DIGESTALGORITHM_OFFSET UNITYSDK_OFFSET(0x75A0E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETOBJECTDIGEST_OFFSET UNITYSDK_OFFSET(0x75A130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GET_OTHEROBJECTTYPEID_OFFSET UNITYSDK_OFFSET(0x75A180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GENERATEGENERALNAMES_OFFSET UNITYSDK_OFFSET(0x759AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_MATCHESDN_OFFSET UNITYSDK_OFFSET(0x75A1C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETNAMES_OFFSET UNITYSDK_OFFSET(0x75A350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETPRINCIPALS_OFFSET UNITYSDK_OFFSET(0x75A510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETENTITYNAMES_OFFSET UNITYSDK_OFFSET(0x75A750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETISSUER_OFFSET UNITYSDK_OFFSET(0x75A780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x75A7B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_CLONE_OFFSET UNITYSDK_OFFSET(0x75A7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_MATCH_OFFSET UNITYSDK_OFFSET(0x75A8D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x75BF90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x75C030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_MATCH_OFFSET UNITYSDK_OFFSET(0x75C060)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int AttributeCertificateHolder_TypeDefinitionIndex = 21527;

	class AttributeCertificateHolder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Holder* holder; // 0x10

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Int32 get_DigestedObjectType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GET_DIGESTEDOBJECTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_DigestAlgorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GET_DIGESTALGORITHM_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetObjectDigest()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETOBJECTDIGEST_OFFSET))(nullptr);
		}

		::System::String* get_OtherObjectTypeID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GET_OTHEROBJECTTYPEID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* GenerateGeneralNames(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GENERATEGENERALNAMES_OFFSET))(arg, nullptr);
		}

		::System::Boolean MatchesDN(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_MATCHESDN_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNames(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETNAMES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPrincipals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralNames*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETPRINCIPALS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEntityNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETENTITYNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetIssuer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETISSUER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_ATTRIBUTECERTIFICATEHOLDER_MATCH_OFFSET))(arg, nullptr);
		}

	};
}

