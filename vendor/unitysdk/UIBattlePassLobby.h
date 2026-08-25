#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UISprite;
class UIWidget;
class UIBattlePassRewardScrollViewController;
class SpineChatDialogContainerBattlePass;
class UIBattlePassLevelInfo;
class UIBattlePassVideoPlayer;
class UIBattlePassFeaturedReward;
class UITopResourceDisplay;
class UITexture;
class UILabel;
namespace UnityEngine { class Animation; }
namespace Cysharp::Threading::Tasks { class UniTask; }
class BattlePassPurchasedLevelMessage;
namespace MX::NetworkProtocol { class BattlePassCheckResponse; }
class CurrencyUpdateMessage;
class BattlePassObject;
namespace MX::NetworkProtocol { class BattlePassReceiveRewardResponse; }
class RetSearchPurchaseProduct;
class BattlePassTask;
class BattlePassGetInfoResponseMessage;

#define UIBATTLEPASSLOBBY_SETTEXTURES_OFFSET UNITYSDK_OFFSET(0x224FDC0)
#define UIBATTLEPASSLOBBY_ONCLICKPURCHASE_OFFSET UNITYSDK_OFFSET(0x224FF40)
#define UIBATTLEPASSLOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2250210)
#define UIBATTLEPASSLOBBY_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x224EAC0)
#define UIBATTLEPASSLOBBY_LOADSPINE_OFFSET UNITYSDK_OFFSET(0x224F1F0)
#define UIBATTLEPASSLOBBY_ONPURCHASELEVEL_OFFSET UNITYSDK_OFFSET(0x22505A0)
#define UIBATTLEPASSLOBBY_OPEN_OFFSET UNITYSDK_OFFSET(0x224E410)
#define UIBATTLEPASSLOBBY_UPDATEMISSIONBUTTONREDDOT_OFFSET UNITYSDK_OFFSET(0x2250750)
#define UIBATTLEPASSLOBBY_INITSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x2250440)
#define UIBATTLEPASSLOBBY_ONCURRENCYUPDATE_OFFSET UNITYSDK_OFFSET(0x2250860)
#define UIBATTLEPASSLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2250900)
#define UIBATTLEPASSLOBBY_ONCLICKRECEIVEALL_OFFSET UNITYSDK_OFFSET(0x2250B10)
#define UIBATTLEPASSLOBBY_GET_DATA_OFFSET UNITYSDK_OFFSET(0x2250BC0)
#define UIBATTLEPASSLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2250C10)
#define UIBATTLEPASSLOBBY_POSTOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x2250C20)
#define UIBATTLEPASSLOBBY_ONBACK_OFFSET UNITYSDK_OFFSET(0x2250DA0)
#define UIBATTLEPASSLOBBY_MISSIONSHORTCUTSPINEACTIVITY_OFFSET UNITYSDK_OFFSET(0x224E460)
#define UIBATTLEPASSLOBBY_ONCLICKMISSION_OFFSET UNITYSDK_OFFSET(0x2250E30)
#define UIBATTLEPASSLOBBY__ONCLICKRECEIVEALL_G__ONRECEIVEALL|43_0_OFFSET UNITYSDK_OFFSET(0x2250E50)
#define UIBATTLEPASSLOBBY_ONSEARCHPURCHASEPRODUCTRESPONDED_OFFSET UNITYSDK_OFFSET(0x2250FD0)
#define UIBATTLEPASSLOBBY_EXIT_OFFSET UNITYSDK_OFFSET(0x224FD30)
#define UIBATTLEPASSLOBBY_INITREWARDSCROLL_OFFSET UNITYSDK_OFFSET(0x2251220)
#define UIBATTLEPASSLOBBY_GET_TASK_OFFSET UNITYSDK_OFFSET(0x2250810)
#define UIBATTLEPASSLOBBY_ONUPDATEBATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0x22513A0)
#define UIBATTLEPASSLOBBY_UPDATERECEIVEALLBUTTON_OFFSET UNITYSDK_OFFSET(0x2250F40)
#define UIBATTLEPASSLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22505D0)

	inline static constexpr unsigned int UIBattlePassLobby_TypeDefinitionIndex = 4539;

	class UIBattlePassLobby : public Il2CppObject
	{
	public:
		MXButton* BackButton; // 0x18
		MXButton* PurchaseButton; // 0x20
		MXButton* MissionButton; // 0x28
		MXButton* ReceiveAllButton; // 0x30
		::UnityEngine::GameObject* ReceiveAllButtonDisabled; // 0x38
		UISprite* MissionButtonReddotSprite; // 0x40
		UIWidget* SpineRenderTarget; // 0x48
		UIBattlePassRewardScrollViewController* RewardScrollViewController; // 0x50
		SpineChatDialogContainerBattlePass* CharacterSpine; // 0x58
		UIBattlePassLevelInfo* LevelInfo; // 0x60
		UIBattlePassVideoPlayer* VideoPlayer; // 0x68
		UIBattlePassFeaturedReward* FeaturedReward; // 0x70
		UITopResourceDisplay* GemResourceDisplay; // 0x78
		UITexture* TitleBanner_Lobby; // 0x80
		UILabel* RemainingTimeLabel; // 0x88
		::UnityEngine::Animation* openAnimation; // 0x90
		::System::Threading::CancellationTokenSource* cts; // 0x98
		::System::Action* onClickMission; // 0xA0

		::Cysharp::Threading::Tasks::UniTask* SetTextures()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_SETTEXTURES_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONCLICKPURCHASE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnAwake(::UnityEngine::Animation* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONAWAKE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadSpine(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_LOADSPINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnPurchaseLevel(BattlePassPurchasedLevelMessage* arg)
		{
			return ((::System::Boolean(*)(BattlePassPurchasedLevelMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONPURCHASELEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_OPEN_OFFSET))(nullptr);
		}

		::System::Void UpdateMissionButtonReddot(::MX::NetworkProtocol::BattlePassCheckResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BattlePassCheckResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_UPDATEMISSIONBUTTONREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Void InitSpineCharacter(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_INITSPINECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnCurrencyUpdate(CurrencyUpdateMessage* arg)
		{
			return ((::System::Boolean(*)(CurrencyUpdateMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONCURRENCYUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONCLICKRECEIVEALL_OFFSET))(nullptr);
		}

		BattlePassObject* get_Data()
		{
			return ((BattlePassObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PostOpenAnimation()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_POSTOPENANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONBACK_OFFSET))(nullptr);
		}

		::System::Void MissionShortcutSpineActivity()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_MISSIONSHORTCUTSPINEACTIVITY_OFFSET))(nullptr);
		}

		::System::Void OnClickMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONCLICKMISSION_OFFSET))(nullptr);
		}

		::System::Void _OnClickReceiveAll_g__OnReceiveAll|43_0(::MX::NetworkProtocol::BattlePassReceiveRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BattlePassReceiveRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY__ONCLICKRECEIVEALL_G__ONRECEIVEALL|43_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnSearchPurchaseProductResponded(RetSearchPurchaseProduct* arg)
		{
			((::System::Void(*)(RetSearchPurchaseProduct*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONSEARCHPURCHASEPRODUCTRESPONDED_OFFSET))(arg, nullptr);
		}

		::System::Void Exit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_EXIT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* InitRewardScroll()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_INITREWARDSCROLL_OFFSET))(nullptr);
		}

		BattlePassTask* get_Task()
		{
			return ((BattlePassTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_GET_TASK_OFFSET))(nullptr);
		}

		::System::Boolean OnUpdateBattlePassInfo(BattlePassGetInfoResponseMessage* arg)
		{
			return ((::System::Boolean(*)(BattlePassGetInfoResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONUPDATEBATTLEPASSINFO_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateReceiveAllButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_UPDATERECEIVEALLBUTTON_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* OnOpened()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSLOBBY_ONOPENED_OFFSET))(nullptr);
		}

	};

