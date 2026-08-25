#pragma once
#include "../../unitysdk.h"

namespace NPA::Store { class NXPToyBillingDiscount; }

#define NPA_STORE_NXPTOYBILLINGSUBSCRIPTIONINTRODUCTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3140)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingSubscriptionIntroductory_TypeDefinitionIndex = 27233;

	class NXPToyBillingSubscriptionIntroductory : public Il2CppObject
	{
	public:
		::NPA::Store::NXPToyBillingDiscount* payAsYouGo; // 0x10
		::NPA::Store::NXPToyBillingDiscount* payUpFront; // 0x18
		::NPA::Store::NXPToyBillingDiscount* freeTrial; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGSUBSCRIPTIONINTRODUCTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

