#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamAPICall_t; }
namespace NPA::Ex::Steam { class NXPPurchaseProductEndState; }
namespace NPA::Ex::Steam { class NXPMicroTransactionEvent; }
namespace NPA::Ex::Steam { class NXPOnInventoryResultReady; }

#define NPA_EX_STEAM_NXPPURCHASEPRODUCTCALLBACKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2BAC0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPPurchaseProductCallbackInfo_TypeDefinitionIndex = 26044;

	class NXPPurchaseProductCallbackInfo : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPSteamAPICall_t* startPurchaseHandle; // 0x10
		::NPA::Ex::Steam::NXPPurchaseProductEndState* purchaseProductEndState; // 0x18
		::System::Boolean setupOrderId; // 0x1C
		::System::UInt64 startPurchaseOrderID; // 0x20
		::System::UInt64 startPurchaseTransactionID; // 0x28
		::System::Boolean isPurchased; // 0x30
		::NPA::Ex::Steam::NXPMicroTransactionEvent* onMicroTransactionEvent; // 0x38
		::NPA::Ex::Steam::NXPOnInventoryResultReady* onInventoryResultReadyEvent; // 0x40
		Il2CppObject* onStartPurchaseFromSDK; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPPURCHASEPRODUCTCALLBACKINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

