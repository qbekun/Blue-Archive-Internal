#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class UILabel;
class TooltipButton;
class ShopListElementData;

#define UISHOPSLOT_SINGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xABA430)
#define UISHOPSLOT_SINGLE__SETDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0xABA440)
#define UISHOPSLOT_SINGLE_SETDATA_OFFSET UNITYSDK_OFFSET(0xABA500)

	inline static constexpr unsigned int UIShopSlot_Single_TypeDefinitionIndex = 8019;

	class UIShopSlot_Single : public Il2CppObject
	{
	public:
		UITexture* itemIconTexture; // 0x18
		UISprite* rarityBg; // 0x20
		UILabel* itemCountLabel; // 0x28
		UILabel* itemNameLabel; // 0x30
		UILabel* itemCountInInventoryLabel; // 0x38
		TooltipButton* tooltipButton; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_SINGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__6_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_SINGLE__SETDATA_B__6_0_OFFSET))(nullptr);
		}

		::System::Void SetData(ShopListElementData* arg)
		{
			((::System::Void(*)(ShopListElementData*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_SINGLE_SETDATA_OFFSET))(arg, nullptr);
		}

	};

