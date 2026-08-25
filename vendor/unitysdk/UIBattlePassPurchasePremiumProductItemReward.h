#pragma once
#include "unitysdk.h"

class UISprite;
class UITexture;
class UILabel;
class TooltipButton;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UIBATTLEPASSPURCHASEPREMIUMPRODUCTITEMREWARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x224AE20)
#define UIBATTLEPASSPURCHASEPREMIUMPRODUCTITEMREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x224AF50)

	inline static constexpr unsigned int UIBattlePassPurchasePremiumProductItemReward_TypeDefinitionIndex = 4512;

	class UIBattlePassPurchasePremiumProductItemReward : public Il2CppObject
	{
	public:
		UISprite* Widget; // 0x18
		UITexture* Icon; // 0x20
		UILabel* CountLabel; // 0x28
		TooltipButton* TooltipButton; // 0x30

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPREMIUMPRODUCTITEMREWARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSPURCHASEPREMIUMPRODUCTITEMREWARD_.CTOR_OFFSET))(nullptr);
		}

	};

