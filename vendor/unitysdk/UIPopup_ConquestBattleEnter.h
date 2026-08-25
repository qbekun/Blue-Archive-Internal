#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
class UIGrid;
class UIScrollView;
class MXButton;
namespace UnityEngine { class Transform; }
class UIAdmissionDisplay;
namespace MX::Conquest { class ConquestTile; }
namespace MX::Conquest { class ConquestUnit; }
namespace MX::Data { class ConquestData; }
namespace MX::GameLogic::DBModel { class ConquestTileDB; }
class UIConquest;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIEnemyInfoPopup;
namespace MX::Data::Excel { class ConquestUnitExcel; }

#define UIPOPUP_CONQUESTBATTLEENTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2367210)
#define UIPOPUP_CONQUESTBATTLEENTER_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x23676A0)
#define UIPOPUP_CONQUESTBATTLEENTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2367790)
#define UIPOPUP_CONQUESTBATTLEENTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2367910)
#define UIPOPUP_CONQUESTBATTLEENTER_SETDATA_OFFSET UNITYSDK_OFFSET(0x234C350)
#define UIPOPUP_CONQUESTBATTLEENTER_SETREWARDS_OFFSET UNITYSDK_OFFSET(0x2367B00)
#define UIPOPUP_CONQUESTBATTLEENTER_SETUI_OFFSET UNITYSDK_OFFSET(0x2367A10)
#define UIPOPUP_CONQUESTBATTLEENTER_REFRESHADMISSION_OFFSET UNITYSDK_OFFSET(0x2368CC0)
#define UIPOPUP_CONQUESTBATTLEENTER_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2368F10)
#define UIPOPUP_CONQUESTBATTLEENTER__ONCLICKOPENENEMYINFO_B__49_0_OFFSET UNITYSDK_OFFSET(0x2368F80)
#define UIPOPUP_CONQUESTBATTLEENTER_ONCLICKOPENENEMYINFO_OFFSET UNITYSDK_OFFSET(0x2368FD0)
#define UIPOPUP_CONQUESTBATTLEENTER_ONCLICKENTERCONQUESTBATTLE_OFFSET UNITYSDK_OFFSET(0x23690B0)
#define UIPOPUP_CONQUESTBATTLEENTER_SETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x23683F0)
#define UIPOPUP_CONQUESTBATTLEENTER__SETDATA_B__41_0_OFFSET UNITYSDK_OFFSET(0x2369880)
#define UIPOPUP_CONQUESTBATTLEENTER_SETTEAMICON_OFFSET UNITYSDK_OFFSET(0x2368B50)
#define UIPOPUP_CONQUESTBATTLEENTER_SETSTAGESTARS_OFFSET UNITYSDK_OFFSET(0x2368AD0)
#define UIPOPUP_CONQUESTBATTLEENTER_ONCLICKGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x23698B0)
#define UIPOPUP_CONQUESTBATTLEENTER_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x23699F0)
#define UIPOPUP_CONQUESTBATTLEENTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2369A80)
#define UIPOPUP_CONQUESTBATTLEENTER_ENTERCONQUESTBATTLE_OFFSET UNITYSDK_OFFSET(0x23697C0)

	inline static constexpr unsigned int UIPopup_ConquestBattleEnter_TypeDefinitionIndex = 5072;

	class UIPopup_ConquestBattleEnter : public Il2CppObject
	{
	public:
		UILabel* RecommandLevel; // 0xD8
		UILabel* stageNumberLabel; // 0xE0
		UILabel* stageName; // 0xE8
		UISprite* stageThemeSprite; // 0xF0
		Il2CppObject* missionDisplays; // 0xF8
		::UnityEngine::GameObject* normalRewardRoot; // 0x100
		::UnityEngine::GameObject* challengeRewardRoot; // 0x108
		UIGrid* normalRewardGrid; // 0x110
		UIGrid* challengeRewardGrid; // 0x118
		UIScrollView* normalRewardScroll; // 0x120
		UIScrollView* challengeRewardScroll; // 0x128
		UILabel* normalRewardEmptyLabel; // 0x130
		UILabel* challengeRewardEmptyLabel; // 0x138
		UIGrid* rewardGrid; // 0x140
		UIScrollView* rewardScroll; // 0x148
		UILabel* rewardEmptyLabel; // 0x150
		MXButton* enterButton; // 0x158
		MXButton* closeButton; // 0x160
		MXButton* enemyInfoButton; // 0x168
		MXButton* nonTeamEnemyInfoButton; // 0x170
		MXButton* groupBuffButton; // 0x178
		::UnityEngine::Transform* TeamIconRoot; // 0x180
		::UnityEngine::Transform* NoneTeamIconRoot; // 0x188
		::Il2CppArray<::System::Object*>* teamIcons; // 0x190
		::Il2CppArray<::System::Object*>* schoolTexture; // 0x198
		::Il2CppArray<::System::Object*>* noneSprite; // 0x1A0
		UIAdmissionDisplay* admissionDisplay; // 0x1A8
		Il2CppObject* rewardParcels; // 0x1B0
		Il2CppObject* normalRewardParcels; // 0x1B8
		Il2CppObject* challengeRewardParcels; // 0x1C0
		::MX::Conquest::ConquestTile* selectedTileData; // 0x1C8
		::MX::Conquest::ConquestUnit* selectedUnit; // 0x1D0
		::MX::Data::ConquestData* conquestData; // 0x1D8
		::MX::GameLogic::DBModel::ConquestTileDB* conquestTileDB; // 0x1E0
		UIConquest* uiConquest; // 0x1E8
		::System::Boolean useConquestManageEchelon; // 0x1F0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_AWAKE_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Conquest::ConquestTile* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_SETREWARDS_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_SETUI_OFFSET))(nullptr);
		}

		::System::Void RefreshAdmission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_REFRESHADMISSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickOpenEnemyInfo_b__49_0(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER__ONCLICKOPENENEMYINFO_B__49_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenEnemyInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_ONCLICKOPENENEMYINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickEnterConquestBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_ONCLICKENTERCONQUESTBATTLE_OFFSET))(nullptr);
		}

		::System::Void SetStageInfo(::MX::Data::Excel::ConquestUnitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_SETSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetData_b__41_0(::MX::GameLogic::DBModel::ConquestTileDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestTileDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER__SETDATA_B__41_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetTeamIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_SETTEAMICON_OFFSET))(nullptr);
		}

		::System::Void SetStageStars(::MX::Data::Excel::ConquestUnitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_SETSTAGESTARS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickGroupBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_ONCLICKGROUPBUFF_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void EnterConquestBattle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUESTBATTLEENTER_ENTERCONQUESTBATTLE_OFFSET))(nullptr);
		}

	};

