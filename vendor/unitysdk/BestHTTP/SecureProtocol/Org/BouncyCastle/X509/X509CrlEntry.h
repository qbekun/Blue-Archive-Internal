#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class CrlEntry; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x765390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x7636A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_LOADCERTIFICATEISSUER_OFFSET UNITYSDK_OFFSET(0x7653E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GETCERTIFICATEISSUER_OFFSET UNITYSDK_OFFSET(0x765590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GETX509EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x7655A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GETENCODED_OFFSET UNITYSDK_OFFSET(0x7655C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x7656E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GET_REVOCATIONDATE_OFFSET UNITYSDK_OFFSET(0x765710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GET_HASEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x765740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_EQUALS_OFFSET UNITYSDK_OFFSET(0x765770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x765850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7658B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509CrlEntry_TypeDefinitionIndex = 21541;

	class X509CrlEntry : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlEntry* c; // 0x10
		::System::Boolean isIndirect; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* previousCertificateIssuer; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* certificateIssuer; // 0x28
		::System::Boolean hashValueSet; // 0x30
		::System::Int32 hashValue; // 0x34

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlEntry* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlEntry* arg, ::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlEntry*, ::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* loadCertificateIssuer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_LOADCERTIFICATEISSUER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* GetCertificateIssuer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GETCERTIFICATEISSUER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GETX509EXTENSIONS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEncoded()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GETENCODED_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::System::DateTime* get_RevocationDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GET_REVOCATIONDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasExtensions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GET_HASEXTENSIONS_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CRLENTRY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

