#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class UILabel;
class TooltipButton;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UISHOPSLOT_PACKAGEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xABA360)
#define UISHOPSLOT_PACKAGEITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0xABA170)
#define UISHOPSLOT_PACKAGEITEM__SETDATA_B__4_0_OFFSET UNITYSDK_OFFSET(0xABA370)

	inline static constexpr unsigned int UIShopSlot_PackageItem_TypeDefinitionIndex = 8018;

	class UIShopSlot_PackageItem : public Il2CppObject
	{
	public:
		UITexture* itemIconTexture; // 0x18
		UISprite* rarityBg; // 0x20
		UILabel* itemCountLabel; // 0x28
		TooltipButton* tooltipButton; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_PACKAGEITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_PACKAGEITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__4_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPSLOT_PACKAGEITEM__SETDATA_B__4_0_OFFSET))(nullptr);
		}

	};

