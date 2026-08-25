#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_IDIGESTCALCULATOR_GETDIGEST_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int IDigestCalculator_TypeDefinitionIndex = 22717;

	class IDigestCalculator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetDigest()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_IDIGESTCALCULATOR_GETDIGEST_OFFSET))(nullptr);
		}

	};
}

