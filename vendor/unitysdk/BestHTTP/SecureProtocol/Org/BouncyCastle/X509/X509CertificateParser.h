#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class PemParser; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Set; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1InputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509CertificateStructure; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READDERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x7617B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_GETCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x7619F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READPEMCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x761AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_CREATEX509CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x761BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x761C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x762010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x761C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x762080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7621A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7621B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509CertificateParser_TypeDefinitionIndex = 21538;

	class X509CertificateParser : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::PemParser* PemCertParser; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Set* sData; // 0x10
		::System::Int32 sDataObjectCount; // 0x18
		::System::IO::Stream* currentStream; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* ReadDerCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1InputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READDERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* GetCertificate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_GETCERTIFICATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* ReadPemCertificate(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READPEMCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* CreateX509Certificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_CREATEX509CERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* ReadCertificates(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READCERTIFICATES_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* ReadCertificates(::System::IO::Stream* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_READCERTIFICATES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTIFICATEPARSER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

