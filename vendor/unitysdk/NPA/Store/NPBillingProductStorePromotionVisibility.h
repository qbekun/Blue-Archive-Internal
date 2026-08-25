#pragma once
#include "../../unitysdk.h"

namespace NPA::Store { class NPBillingProductStorePromotionVisibility; }

namespace NPA::Store
{
	inline static constexpr unsigned int NPBillingProductStorePromotionVisibility_TypeDefinitionIndex = 27223;

	class NPBillingProductStorePromotionVisibility : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Store::NPBillingProductStorePromotionVisibility* NPBillingProductStorePromotionVisibilityDefault; // 0x0
		::NPA::Store::NPBillingProductStorePromotionVisibility* NPBillingProductStorePromotionVisibilityShow; // 0x0
		::NPA::Store::NPBillingProductStorePromotionVisibility* NPBillingProductStorePromotionVisibilityHide; // 0x0

	};
}

