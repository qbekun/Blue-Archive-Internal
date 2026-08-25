#pragma once
#include "../unitysdk.h"

namespace NPA { class NPBillingTransactionState; }

namespace NPA
{
	inline static constexpr unsigned int NPBillingTransactionState_TypeDefinitionIndex = 25666;

	class NPBillingTransactionState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NPBillingTransactionState* Initialized; // 0x0
		::NPA::NPBillingTransactionState* PromotionInitialized; // 0x0
		::NPA::NPBillingTransactionState* VendorChecked; // 0x0
		::NPA::NPBillingTransactionState* Issued; // 0x0
		::NPA::NPBillingTransactionState* VendorPurchased; // 0x0
		::NPA::NPBillingTransactionState* PromotionPurchased; // 0x0
		::NPA::NPBillingTransactionState* Purchased; // 0x0
		::NPA::NPBillingTransactionState* Consumed; // 0x0
		::NPA::NPBillingTransactionState* PaymentCompleted; // 0x0
		::NPA::NPBillingTransactionState* Verified; // 0x0
		::NPA::NPBillingTransactionState* Finished; // 0x0
		::NPA::NPBillingTransactionState* Canceled; // 0x0
		::NPA::NPBillingTransactionState* Failed; // 0x0

	};
}

