#pragma once
#include "unitysdk.h"

class UILabel;
class StageDifficultyTabController;
class UIStageSelectItemActive;
class UIScrollView;
class UIGrid;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class EventContentObject;
namespace UnityEngine { class Coroutine; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace FlatData { class StageDifficulty; }
namespace MX::Data { class EventContentStageInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class StageSelectListItem;

#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_SETSTAGEDIFFICULTYTAB_OFFSET UNITYSDK_OFFSET(0x244B650)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST__CO_REFRESHSTAGELIST_B__29_1_OFFSET UNITYSDK_OFFSET(0x244B6F0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_SHOWEARNINGSTAGECLEARSTAR_OFFSET UNITYSDK_OFFSET(0x244B720)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_ONCHANGEDSTAGEDIFFICULTYTAB_OFFSET UNITYSDK_OFFSET(0x244B7B0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x244B9A0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_SETSUBEVENTSTAGELIST_OFFSET UNITYSDK_OFFSET(0x244BA30)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_SHOWSTAGEUNLOCK_OFFSET UNITYSDK_OFFSET(0x244BAC0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x244BB50)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_REVEALEXSTAGES_OFFSET UNITYSDK_OFFSET(0x244BBE0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_INITSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x244BD10)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_REVEALEXSTAGES_OFFSET UNITYSDK_OFFSET(0x244BCA0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_SETACTIVECONTENT_OFFSET UNITYSDK_OFFSET(0x244BDC0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x244BE40)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x244BFE0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_SHOWNORMALSUBSTAGEDISAPPEAR_OFFSET UNITYSDK_OFFSET(0x244DBB0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_REFRESHSTAGELIST_OFFSET UNITYSDK_OFFSET(0x244DC40)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_SETSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x244DCD0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CREATESTAGELISTITEM_OFFSET UNITYSDK_OFFSET(0x244DD80)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_CHANGENEXTTAB_OFFSET UNITYSDK_OFFSET(0x244E210)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_REFRESHCONTENT_OFFSET UNITYSDK_OFFSET(0x244E2A0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_GETSTAGELISTITEM_OFFSET UNITYSDK_OFFSET(0x244E2B0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_GET_ISREFRESHING_OFFSET UNITYSDK_OFFSET(0x2445AF0)
#define UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_REFRESHSTAGELIST_OFFSET UNITYSDK_OFFSET(0x244B8C0)

	inline static constexpr unsigned int UIEventLobbyContentController_StageList_TypeDefinitionIndex = 5564;

	class UIEventLobbyContentController_StageList : public Il2CppObject
	{
	public:
		UILabel* stageListTitleLabel; // 0x38
		StageDifficultyTabController* stageDifficulty2Tab; // 0x40
		StageDifficultyTabController* stageDifficulty3Tab; // 0x48
		UIStageSelectItemActive* normalMainStageListItemPrefab; // 0x50
		UIStageSelectItemActive* normalSubStageListItemPrefab; // 0x58
		UIStageSelectItemActive* hardMainStageListItemPrefab; // 0x60
		UIStageSelectItemActive* hardNoneItemMainStageListItemPrefab; // 0x68
		UIScrollView* stageListScrollView; // 0x70
		UIGrid* stageListGrid; // 0x78
		::System::Single stageGridNormalCellHeight; // 0x80
		::System::Single stageGridHardCellHeight; // 0x84
		::UnityEngine::GameObject* timeOutDisableObject; // 0x88
		::UnityEngine::GameObject* challengeListLockRoot; // 0x90
		UILabel* challengeListLockDateLabel; // 0x98
		::UnityEngine::Animation* challengeListUnlockAnimation; // 0xA0
		::UnityEngine::GameObject* subEventListTitle; // 0xA8
		UILabel* subEventItemCountLabel; // 0xB0
		Il2CppObject* currStageDifficultyDict; // 0x0
		EventContentObject* eventContentObject; // 0xB8
		Il2CppObject* stageInfoListDict; // 0xC0
		::UnityEngine::Coroutine* refreshStageListCoroutine; // 0xC8
		::UnityEngine::Coroutine* revealExStagesCoroutine; // 0xD0
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0xD8
		Il2CppObject* OnDialogPlayCondition; // 0xE0

		::System::Void SetStageDifficultyTab(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_SETSTAGEDIFFICULTYTAB_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Co_RefreshStageList_b__29_1(::MX::Data::EventContentStageInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST__CO_REFRESHSTAGELIST_B__29_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowEarningStageClearStar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_SHOWEARNINGSTAGECLEARSTAR_OFFSET))(nullptr);
		}

		::System::Void OnChangedStageDifficultyTab(::System::Boolean arg, ::FlatData::StageDifficulty* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_ONCHANGEDSTAGEDIFFICULTYTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetSubEventStageList(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_SETSUBEVENTSTAGELIST_OFFSET))(arg, str, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowStageUnlock()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_SHOWSTAGEUNLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RevealExStages()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_REVEALEXSTAGES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_InitScrollPosition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_INITSCROLLPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RevealExStages()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_REVEALEXSTAGES_OFFSET))(nullptr);
		}

		::System::Void SetActiveContent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_SETACTIVECONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowNormalSubStageDisappear()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_SHOWNORMALSUBSTAGEDISAPPEAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RefreshStageList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_REFRESHSTAGELIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetScrollPosition(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_SETSCROLLPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CreateStageListItem(::MX::Data::EventContentStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CREATESTAGELISTITEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_ChangeNextTab()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_CO_CHANGENEXTTAB_OFFSET))(nullptr);
		}

		::System::Void RefreshContent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_REFRESHCONTENT_OFFSET))(nullptr);
		}

		StageSelectListItem* GetStageListItem(::System::Int64 arg)
		{
			return ((StageSelectListItem*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_GETSTAGELISTITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRefreshing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_GET_ISREFRESHING_OFFSET))(nullptr);
		}

		::System::Void RefreshStageList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_STAGELIST_REFRESHSTAGELIST_OFFSET))(nullptr);
		}

	};

