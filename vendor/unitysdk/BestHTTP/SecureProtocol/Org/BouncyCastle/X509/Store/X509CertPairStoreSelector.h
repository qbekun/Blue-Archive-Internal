#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509CertificatePair; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509CertStoreSelector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509CertPairStoreSelector; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_CLONESELECTOR_OFFSET UNITYSDK_OFFSET(0x8C2830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C28C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C28D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_GET_CERTPAIR_OFFSET UNITYSDK_OFFSET(0x8C2B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_SET_CERTPAIR_OFFSET UNITYSDK_OFFSET(0x8C2B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_GET_FORWARDSELECTOR_OFFSET UNITYSDK_OFFSET(0x8C2A20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_SET_FORWARDSELECTOR_OFFSET UNITYSDK_OFFSET(0x8C2B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_GET_REVERSESELECTOR_OFFSET UNITYSDK_OFFSET(0x8C2AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_SET_REVERSESELECTOR_OFFSET UNITYSDK_OFFSET(0x8C2C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_MATCH_OFFSET UNITYSDK_OFFSET(0x8C2CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_CLONE_OFFSET UNITYSDK_OFFSET(0x8C2DC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int X509CertPairStoreSelector_TypeDefinitionIndex = 21557;

	class X509CertPairStoreSelector : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* certPair; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* forwardSelector; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* reverseSelector; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* CloneSelector(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_CLONESELECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* get_CertPair()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_GET_CERTPAIR_OFFSET))(nullptr);
		}

		::System::Void set_CertPair(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509CertificatePair*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_SET_CERTPAIR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* get_ForwardSelector()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_GET_FORWARDSELECTOR_OFFSET))(nullptr);
		}

		::System::Void set_ForwardSelector(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_SET_FORWARDSELECTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* get_ReverseSelector()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_GET_REVERSESELECTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReverseSelector(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_SET_REVERSESELECTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Match(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CERTPAIRSTORESELECTOR_CLONE_OFFSET))(nullptr);
		}

	};
}

