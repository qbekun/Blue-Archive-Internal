#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class PemParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1InputStream; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READDERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x75D2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_GETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x75D530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READPEMCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x75D660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READATTRCERT_OFFSET UNITYSDK_OFFSET(0x75D730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READATTRCERTS_OFFSET UNITYSDK_OFFSET(0x75DAC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READATTRCERT_OFFSET UNITYSDK_OFFSET(0x75D7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READATTRCERTS_OFFSET UNITYSDK_OFFSET(0x75DB30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x75DC50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x75DC60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509AttrCertParser_TypeDefinitionIndex = 21534;

	class X509AttrCertParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::PemParser* PemAttrCertParser; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* sData; // 0x10
		::System::Int32 sDataObjectCount; // 0x18
		::System::IO::Stream* currentStream; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadDerCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READDERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* GetCertificate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_GETCERTIFICATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadPemCertificate(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READPEMCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttrCert(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READATTRCERT_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* ReadAttrCerts(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READATTRCERTS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttrCert(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READATTRCERT_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* ReadAttrCerts(::System::IO::Stream* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_READATTRCERTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509ATTRCERTPARSER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

