#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UITexture;
class UIRewardPopup;
class UIGacha;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIRECRUITSHOPINFO_SETREWARD_OFFSET UNITYSDK_OFFSET(0xA7BC30)
#define UIRECRUITSHOPINFO_OPENRECRUITSHOP_OFFSET UNITYSDK_OFFSET(0xA7BC40)
#define UIRECRUITSHOPINFO_SETGACHACEILINGDATA_OFFSET UNITYSDK_OFFSET(0xA7BFC0)
#define UIRECRUITSHOPINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7C5D0)
#define UIRECRUITSHOPINFO__INITGACHACEILING_B__9_0_OFFSET UNITYSDK_OFFSET(0xA7C6F0)
#define UIRECRUITSHOPINFO_ONCLICKPICKUPSHOPBUTTON_OFFSET UNITYSDK_OFFSET(0xA7C780)
#define UIRECRUITSHOPINFO__INITGACHACEILING_B__9_1_OFFSET UNITYSDK_OFFSET(0xA7C820)
#define UIRECRUITSHOPINFO_INITGACHACEILING_OFFSET UNITYSDK_OFFSET(0xA7C850)
#define UIRECRUITSHOPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7CB10)
#define UIRECRUITSHOPINFO_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0xA7BF20)

	inline static constexpr unsigned int UIRecruitShopInfo_TypeDefinitionIndex = 7882;

	class UIRecruitShopInfo : public Il2CppObject
	{
	public:
		MXButton* pickUpShopButton; // 0x18
		UILabel* recruitCoinNameLabel; // 0x20
		UILabel* recruitCoinLabel; // 0x28
		UITexture* recruitCoinIcon; // 0x30
		Il2CppObject* rewardParcelInfos; // 0x38

		::System::Void SetReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO_SETREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void OpenRecruitShop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO_OPENRECRUITSHOP_OFFSET))(nullptr);
		}

		::System::Void SetGachaCeilingData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO_SETGACHACEILINGDATA_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _InitGachaCeiling_b__9_0(UIRewardPopup* arg)
		{
			((::System::Void(*)(UIRewardPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO__INITGACHACEILING_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPickUpShopButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO_ONCLICKPICKUPSHOPBUTTON_OFFSET))(nullptr);
		}

		::System::Void _InitGachaCeiling_b__9_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO__INITGACHACEILING_B__9_1_OFFSET))(nullptr);
		}

		::System::Void InitGachaCeiling(UIGacha* arg)
		{
			((::System::Void(*)(UIGacha*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO_INITGACHACEILING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopRecruitExcel* get_excel()
		{
			return ((::MX::Data::Excel::ShopRecruitExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECRUITSHOPINFO_GET_EXCEL_OFFSET))(nullptr);
		}

	};

