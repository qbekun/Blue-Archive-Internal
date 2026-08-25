#pragma once
#include "unitysdk.h"

namespace NPA::Ex::Steam { class NXPPurchaseProductCallbackInfo; }

#define <>C__DISPLAYCLASS84_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2AF00)
#define <>C__DISPLAYCLASS84_3__ONSTEAMINVENTORYRESULTREADY_B__2_OFFSET UNITYSDK_OFFSET(0x9D2AF10)

	inline static constexpr unsigned int <>c__DisplayClass84_3_TypeDefinitionIndex = 26029;

	class <>c__DisplayClass84_3 : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPPurchaseProductCallbackInfo* purchaseProductCallbackInfo; // 0x10
		<>c__DisplayClass84_0* CS$__8__locals2; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS84_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnSteamInventoryResultReady_b__2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS84_3__ONSTEAMINVENTORYRESULTREADY_B__2_OFFSET))(nullptr);
		}

	};

