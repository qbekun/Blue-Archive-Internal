#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_GET_KEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7BECE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_SET_KEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7B96D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B96C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BED30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BEDE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int RecipientID_TypeDefinitionIndex = 22731;

	class RecipientID : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* keyIdentifier; // 0x88

		::Il2CppArray<::System::Object*>* get_KeyIdentifier()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_GET_KEYIDENTIFIER_OFFSET))(nullptr);
		}

		::System::Void set_KeyIdentifier(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_SET_KEYIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_RECIPIENTID_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

