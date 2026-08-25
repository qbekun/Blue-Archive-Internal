#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl { class IPasswordFinder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Crl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { class Pkcs10CertificationRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { class ContentInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x996220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x996230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x996260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x996290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READRSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x997920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x997900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x997B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READCRL_OFFSET UNITYSDK_OFFSET(0x997E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READCERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x9979B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READATTRIBUTECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x997FD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READPKCS7_OFFSET UNITYSDK_OFFSET(0x997D10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READPRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x996610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_GETCURVEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x998040)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	inline static constexpr unsigned int PemReader_TypeDefinitionIndex = 21693;

	class PemReader : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::IPasswordFinder* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl::IPasswordFinder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READOBJECT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ReadRsaPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READRSAPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ReadPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* ReadCrl(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READCRL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* ReadCertificateRequest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READCERTIFICATEREQUEST_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttributeCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READATTRIBUTECERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadPkcs7(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::ContentInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READPKCS7_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadPrivateKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::System::Object*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_READPRIVATEKEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetCurveParameters(::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPENSSL_PEMREADER_GETCURVEPARAMETERS_OFFSET))(str, nullptr);
		}

	};
}

