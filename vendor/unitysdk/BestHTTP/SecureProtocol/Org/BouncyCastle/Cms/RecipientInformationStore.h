#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientInformation; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class RecipientID; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BF2B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x7BF8C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GETFIRSTRECIPIENT_OFFSET UNITYSDK_OFFSET(0x7BF8D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x7BFA60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GETRECIPIENTS_OFFSET UNITYSDK_OFFSET(0x7BFB00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GETRECIPIENTS_OFFSET UNITYSDK_OFFSET(0x7BFB50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int RecipientInformationStore_TypeDefinitionIndex = 22734;

	class RecipientInformationStore : public Il2CppObject
	{
	public:
		::System::Collections::IList* all; // 0x10
		::System::Collections::IDictionary* table; // 0x18

		::System::Void .ctor(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformation* get_Item(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformation*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformation* GetFirstRecipient(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientInformation*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GETFIRSTRECIPIENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* GetRecipients()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GETRECIPIENTS_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* GetRecipients(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::RecipientID*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTINFORMATIONSTORE_GETRECIPIENTS_OFFSET))(arg, nullptr);
		}

	};
}

