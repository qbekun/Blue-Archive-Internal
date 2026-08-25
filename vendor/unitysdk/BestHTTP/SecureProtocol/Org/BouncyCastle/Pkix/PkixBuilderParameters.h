#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixBuilderParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Selector; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_SETEXCLUDEDCERTS_OFFSET UNITYSDK_OFFSET(0x9494B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_CLONE_OFFSET UNITYSDK_OFFSET(0x949590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_SET_MAXPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x949730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9497A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x949880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x9499D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_GET_MAXPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x949AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_GETEXCLUDEDCERTS_OFFSET UNITYSDK_OFFSET(0x949AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x949630)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixBuilderParameters_TypeDefinitionIndex = 21655;

	class PkixBuilderParameters : public Il2CppObject
	{
	public:
		::System::Int32 maxPathLength; // 0x90
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excludedCerts; // 0x98

		::System::Void SetExcludedCerts(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_SETEXCLUDEDCERTS_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_MaxPathLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_SET_MAXPATHLENGTH_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetParams(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_SETPARAMS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxPathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_GET_MAXPATHLENGTH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetExcludedCerts()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_GETEXCLUDEDCERTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXBUILDERPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

