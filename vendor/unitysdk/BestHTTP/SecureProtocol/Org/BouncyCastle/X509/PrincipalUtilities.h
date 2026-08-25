#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Crl; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PRINCIPALUTILITIES_GETISSUERX509PRINCIPAL_OFFSET UNITYSDK_OFFSET(0x759D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PRINCIPALUTILITIES_GETSUBJECTX509PRINCIPAL_OFFSET UNITYSDK_OFFSET(0x75AE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PRINCIPALUTILITIES_GETISSUERX509PRINCIPAL_OFFSET UNITYSDK_OFFSET(0x75CFB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PRINCIPALUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x75D0E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int PrincipalUtilities_TypeDefinitionIndex = 21532;

	class PrincipalUtilities : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerX509Principal(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PRINCIPALUTILITIES_GETISSUERX509PRINCIPAL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* GetSubjectX509Principal(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PRINCIPALUTILITIES_GETSUBJECTX509PRINCIPAL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerX509Principal(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PRINCIPALUTILITIES_GETISSUERX509PRINCIPAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PRINCIPALUTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

