#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_BASEDIGESTCALCULATOR_GETDIGEST_OFFSET UNITYSDK_OFFSET(0x78DB50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_BASEDIGESTCALCULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x78DBA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int BaseDigestCalculator_TypeDefinitionIndex = 22664;

	class BaseDigestCalculator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* digest; // 0x10

		::Il2CppArray<::System::Object*>* GetDigest()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_BASEDIGESTCALCULATOR_GETDIGEST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_BASEDIGESTCALCULATOR_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

