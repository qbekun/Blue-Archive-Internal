#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
class UIGrid;
class UIScrollView;
class MXButton;
class UIAdmissionDisplay;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class BoxCollider; }
class StageSweep;
namespace FlatData { class ContentType; }
namespace MX::GameLogic::DBModel { class WeekDungeonStageHistoryDB; }
namespace MX::GameLogic::DBModel { class SchoolDungeonStageHistoryDB; }
class TooltipTargetParcelTracker;
namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class From;
namespace FlatData { class EchelonType; }

#define UIWEEKDUNGEONENTERPOPUP_GET_ENTERBUTTONCOL_OFFSET UNITYSDK_OFFSET(0xBC2700)
#define UIWEEKDUNGEONENTERPOPUP_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xBC27D0)
#define UIWEEKDUNGEONENTERPOPUP_GET_STAGESWEEPWIDGET_OFFSET UNITYSDK_OFFSET(0xBC28C0)
#define UIWEEKDUNGEONENTERPOPUP_GET_ISWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC2930)
#define UIWEEKDUNGEONENTERPOPUP_SET_ISWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC2940)
#define UIWEEKDUNGEONENTERPOPUP_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBC2950)
#define UIWEEKDUNGEONENTERPOPUP_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBC2960)
#define UIWEEKDUNGEONENTERPOPUP_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBC2970)
#define UIWEEKDUNGEONENTERPOPUP_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBC2980)
#define UIWEEKDUNGEONENTERPOPUP_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xBC2990)
#define UIWEEKDUNGEONENTERPOPUP_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xBC29A0)
#define UIWEEKDUNGEONENTERPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xBC29C0)
#define UIWEEKDUNGEONENTERPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBC2E50)
#define UIWEEKDUNGEONENTERPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBC2FF0)
#define UIWEEKDUNGEONENTERPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xBC31E0)
#define UIWEEKDUNGEONENTERPOPUP_SETUI_OFFSET UNITYSDK_OFFSET(0xBC3350)
#define UIWEEKDUNGEONENTERPOPUP_SETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xBC3680)
#define UIWEEKDUNGEONENTERPOPUP_SETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xBC4560)
#define UIWEEKDUNGEONENTERPOPUP_SETSTAGESTARS_OFFSET UNITYSDK_OFFSET(0xBC3800)
#define UIWEEKDUNGEONENTERPOPUP_SETSTAGESTARS_OFFSET UNITYSDK_OFFSET(0xBC46E0)
#define UIWEEKDUNGEONENTERPOPUP_SETREWARDS_OFFSET UNITYSDK_OFFSET(0xBC3880)
#define UIWEEKDUNGEONENTERPOPUP_SETBUTTON_OFFSET UNITYSDK_OFFSET(0xBC4120)
#define UIWEEKDUNGEONENTERPOPUP_SETBUTTON_OFFSET UNITYSDK_OFFSET(0xBC4810)
#define UIWEEKDUNGEONENTERPOPUP_REFRESHADMISSION_OFFSET UNITYSDK_OFFSET(0xBC4150)
#define UIWEEKDUNGEONENTERPOPUP_GETREDUCEDCOSTPARCELS_OFFSET UNITYSDK_OFFSET(0xBC4F20)
#define UIWEEKDUNGEONENTERPOPUP_REFRESHADMISSION_OFFSET UNITYSDK_OFFSET(0xBC4840)
#define UIWEEKDUNGEONENTERPOPUP_SETSWEEP_OFFSET UNITYSDK_OFFSET(0xBC4070)
#define UIWEEKDUNGEONENTERPOPUP_SETSWEEP_OFFSET UNITYSDK_OFFSET(0xBC4760)
#define UIWEEKDUNGEONENTERPOPUP_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBC5080)
#define UIWEEKDUNGEONENTERPOPUP_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBC5150)
#define UIWEEKDUNGEONENTERPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xBC52C0)
#define UIWEEKDUNGEONENTERPOPUP_ONCLICKENEMYINFO_OFFSET UNITYSDK_OFFSET(0xBC5350)
#define UIWEEKDUNGEONENTERPOPUP_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xBC55D0)
#define UIWEEKDUNGEONENTERPOPUP_ONCLICKENTERWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC56C0)
#define UIWEEKDUNGEONENTERPOPUP_ONCLICKENTERSCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC5E80)
#define UIWEEKDUNGEONENTERPOPUP_GETFROMBYECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xBC67A0)
#define UIWEEKDUNGEONENTERPOPUP_REQUESTENTERWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC6820)
#define UIWEEKDUNGEONENTERPOPUP_REQUESTENTERSCHOOLDUNGEON_OFFSET UNITYSDK_OFFSET(0xBC68D0)
#define UIWEEKDUNGEONENTERPOPUP_ONCLICKCLEARDECK_OFFSET UNITYSDK_OFFSET(0xBC6980)
#define UIWEEKDUNGEONENTERPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xBC6B30)
#define UIWEEKDUNGEONENTERPOPUP__AWAKE_B__43_0_OFFSET UNITYSDK_OFFSET(0xBC6B40)

	inline static constexpr unsigned int UIWeekDungeonEnterPopup_TypeDefinitionIndex = 8633;

	class UIWeekDungeonEnterPopup : public Il2CppObject
	{
	public:
		UILabel* RecommandLevel; // 0xD8
		UILabel* stageNumberLabel; // 0xE0
		UILabel* stageName; // 0xE8
		UISprite* stageThemeSprite; // 0xF0
		Il2CppObject* missionDisplays; // 0xF8
		UIGrid* rewardGrid; // 0x100
		UIScrollView* rewardScroll; // 0x108
		MXButton* enterButton; // 0x110
		MXButton* closeButton; // 0x118
		MXButton* enemyInfoButton; // 0x120
		UIAdmissionDisplay* ticketAdmissionDisplay; // 0x128
		UIAdmissionDisplay* apAdmissionDisplay; // 0x130
		::UnityEngine::GameObject* apAndTicketAdmissions; // 0x138
		UIAdmissionDisplay* apOfTwoAdmissionDisplay; // 0x140
		UIAdmissionDisplay* ticketOfTwoAdmissionDisplay; // 0x148
		MXButton* clearDeckButton; // 0x150
		::UnityEngine::BoxCollider* enterButtonCol; // 0x158
		Il2CppObject* rewardParcels; // 0x160
		StageSweep* stageSweepWidget; // 0x168
		::System::Boolean _IsWeekDungeon_k__BackingField; // 0x170
		::System::Int64 _StageId_k__BackingField; // 0x178
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x180
		::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* weekDungeonHistoryDB; // 0x188
		::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* schoolDungeonHistoryDB; // 0x190
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x198

		::UnityEngine::BoxCollider* get_EnterButtonCol()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GET_ENTERBUTTONCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		StageSweep* get_StageSweepWidget()
		{
			return ((StageSweep*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GET_STAGESWEEPWIDGET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWeekDungeon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GET_ISWEEKDUNGEON_OFFSET))(nullptr);
		}

		::System::Void set_IsWeekDungeon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SET_ISWEEKDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Boolean arg, ::System::Int64 arg2, TooltipTargetParcelTracker* arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int64, TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETUI_OFFSET))(nullptr);
		}

		::System::Void SetStageInfo(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetStageInfo(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetStageStars(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETSTAGESTARS_OFFSET))(arg, nullptr);
		}

		::System::Void SetStageStars(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETSTAGESTARS_OFFSET))(arg, nullptr);
		}

		::System::Void SetRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETREWARDS_OFFSET))(nullptr);
		}

		::System::Void SetButton(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetButton(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshAdmission(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_REFRESHADMISSION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetReducedCostParcels(::FlatData::ContentType* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::FlatData::ContentType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GETREDUCEDCOSTPARCELS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshAdmission(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_REFRESHADMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSweep(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETSWEEP_OFFSET))(arg, nullptr);
		}

		::System::Void SetSweep(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_SETSWEEP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleContentSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickEnemyInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_ONCLICKENEMYINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void OnClickEnterWeekDungeon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_ONCLICKENTERWEEKDUNGEON_OFFSET))(nullptr);
		}

		::System::Void OnClickEnterSchoolDungeon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_ONCLICKENTERSCHOOLDUNGEON_OFFSET))(nullptr);
		}

		From* GetFromByEchelonType(::FlatData::EchelonType* arg)
		{
			return ((From*(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_GETFROMBYECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEnterWeekDungeon(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_REQUESTENTERWEEKDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Void RequestEnterSchoolDungeon(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_REQUESTENTERSCHOOLDUNGEON_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClearDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_ONCLICKCLEARDECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__43_0(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONENTERPOPUP__AWAKE_B__43_0_OFFSET))(arg, nullptr);
		}

	};

