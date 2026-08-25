#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define UISHOPELEMENTPRICEDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB3E70)
#define UISHOPELEMENTPRICEDISPLAY_SETDATA_OFFSET UNITYSDK_OFFSET(0xAB2DA0)

	inline static constexpr unsigned int UIShopElementPriceDisplay_TypeDefinitionIndex = 7988;

	class UIShopElementPriceDisplay : public Il2CppObject
	{
	public:
		UISprite* priceIconSprite; // 0x10
		UISprite* priceTicketIconSprite; // 0x18
		UILabel* priceAmountLabel; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPELEMENTPRICEDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPELEMENTPRICEDISPLAY_SETDATA_OFFSET))(arg, nullptr);
		}

	};

