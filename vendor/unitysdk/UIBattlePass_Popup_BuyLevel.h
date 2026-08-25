#pragma once
#include "unitysdk.h"

class MXButton;
class UIBattlePassBuyLevelRewardScrollViewController;
class UILabel;
class UIShopMaxMinButtonController;
namespace UnityEngine { class GameObject; }
namespace MX::NetworkProtocol { class BattlePassBuyLevelResponse; }
class ClickMaxMinButtonMessage;
class BattlePassTask;
class BattlePassObject;

#define UIBATTLEPASS_POPUP_BUYLEVEL__ONCLICKPURCHASE_G__ONPURCHASERESPONSE|24_1_OFFSET UNITYSDK_OFFSET(0xA7FB60)
#define UIBATTLEPASS_POPUP_BUYLEVEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA7FD30)
#define UIBATTLEPASS_POPUP_BUYLEVEL_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7FE10)
#define UIBATTLEPASS_POPUP_BUYLEVEL_ONCLICKPURCHASE_OFFSET UNITYSDK_OFFSET(0xA80100)
#define UIBATTLEPASS_POPUP_BUYLEVEL_REFRESHLABELS_OFFSET UNITYSDK_OFFSET(0xA803F0)
#define UIBATTLEPASS_POPUP_BUYLEVEL_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET UNITYSDK_OFFSET(0xA80660)
#define UIBATTLEPASS_POPUP_BUYLEVEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA806A0)
#define UIBATTLEPASS_POPUP_BUYLEVEL_CLOSEPOPUP_OFFSET UNITYSDK_OFFSET(0xA7FC90)
#define UIBATTLEPASS_POPUP_BUYLEVEL_ISREWARDEMPTY_OFFSET UNITYSDK_OFFSET(0xA807D0)
#define UIBATTLEPASS_POPUP_BUYLEVEL_GETACTUALREWARDS_OFFSET UNITYSDK_OFFSET(0xA80820)
#define UIBATTLEPASS_POPUP_BUYLEVEL_GET_TASK_OFFSET UNITYSDK_OFFSET(0xA803B0)
#define UIBATTLEPASS_POPUP_BUYLEVEL_REFRESH_OFFSET UNITYSDK_OFFSET(0xA80C70)
#define UIBATTLEPASS_POPUP_BUYLEVEL_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA80610)
#define UIBATTLEPASS_POPUP_BUYLEVEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA80D00)
#define UIBATTLEPASS_POPUP_BUYLEVEL_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA80D80)

	inline static constexpr unsigned int UIBattlePass_Popup_BuyLevel_TypeDefinitionIndex = 7898;

	class UIBattlePass_Popup_BuyLevel : public Il2CppObject
	{
	public:
		MXButton* ButtonOk; // 0xD8
		MXButton* ButtonClose; // 0xE0
		MXButton* ButtonX; // 0xE8
		UIBattlePassBuyLevelRewardScrollViewController* scrollView; // 0xF0
		UILabel* BeforeLevelLabel; // 0xF8
		UILabel* AfterLevelLabel; // 0x100
		UILabel* Message; // 0x108
		UILabel* pricePerLabel; // 0x110
		UILabel* priceTotalLabel; // 0x118
		UIShopMaxMinButtonController* maxMinButtonController; // 0x120
		::UnityEngine::GameObject* EmptyListMark; // 0x128
		::UnityEngine::GameObject* EndWarningMark; // 0x130
		::System::Int32 purchaseCount; // 0x138
		::System::Int64 levelUpPurchaseCost; // 0x140
		Il2CppObject* actualRewards; // 0x148

		::System::Void _OnClickPurchase_g__OnPurchaseResponse|24_1(::MX::NetworkProtocol::BattlePassBuyLevelResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BattlePassBuyLevelResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL__ONCLICKPURCHASE_G__ONPURCHASERESPONSE|24_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_ONCLICKPURCHASE_OFFSET))(nullptr);
		}

		::System::Void RefreshLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_REFRESHLABELS_OFFSET))(nullptr);
		}

		::System::Boolean HandleClickMaxMinButtonMessage(ClickMaxMinButtonMessage* arg)
		{
			return ((::System::Boolean(*)(ClickMaxMinButtonMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_HANDLECLICKMAXMINBUTTONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ClosePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_CLOSEPOPUP_OFFSET))(nullptr);
		}

		::System::Boolean IsRewardEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_ISREWARDEMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* GetActualRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_GETACTUALREWARDS_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_REFRESH_OFFSET))(nullptr);
		}

		BattlePassObject* get_Data()
		{
			return ((BattlePassObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASS_POPUP_BUYLEVEL_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

