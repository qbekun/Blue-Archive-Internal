#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_COUNTERSIGNATUREDIGESTCALCULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x7B6CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_COUNTERSIGNATUREDIGESTCALCULATOR_GETDIGEST_OFFSET UNITYSDK_OFFSET(0x7B6D10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	inline static constexpr unsigned int CounterSignatureDigestCalculator_TypeDefinitionIndex = 22713;

	class CounterSignatureDigestCalculator : public Il2CppObject
	{
	public:
		::System::String* alg; // 0x10
		::Il2CppArray<::System::Object*>* data; // 0x18

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_COUNTERSIGNATUREDIGESTCALCULATOR_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDigest()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CMS_COUNTERSIGNATUREDIGESTCALCULATOR_GETDIGEST_OFFSET))(nullptr);
		}

	};
}

