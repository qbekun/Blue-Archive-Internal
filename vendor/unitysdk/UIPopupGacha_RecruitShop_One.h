#pragma once
#include "unitysdk.h"

class UIPickGachaSlot;
class UIRecruitShopInfo;

#define UIPOPUPGACHA_RECRUITSHOP_ONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C21D0)
#define UIPOPUPGACHA_RECRUITSHOP_ONE_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x25C21E0)

	inline static constexpr unsigned int UIPopupGacha_RecruitShop_One_TypeDefinitionIndex = 6301;

	class UIPopupGacha_RecruitShop_One : public Il2CppObject
	{
	public:
		UIPickGachaSlot* Slot; // 0x138

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_ONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialized(UIRecruitShopInfo* arg)
		{
			((::System::Void(*)(UIRecruitShopInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_ONE_INITIALIZED_OFFSET))(arg, nullptr);
		}

	};

