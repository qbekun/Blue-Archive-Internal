#pragma once
#include "unitysdk.h"

namespace NPA::Ex::Steam { class NXPPurchaseProductCallbackInfo; }

#define <>C__DISPLAYCLASS88_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2B2E0)
#define <>C__DISPLAYCLASS88_2__ONSTEAMINVENTORYSTARTPURCHASERESULTCALLBACK_B__2_OFFSET UNITYSDK_OFFSET(0x9D2B2F0)

	inline static constexpr unsigned int <>c__DisplayClass88_2_TypeDefinitionIndex = 26032;

	class <>c__DisplayClass88_2 : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPPurchaseProductCallbackInfo* purchaseProductCallbackInfo; // 0x10
		<>c__DisplayClass88_0* CS$__8__locals2; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS88_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnSteamInventoryStartPurchaseResultCallback_b__2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS88_2__ONSTEAMINVENTORYSTARTPURCHASERESULTCALLBACK_B__2_OFFSET))(nullptr);
		}

	};

