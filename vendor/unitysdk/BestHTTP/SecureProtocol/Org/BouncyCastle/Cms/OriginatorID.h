#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORID_.CTOR_OFFSET UNITYSDK_OFFSET(0x7BB7E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORID_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BCE30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BCF30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int OriginatorID_TypeDefinitionIndex = 22724;

	class OriginatorID : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORID_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_ORIGINATORID_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

