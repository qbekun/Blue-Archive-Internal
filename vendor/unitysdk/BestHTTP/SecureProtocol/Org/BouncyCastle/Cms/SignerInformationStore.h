#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerInformation; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class SignerID; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7C45E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x79E6D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_GETFIRSTSIGNER_OFFSET UNITYSDK_OFFSET(0x7C4770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x7C4900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_GETSIGNERS_OFFSET UNITYSDK_OFFSET(0x7B2A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_GETSIGNERS_OFFSET UNITYSDK_OFFSET(0x7C49A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int SignerInformationStore_TypeDefinitionIndex = 22740;

	class SignerInformationStore : public Il2CppObject
	{
	public:
		::System::Collections::IList* all; // 0x10
		::System::Collections::IDictionary* table; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation* GetFirstSigner(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerInformation*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_GETFIRSTSIGNER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* GetSigners()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_GETSIGNERS_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* GetSigners(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::SignerID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_SIGNERINFORMATIONSTORE_GETSIGNERS_OFFSET))(arg, nullptr);
		}

	};
}

