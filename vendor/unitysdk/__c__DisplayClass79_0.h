#pragma once
#include "unitysdk.h"

class UIShop_Popup_Gem_Confirm;
namespace MX::Data { class ShopCashData; }
namespace MX::Data::Excel { class ShopCashExcel; }

#define <>C__DISPLAYCLASS79_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xACD650)
#define <>C__DISPLAYCLASS79_0__SETPRODUCTREWARDLIST_G__SETSELECTPRODUCT|1_OFFSET UNITYSDK_OFFSET(0xACD8A0)
#define <>C__DISPLAYCLASS79_0__SETPRODUCTREWARDLIST_G__SETREWARDPRODUCT|2_OFFSET UNITYSDK_OFFSET(0xACDC70)

	inline static constexpr unsigned int <>c__DisplayClass79_0_TypeDefinitionIndex = 8053;

	class <>c__DisplayClass79_0 : public Il2CppObject
	{
	public:
		UIShop_Popup_Gem_Confirm* __4__this; // 0x10
		Il2CppObject* productRewardList; // 0x18
		::MX::Data::ShopCashData* shopCashData; // 0x20
		::MX::Data::Excel::ShopCashExcel* shopCashExcel; // 0x28
		Il2CppObject* productSelectGroupIdList; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS79_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetProductRewardList_g__SetSelectProduct|1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS79_0__SETPRODUCTREWARDLIST_G__SETSELECTPRODUCT|1_OFFSET))(nullptr);
		}

		::System::Void _SetProductRewardList_g__SetRewardProduct|2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS79_0__SETPRODUCTREWARDLIST_G__SETREWARDPRODUCT|2_OFFSET))(nullptr);
		}

	};

