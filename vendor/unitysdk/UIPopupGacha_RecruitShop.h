#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class MXButton;
class UIGrid;
class UIScrollView;
namespace UnityEngine { class GameObject; }
namespace MX::Data::Excel { class ShopRecruitExcel; }
class UIRecruitShopInfo;
class ShopBuyGachaResponseMessage;

#define UIPOPUPGACHA_RECRUITSHOP_HANDLEPICKUPGAINCHARACTER_OFFSET UNITYSDK_OFFSET(0x25C1050)
#define UIPOPUPGACHA_RECRUITSHOP_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x25C1340)
#define UIPOPUPGACHA_RECRUITSHOP_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x25C1880)
#define UIPOPUPGACHA_RECRUITSHOP_GET_ISGETNEWCHARACTER_OFFSET UNITYSDK_OFFSET(0x25C1980)
#define UIPOPUPGACHA_RECRUITSHOP_AWAKE_OFFSET UNITYSDK_OFFSET(0x25C1990)
#define UIPOPUPGACHA_RECRUITSHOP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25C1AC0)
#define UIPOPUPGACHA_RECRUITSHOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C1BA0)
#define UIPOPUPGACHA_RECRUITSHOP_SET_ISGETNEWCHARACTER_OFFSET UNITYSDK_OFFSET(0x25C1BB0)
#define UIPOPUPGACHA_RECRUITSHOP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25C1BC0)

	inline static constexpr unsigned int UIPopupGacha_RecruitShop_TypeDefinitionIndex = 6300;

	class UIPopupGacha_RecruitShop : public Il2CppObject
	{
	public:
		UILabel* RecruitCoinNameLabel; // 0xD8
		UILabel* DescriptionLabel; // 0xE0
		UILabel* RecruitCoinLabel; // 0xE8
		UITexture* RecruitCoinIcon; // 0xF0
		MXButton* Close; // 0xF8
		UIGrid* grid; // 0x100
		UIScrollView* scrollView; // 0x108
		::UnityEngine::GameObject* inbox; // 0x110
		::MX::Data::Excel::ShopRecruitExcel* shopRecruitExcel; // 0x118
		UIRecruitShopInfo* info; // 0x128
		::System::Boolean _IsGetNewCharacter_k__BackingField; // 0x130

		::System::Boolean HandlePickUpGainCharacter(ShopBuyGachaResponseMessage* arg)
		{
			return ((::System::Boolean(*)(ShopBuyGachaResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_HANDLEPICKUPGAINCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void Initialized(UIRecruitShopInfo* arg)
		{
			((::System::Void(*)(UIRecruitShopInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGetNewCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_GET_ISGETNEWCHARACTER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsGetNewCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_SET_ISGETNEWCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUPGACHA_RECRUITSHOP_ONDISABLE_OFFSET))(nullptr);
		}

	};

