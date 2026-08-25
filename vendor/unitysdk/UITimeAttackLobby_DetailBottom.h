#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class ButtonActivator;
namespace UnityEngine { class GameObject; }
class UIWidget;
namespace MX::Data { class TimeAttackDungeonSeasonInfo; }
namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }

#define UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKCREATE_OFFSET UNITYSDK_OFFSET(0xB68010)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_SETDATA_OFFSET UNITYSDK_OFFSET(0xB63BB0)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKSWEEP_OFFSET UNITYSDK_OFFSET(0xB68810)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKCREATEROOMS_OFFSET UNITYSDK_OFFSET(0xB68020)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_YIELDSETTIME_OFFSET UNITYSDK_OFFSET(0xB68DF0)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_.CTOR_OFFSET UNITYSDK_OFFSET(0xB68E80)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_SETOPENED_OFFSET UNITYSDK_OFFSET(0xB686C0)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKRECORDPOPUP_OFFSET UNITYSDK_OFFSET(0xB69120)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_GET_CLOSEDWIDGET_OFFSET UNITYSDK_OFFSET(0xB692D0)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_GET_CURRENTSEASON_OFFSET UNITYSDK_OFFSET(0xB69370)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_GET_OPENEDWIDGET_OFFSET UNITYSDK_OFFSET(0xB69080)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKPRACTICE_OFFSET UNITYSDK_OFFSET(0xB69380)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_INITWIDGET_OFFSET UNITYSDK_OFFSET(0xB69390)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKGIVEUP_OFFSET UNITYSDK_OFFSET(0xB69400)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_AWAKE_OFFSET UNITYSDK_OFFSET(0xB69790)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB69D00)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKREWARDINFO_OFFSET UNITYSDK_OFFSET(0xB69D90)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_SETROOMLIFETIME_OFFSET UNITYSDK_OFFSET(0xB68EF0)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_SET_CURRENTSEASON_OFFSET UNITYSDK_OFFSET(0xB69F40)
#define UITIMEATTACKLOBBY_DETAILBOTTOM_SETCLOSED_OFFSET UNITYSDK_OFFSET(0xB685A0)

	inline static constexpr unsigned int UITimeAttackLobby_DetailBottom_TypeDefinitionIndex = 8444;

	class UITimeAttackLobby_DetailBottom : public Il2CppObject
	{
	public:
		UILabel* seasonBestRecordLabel; // 0x18
		UILabel* todayBestRecordLabel; // 0x20
		UILabel* currentRecordLabel; // 0x28
		MXButton* rewardInfoButton; // 0x30
		ButtonActivator* recordPopupButton; // 0x38
		::UnityEngine::GameObject* closedRoot; // 0x40
		UIWidget* closedWidget; // 0x48
		MXButton* sweepButton; // 0x50
		::UnityEngine::GameObject* disableSweep; // 0x58
		MXButton* practiceButton; // 0x60
		MXButton* createButton; // 0x68
		::UnityEngine::GameObject* openedRoot; // 0x70
		UIWidget* openedWidget; // 0x78
		::UnityEngine::GameObject* isPracticeDisplay; // 0x80
		::Il2CppArray<::System::Object*>* playCounts; // 0x88
		MXButton* giveupButton; // 0x90
		UILabel* lifeTimeLabel; // 0x98
		::System::DateTime* _RoomEndTime; // 0xA0
		::MX::Data::TimeAttackDungeonSeasonInfo* _CurrentSeason_k__BackingField; // 0xA8

		::System::Void OnClickCreate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKCREATE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSweep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKSWEEP_OFFSET))(nullptr);
		}

		::System::Void OnClickCreateRooms(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKCREATEROOMS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* YieldSetTime()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_YIELDSETTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetOpened(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_SETOPENED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickRecordPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKRECORDPOPUP_OFFSET))(nullptr);
		}

		UIWidget* get_ClosedWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_GET_CLOSEDWIDGET_OFFSET))(nullptr);
		}

		::MX::Data::TimeAttackDungeonSeasonInfo* get_CurrentSeason()
		{
			return ((::MX::Data::TimeAttackDungeonSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_GET_CURRENTSEASON_OFFSET))(nullptr);
		}

		UIWidget* get_OpenedWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_GET_OPENEDWIDGET_OFFSET))(nullptr);
		}

		::System::Void OnClickPractice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKPRACTICE_OFFSET))(nullptr);
		}

		::System::Void InitWidget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_INITWIDGET_OFFSET))(nullptr);
		}

		::System::Void OnClickGiveup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKGIVEUP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_ONCLICKREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void SetRoomLifeTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_SETROOMLIFETIME_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSeason(::MX::Data::TimeAttackDungeonSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_SET_CURRENTSEASON_OFFSET))(arg, nullptr);
		}

		::System::Void SetClosed(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACKLOBBY_DETAILBOTTOM_SETCLOSED_OFFSET))(arg, arg2, nullptr);
		}

	};

