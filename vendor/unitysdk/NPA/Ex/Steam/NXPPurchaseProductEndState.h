#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPPurchaseProductEndState; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPPurchaseProductEndState_TypeDefinitionIndex = 26042;

	class NXPPurchaseProductEndState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::NXPPurchaseProductEndState* None; // 0x0
		::NPA::Ex::Steam::NXPPurchaseProductEndState* StartPurchase; // 0x0
		::NPA::Ex::Steam::NXPPurchaseProductEndState* MicroTransaction; // 0x0
		::NPA::Ex::Steam::NXPPurchaseProductEndState* InventoryResultReady; // 0x0

	};
}

