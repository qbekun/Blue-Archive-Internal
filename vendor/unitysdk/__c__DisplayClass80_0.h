#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ShopInfoDB; }
namespace FlatData { class CurrencyTypes; }
class UIPopup_InteractiveWorldRaidBuyTicket;

#define <>C__DISPLAYCLASS80_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2621C40)
#define <>C__DISPLAYCLASS80_0__HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x2621C50)

	inline static constexpr unsigned int <>c__DisplayClass80_0_TypeDefinitionIndex = 6528;

	class <>c__DisplayClass80_0 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ShopInfoDB* shopInfo; // 0x10
		::FlatData::CurrencyTypes* currencyType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS80_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleEventContentShopListResponseMessage_b__0(UIPopup_InteractiveWorldRaidBuyTicket* arg)
		{
			((::System::Void(*)(UIPopup_InteractiveWorldRaidBuyTicket*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS80_0__HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_B__0_OFFSET))(arg, nullptr);
		}

	};

