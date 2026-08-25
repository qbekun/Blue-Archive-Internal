#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509CrlStoreSelector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCRLUTILITIES_FINDCRLS_OFFSET UNITYSDK_OFFSET(0x963010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCRLUTILITIES_FINDCRLS_OFFSET UNITYSDK_OFFSET(0x963D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCRLUTILITIES_FINDCRLS_OFFSET UNITYSDK_OFFSET(0x9637E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCRLUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x963000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixCrlUtilities_TypeDefinitionIndex = 21665;

	class PkixCrlUtilities : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* FindCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::System::DateTime* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCRLUTILITIES_FINDCRLS_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* FindCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCRLUTILITIES_FINDCRLS_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ICollection* FindCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* arg, ::System::Collections::IList* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCRLUTILITIES_FINDCRLS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCRLUTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

