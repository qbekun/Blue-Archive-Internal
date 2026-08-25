#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp { class SingleResponse; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Extensions; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { class DateTimeObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp { class CertificateID; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GET_SINGLEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9DAFB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GET_NEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9DAFD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA9E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GETCERTID_OFFSET UNITYSDK_OFFSET(0x9DB050)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GET_THISUPDATE_OFFSET UNITYSDK_OFFSET(0x9DB0C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GETX509EXTENSIONS_OFFSET UNITYSDK_OFFSET(0x9DB0F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GETCERTSTATUS_OFFSET UNITYSDK_OFFSET(0x9DB110)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp
{
	inline static constexpr unsigned int SingleResp_TypeDefinitionIndex = 21751;

	class SingleResp : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* resp; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* get_SingleExtensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GET_SINGLEEXTENSIONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_NextUpdate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GET_NEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* GetCertID()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GETCERTID_OFFSET))(nullptr);
		}

		::System::DateTime* get_ThisUpdate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GET_THISUPDATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GETX509EXTENSIONS_OFFSET))(nullptr);
		}

		::System::Object* GetCertStatus()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OCSP_SINGLERESP_GETCERTSTATUS_OFFSET))(nullptr);
		}

	};
}

