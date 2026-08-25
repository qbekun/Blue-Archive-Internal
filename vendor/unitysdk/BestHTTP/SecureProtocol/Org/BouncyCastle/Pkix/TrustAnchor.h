#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class NameConstraints; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x97FCE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x97FEA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x97FFB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_TRUSTEDCERT_OFFSET UNITYSDK_OFFSET(0x980150)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_CA_OFFSET UNITYSDK_OFFSET(0x980160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_CANAME_OFFSET UNITYSDK_OFFSET(0x980170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_CAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x980180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_SETNAMECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x97FDB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_GETNAMECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x980190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9801E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int TrustAnchor_TypeDefinitionIndex = 21673;

	class TrustAnchor : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey; // 0x10
		::System::String* caName; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* caPrincipal; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* trustedCert; // 0x28
		::Il2CppArray<::System::Object*>* ncBytes; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::NameConstraints* nc; // 0x38

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* get_TrustedCert()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_TRUSTEDCERT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* get_CA()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_CA_OFFSET))(nullptr);
		}

		::System::String* get_CAName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_CANAME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_CAPublicKey()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_CAPUBLICKEY_OFFSET))(nullptr);
		}

		::System::Void setNameConstraints(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_SETNAMECONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_GetNameConstraints()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_GET_GETNAMECONSTRAINTS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_TRUSTANCHOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

