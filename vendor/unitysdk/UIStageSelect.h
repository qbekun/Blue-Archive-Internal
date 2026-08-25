#pragma once
#include "unitysdk.h"

class MXButton;
class UIStageSelect_ChapterWidgets;
class UIGrid;
class UIStageSelectItemActive;
class UISprite;
namespace FlatData { class StageDifficulty; }
namespace UnityEngine { class Vector4; }
class UIScrollView;
namespace UnityEngine { class Coroutine; }
class TooltipTargetParcelTracker;
namespace MX::Data { class CampaignStageInfo; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::Data { class CampaignChapterInfo; }
namespace MX::GameLogic::DBModel { class CampaignStageHistoryDB; }
class SwipeDir;
class StageSelectListItem;
class UIPopup_MultiSweep;

#define UISTAGESELECT_COOPENSHORTCUT_OFFSET UNITYSDK_OFFSET(0xB1CE70)
#define UISTAGESELECT_COPLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xB1CF20)
#define UISTAGESELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB1CFB0)
#define UISTAGESELECT_LOADLIST_OFFSET UNITYSDK_OFFSET(0xB1CFC0)
#define UISTAGESELECT_ONCLICKHARD_OFFSET UNITYSDK_OFFSET(0xB1D0E0)
#define UISTAGESELECT_COWAITFORCREATESTAGELIST_OFFSET UNITYSDK_OFFSET(0xB1D690)
#define UISTAGESELECT_GET_CURCHAPTERINFO_OFFSET UNITYSDK_OFFSET(0xB1D280)
#define UISTAGESELECT_ONPREVSTAGE_OFFSET UNITYSDK_OFFSET(0xB1D720)
#define UISTAGESELECT_ONCHAPTERSELECT_OFFSET UNITYSDK_OFFSET(0xB18680)
#define UISTAGESELECT_COINITLIST_OFFSET UNITYSDK_OFFSET(0xB1D070)
#define UISTAGESELECT_APPLYSHORTCUT_OFFSET UNITYSDK_OFFSET(0xB1DED0)
#define UISTAGESELECT_CLEARSTATICDATA_OFFSET UNITYSDK_OFFSET(0xB1DF20)
#define UISTAGESELECT_CODISAPPEARSUBSTAGE_OFFSET UNITYSDK_OFFSET(0xB1DF70)
#define UISTAGESELECT_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0xB1E000)
#define UISTAGESELECT__SETSTAGEHIGHESTCLEARED_G__PREVCHAPTERINFO|51_0_OFFSET UNITYSDK_OFFSET(0xB1E130)
#define UISTAGESELECT_GET_SAVEFILEPATH_OFFSET UNITYSDK_OFFSET(0xB1E1A0)
#define UISTAGESELECT_DECIDETOSHOWSCENARIOMODEMESSAGEPOPUP_OFFSET UNITYSDK_OFFSET(0xB1E310)
#define UISTAGESELECT_REFRESHLISTITEM_OFFSET UNITYSDK_OFFSET(0xB1E900)
#define UISTAGESELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB1EA90)
#define UISTAGESELECT_GET_STAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB1EF40)
#define UISTAGESELECT_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xB1EF90)
#define UISTAGESELECT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB1EFA0)
#define UISTAGESELECT_CREATESTAGELIST_OFFSET UNITYSDK_OFFSET(0xB1F2D0)
#define UISTAGESELECT_COPLAYSTAGEUNLOCKING_OFFSET UNITYSDK_OFFSET(0xB1FD40)
#define UISTAGESELECT_COSHOWCHAPTERCOMPLETESTAMP_OFFSET UNITYSDK_OFFSET(0xB1FDD0)
#define UISTAGESELECT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB1FE60)
#define UISTAGESELECT_SETPREVNEXTCHAPTERBUTTONVISIBILITY_OFFSET UNITYSDK_OFFSET(0xB1FEF0)
#define UISTAGESELECT__COWAITFORCREATESTAGELIST_B__80_0_OFFSET UNITYSDK_OFFSET(0xB20030)
#define UISTAGESELECT_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0xB20040)
#define UISTAGESELECT_COINITSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0xB20060)
#define UISTAGESELECT_MOVETOSTAGE_OFFSET UNITYSDK_OFFSET(0xB200F0)
#define UISTAGESELECT___N__0_OFFSET UNITYSDK_OFFSET(0xB201A0)
#define UISTAGESELECT_OPENSTAGEINFOPOPUP_OFFSET UNITYSDK_OFFSET(0xB201B0)
#define UISTAGESELECT_ONNEXTSTAGE_OFFSET UNITYSDK_OFFSET(0xB203D0)
#define UISTAGESELECT_SWIPE_OFFSET UNITYSDK_OFFSET(0xB204B0)
#define UISTAGESELECT_ONBACK_OFFSET UNITYSDK_OFFSET(0xB20660)
#define UISTAGESELECT_CREATESTAGESELECTITEM_OFFSET UNITYSDK_OFFSET(0xB1FA40)
#define UISTAGESELECT_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB1E080)
#define UISTAGESELECT_SETSTAGEHIGHESTCLEARED_OFFSET UNITYSDK_OFFSET(0xB20900)
#define UISTAGESELECT_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB20E30)
#define UISTAGESELECT_ONCLICKNORMAL_OFFSET UNITYSDK_OFFSET(0xB21270)
#define UISTAGESELECT_APPLYSHORTCUTMULTISWEEP_OFFSET UNITYSDK_OFFSET(0xB21410)
#define UISTAGESELECT_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xB21430)
#define UISTAGESELECT_INITCURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0xB21450)
#define UISTAGESELECT_COSHOWEARNINGSTAGECLEARSTAR_OFFSET UNITYSDK_OFFSET(0xB21680)
#define UISTAGESELECT_CHECKCHAPTERSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB1DAB0)
#define UISTAGESELECT_FINDLISTITEM_OFFSET UNITYSDK_OFFSET(0xB21710)
#define UISTAGESELECT_CODISAPPEARSUBSTAGEITEM_OFFSET UNITYSDK_OFFSET(0xB21820)
#define UISTAGESELECT_REPAINT_OFFSET UNITYSDK_OFFSET(0xB1D7D0)
#define UISTAGESELECT_COSHOWNEXTCHAPTERSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB21990)
#define UISTAGESELECT__DECIDETOSHOWSCENARIOMODEMESSAGEPOPUP_B__71_0_OFFSET UNITYSDK_OFFSET(0xB21A20)
#define UISTAGESELECT_SETOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB20FB0)
#define UISTAGESELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB21AE0)
#define UISTAGESELECT_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xB21CE0)
#define UISTAGESELECT_COTONEXTCHAPTERDIRECTING_OFFSET UNITYSDK_OFFSET(0xB21E30)
#define UISTAGESELECT_CHECKSTAGELOCKOBJECTACTIVATION_OFFSET UNITYSDK_OFFSET(0xB1FB30)
#define UISTAGESELECT_INITSTAGEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB218C0)
#define UISTAGESELECT_GET_CURCHAPTERINFO_OFFSET UNITYSDK_OFFSET(0xB20E20)
#define UISTAGESELECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xB21F20)
#define UISTAGESELECT_GET_SAVEFILENAME_OFFSET UNITYSDK_OFFSET(0xB1E220)

	inline static constexpr unsigned int UIStageSelect_TypeDefinitionIndex = 8262;

	class UIStageSelect : public Il2CppObject
	{
	public:
		MXButton* BackButton; // 0xD8
		UIStageSelect_ChapterWidgets* chapterWidgets; // 0xE0
		UIGrid* StageGrid; // 0xE8
		::System::Int32 NormalStageGridCellHeight; // 0xF0
		::System::Int32 HardStageGridCellHeight; // 0xF4
		UIStageSelectItemActive* MainNormalItemRes; // 0xF8
		UIStageSelectItemActive* MainHardItemRes; // 0x100
		UIStageSelectItemActive* SubItemRes; // 0x108
		UIStageSelectItemActive* TrItemRes; // 0x110
		MXButton* NormalButton; // 0x118
		MXButton* HardButton; // 0x120
		UISprite* NormalOn; // 0x128
		UISprite* HardOn; // 0x130
		MXButton* NextButton; // 0x138
		MXButton* PrevButton; // 0x140
		Il2CppObject* hardOpenData; // 0x148
		::FlatData::StageDifficulty* stageDifficulty; // 0x0
		::UnityEngine::Vector4* clipRegion; // 0x150
		Il2CppObject* openedChapterInfoList; // 0x160
		::System::Int32 curChapterIndex; // 0x4
		UIScrollView* _scrollView; // 0x168
		::UnityEngine::Coroutine* loadListCoroutine; // 0x170
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x178
		::System::Boolean needToShowChapterCompleteStampSequence; // 0x180
		::System::Boolean needToShowNextChapterSequence; // 0x181
		::MX::Data::CampaignStageInfo* shortcutStageInfo; // 0x188
		::System::Boolean shortcutIsCampaignMainStageStrategyForcely; // 0x190
		::System::Boolean shortcutIsMultiSweep; // 0x191
		::MX::GameLogic::Parcel::ParcelKeyPair* shortcutTargetParcel; // 0x198

		::System::Collections::IEnumerator* CoOpenShortcut(::MX::Data::CampaignStageInfo* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::CampaignStageInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COOPENSHORTCUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayUnlockAnimation(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COPLAYUNLOCKANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_LOADLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickHard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONCLICKHARD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoWaitForCreateStageList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COWAITFORCREATESTAGELIST_OFFSET))(nullptr);
		}

		::MX::Data::CampaignChapterInfo* get_curChapterInfo()
		{
			return ((::MX::Data::CampaignChapterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_GET_CURCHAPTERINFO_OFFSET))(nullptr);
		}

		::System::Void OnPrevStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONPREVSTAGE_OFFSET))(nullptr);
		}

		::System::Void OnChapterSelect(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONCHAPTERSELECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoInitList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COINITLIST_OFFSET))(nullptr);
		}

		::System::Void ApplyShortcut(::MX::Data::CampaignStageInfo* arg, TooltipTargetParcelTracker* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, TooltipTargetParcelTracker*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_APPLYSHORTCUT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ClearStaticData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CLEARSTATICDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoDisappearSubStage()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CODISAPPEARSUBSTAGE_OFFSET))(nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_RESETSCROLL_OFFSET))(nullptr);
		}

		::MX::Data::CampaignChapterInfo* _SetStageHighestCleared_g__PrevChapterInfo|51_0(::System::Int32 arg)
		{
			return ((::MX::Data::CampaignChapterInfo*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT__SETSTAGEHIGHESTCLEARED_G__PREVCHAPTERINFO|51_0_OFFSET))(arg, nullptr);
		}

		::System::String* get_saveFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_GET_SAVEFILEPATH_OFFSET))(nullptr);
		}

		::System::Void DecideToShowScenarioModeMessagePopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_DECIDETOSHOWSCENARIOMODEMESSAGEPOPUP_OFFSET))(nullptr);
		}

		::System::Void RefreshListItem(::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_REFRESHLISTITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_AWAKE_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_StageDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_GET_STAGEDIFFICULTY_OFFSET))(nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void CreateStageList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CREATESTAGELIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayStageUnlocking()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COPLAYSTAGEUNLOCKING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowChapterCompleteStamp()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COSHOWCHAPTERCOMPLETESTAMP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetPrevNextChapterButtonVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_SETPREVNEXTCHAPTERBUTTONVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CoWaitForCreateStageList_b__80_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT__COWAITFORCREATESTAGELIST_B__80_0_OFFSET))(nullptr);
		}

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoInitScrollPosition()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COINITSCROLLPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* MoveToStage(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_MOVETOSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT___N__0_OFFSET))(nullptr);
		}

		::System::Void OpenStageInfoPopup(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_OPENSTAGEINFOPOPUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnNextStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONNEXTSTAGE_OFFSET))(nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_SWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONBACK_OFFSET))(nullptr);
		}

		::System::Void CreateStageSelectItem(::MX::Data::CampaignStageInfo* arg, ::MX::GameLogic::DBModel::CampaignStageHistoryDB* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::GameLogic::DBModel::CampaignStageHistoryDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CREATESTAGESELECTITEM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		UIScrollView* get_scrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void SetStageHighestCleared(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_SETSTAGEHIGHESTCLEARED_OFFSET))(arg, nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void OnClickNormal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONCLICKNORMAL_OFFSET))(nullptr);
		}

		::System::Void ApplyShortcutMultiSweep(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_APPLYSHORTCUTMULTISWEEP_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Void InitCurrentChapter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_INITCURRENTCHAPTER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowEarningStageClearStar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COSHOWEARNINGSTAGECLEARSTAR_OFFSET))(nullptr);
		}

		::System::Void CheckChapterSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHECKCHAPTERSEQUENCE_OFFSET))(nullptr);
		}

		StageSelectListItem* FindListItem(::System::Int64 arg)
		{
			return ((StageSelectListItem*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_FINDLISTITEM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoDisappearSubStageItem(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CODISAPPEARSUBSTAGEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Repaint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_REPAINT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowNextChapterSequence()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COSHOWNEXTCHAPTERSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void _DecideToShowScenarioModeMessagePopup_b__71_0(UIPopup_MultiSweep* arg)
		{
			((::System::Void(*)(UIPopup_MultiSweep*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT__DECIDETOSHOWSCENARIOMODEMESSAGEPOPUP_B__71_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_SETOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoToNextChapterDirecting(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_COTONEXTCHAPTERDIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Void CheckStageLockObjectActivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHECKSTAGELOCKOBJECTACTIVATION_OFFSET))(nullptr);
		}

		::System::Void InitStageDifficulty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_INITSTAGEDIFFICULTY_OFFSET))(nullptr);
		}

		::MX::Data::CampaignChapterInfo* get_CurChapterInfo()
		{
			return ((::MX::Data::CampaignChapterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_GET_CURCHAPTERINFO_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* get_saveFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_GET_SAVEFILENAME_OFFSET))(nullptr);
		}

	};

