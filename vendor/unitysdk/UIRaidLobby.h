#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
class UITexture;
class RaidListScollViewController;
namespace UnityEngine { class GameObject; }
class SpineChatDialogContainer;
class MXButton;
namespace MX::GameLogic::DBModel { class RaidLobbyInfoDB; }
class OpenConditionButtonController;
class UIPopupPermanentRaid_BossSelect;
namespace MX::Data { class ManagementRaidPeriodDisplayData; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPermanentRaidLobby;

#define UIRAIDLOBBY_ONTOPERMANENTRAIDBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x27A2810)
#define UIRAIDLOBBY_OPENTUTORIALCHECK_OFFSET UNITYSDK_OFFSET(0x27A2AC0)
#define UIRAIDLOBBY__ONTOPERMANENTRAIDBUTTONCLICK_B__50_0_OFFSET UNITYSDK_OFFSET(0x27A2D10)
#define UIRAIDLOBBY__ONOPENED_B__41_0_OFFSET UNITYSDK_OFFSET(0x27A2DA0)
#define UIRAIDLOBBY_UIRAIDROOMEND_OFFSET UNITYSDK_OFFSET(0x27A2DD0)
#define UIRAIDLOBBY_GET_CLICKPERMANENTRAIDBUTTONONENTER_OFFSET UNITYSDK_OFFSET(0x27A31D0)
#define UIRAIDLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x27A31E0)
#define UIRAIDLOBBY_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x27A3470)
#define UIRAIDLOBBY_OPENNEWRANKING_OFFSET UNITYSDK_OFFSET(0x27A3A10)
#define UIRAIDLOBBY_SET_NEWRANKINGCHECK_OFFSET UNITYSDK_OFFSET(0x27A3EF0)
#define UIRAIDLOBBY__UIRAIDROOMEND_G__RESPONSEHANDLER|39_0_OFFSET UNITYSDK_OFFSET(0x27A3F00)
#define UIRAIDLOBBY_CHECKUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x27989F0)
#define UIRAIDLOBBY__ONTOPERMANENTRAIDBUTTONCLICK_B__50_3_OFFSET UNITYSDK_OFFSET(0x27A43D0)
#define UIRAIDLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x27A4450)
#define UIRAIDLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27A45A0)
#define UIRAIDLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x27A46B0)
#define UIRAIDLOBBY__ONTOPERMANENTRAIDBUTTONCLICK_B__50_2_OFFSET UNITYSDK_OFFSET(0x27A46C0)
#define UIRAIDLOBBY_ONCLICKDISABLE_OFFSET UNITYSDK_OFFSET(0x27A47A0)
#define UIRAIDLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x27A4900)
#define UIRAIDLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27A4990)
#define UIRAIDLOBBY_SET_CLICKPERMANENTRAIDBUTTONONENTER_OFFSET UNITYSDK_OFFSET(0x27A54F0)
#define UIRAIDLOBBY_REFRESHCOMPENSATECHANCELABEL_OFFSET UNITYSDK_OFFSET(0x27A42C0)
#define UIRAIDLOBBY__ONTOPERMANENTRAIDBUTTONCLICK_B__50_1_OFFSET UNITYSDK_OFFSET(0x27A5500)
#define UIRAIDLOBBY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27A5580)
#define UIRAIDLOBBY_ONAFTERTUTORIAL_OFFSET UNITYSDK_OFFSET(0x27A2CC0)
#define UIRAIDLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27A56E0)
#define UIRAIDLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A57F0)
#define UIRAIDLOBBY_GET_NEWRANKINGCHECK_OFFSET UNITYSDK_OFFSET(0x27A5800)
#define UIRAIDLOBBY_REFRESHRANKING_OFFSET UNITYSDK_OFFSET(0x27A4080)
#define UIRAIDLOBBY_ONCLICKSEASONREWARD_OFFSET UNITYSDK_OFFSET(0x27A5810)
#define UIRAIDLOBBY_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27A5A10)

	inline static constexpr unsigned int UIRaidLobby_TypeDefinitionIndex = 7486;

	class UIRaidLobby : public Il2CppObject
	{
	public:
		UILabel* SeasonFrom; // 0xD8
		UILabel* SeasonTo; // 0xE0
		UILabel* TicketCount; // 0xE8
		UISprite* TicketImage; // 0xF0
		UILabel* Ranking; // 0xF8
		UILabel* RankingPoint; // 0x100
		UITexture* TierIcon; // 0x108
		RaidListScollViewController* ScrollView; // 0x110
		::UnityEngine::GameObject* EmptyObject; // 0x118
		::UnityEngine::GameObject* SettlementObject; // 0x120
		::UnityEngine::GameObject* SeaonOffObject; // 0x128
		::UnityEngine::GameObject* SeaonOnObject; // 0x130
		::UnityEngine::GameObject* SpineObject; // 0x138
		::UnityEngine::GameObject* TitleObject; // 0x140
		UILabel* CloseCenterLabel; // 0x148
		UILabel* SettlementCenterLabel; // 0x150
		SpineChatDialogContainer* SpineDialog; // 0x158
		MXButton* SeasonRewardInfo; // 0x160
		::MX::GameLogic::DBModel::RaidLobbyInfoDB* currentSeasonInfo; // 0x168
		::System::Boolean _NewRankingCheck_k__BackingField; // 0x170
		::System::Boolean _ClickPermanentRaidButtonOnEnter_k__BackingField; // 0x171
		::UnityEngine::GameObject* CompensateChanceLabelObject; // 0x178
		UILabel* CompensateChanceLabel; // 0x180
		MXButton* ToPermanentRaidButton; // 0x188
		OpenConditionButtonController* PermanentRaidOpenConditionController; // 0x190

		::System::Void OnToPermanentRaidButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_ONTOPERMANENTRAIDBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OpenTutorialCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_OPENTUTORIALCHECK_OFFSET))(nullptr);
		}

		::System::Void _OnToPermanentRaidButtonClick_b__50_0(UIPopupPermanentRaid_BossSelect* arg)
		{
			((::System::Void(*)(UIPopupPermanentRaid_BossSelect*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY__ONTOPERMANENTRAIDBUTTONCLICK_B__50_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnOpened_b__41_0(::MX::Data::ManagementRaidPeriodDisplayData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ManagementRaidPeriodDisplayData*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY__ONOPENED_B__41_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean UIRaidRoomEnd(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_UIRAIDROOMEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ClickPermanentRaidButtonOnEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_GET_CLICKPERMANENTRAIDBUTTONONENTER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Void OpenNewRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_OPENNEWRANKING_OFFSET))(nullptr);
		}

		::System::Void set_NewRankingCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_SET_NEWRANKINGCHECK_OFFSET))(arg, nullptr);
		}

		::System::Boolean _UIRaidRoomEnd_g__ResponseHandler|39_0(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY__UIRAIDROOMEND_G__RESPONSEHANDLER|39_0_OFFSET))(arg, nullptr);
		}

		::System::Void CheckUnlockAni()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_CHECKUNLOCKANI_OFFSET))(nullptr);
		}

		::System::Void _OnToPermanentRaidButtonClick_b__50_3(UIPermanentRaidLobby* arg)
		{
			((::System::Void(*)(UIPermanentRaidLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY__ONTOPERMANENTRAIDBUTTONCLICK_B__50_3_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void _OnToPermanentRaidButtonClick_b__50_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY__ONTOPERMANENTRAIDBUTTONCLICK_B__50_2_OFFSET))(nullptr);
		}

		::System::Void OnClickDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_ONCLICKDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClickPermanentRaidButtonOnEnter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_SET_CLICKPERMANENTRAIDBUTTONONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCompensateChanceLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REFRESHCOMPENSATECHANCELABEL_OFFSET))(nullptr);
		}

		::System::Void _OnToPermanentRaidButtonClick_b__50_1(UIPermanentRaidLobby* arg)
		{
			((::System::Void(*)(UIPermanentRaidLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY__ONTOPERMANENTRAIDBUTTONCLICK_B__50_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnAfterTutorial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_ONAFTERTUTORIAL_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_NewRankingCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_GET_NEWRANKINGCHECK_OFFSET))(nullptr);
		}

		::System::Void RefreshRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REFRESHRANKING_OFFSET))(nullptr);
		}

		::System::Void OnClickSeasonReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_ONCLICKSEASONREWARD_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

