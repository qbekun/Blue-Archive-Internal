#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509CertificatePair; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READDERCROSSCERTIFICATEPAIR_OFFSET UNITYSDK_OFFSET(0x762240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READCERTPAIR_OFFSET UNITYSDK_OFFSET(0x762330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READCERTPAIRS_OFFSET UNITYSDK_OFFSET(0x762600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READCERTPAIR_OFFSET UNITYSDK_OFFSET(0x7623A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READCERTPAIRS_OFFSET UNITYSDK_OFFSET(0x762670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x762790)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int X509CertPairParser_TypeDefinitionIndex = 21539;

	class X509CertPairParser : public Il2CppObject
	{
	public:
		::System::IO::Stream* currentStream; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* ReadDerCrossCertificatePair(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READDERCROSSCERTIFICATEPAIR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* ReadCertPair(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READCERTPAIR_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* ReadCertPairs(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READCERTPAIRS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* ReadCertPair(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READCERTPAIR_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* ReadCertPairs(::System::IO::Stream* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_READCERTPAIRS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_X509CERTPAIRPARSER_.CTOR_OFFSET))(nullptr);
		}

	};
}

