#pragma once
#include "unitysdk.h"

class UIScenarioMode_ChapterDetailBase;
class EpisodeListScrollViewControllerBase;
class MXButton;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
class SwipeDir;
namespace MX::Data::Excel { class EventContentScenarioExcel; }
namespace MX::Data { class EventContentSeasonInfo; }

#define UISCENARIOMODE_CHAPTER_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x27EE9D0)
#define UISCENARIOMODE_CHAPTER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x27EEC00)
#define UISCENARIOMODE_CHAPTER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x27EEC10)
#define UISCENARIOMODE_CHAPTER_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x27EEC20)
#define UISCENARIOMODE_CHAPTER_SET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x27EEC30)
#define UISCENARIOMODE_CHAPTER_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x27EEC40)
#define UISCENARIOMODE_CHAPTER_SET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x27EEC50)
#define UISCENARIOMODE_CHAPTER_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x27EEC60)
#define UISCENARIOMODE_CHAPTER_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x27EEC70)
#define UISCENARIOMODE_CHAPTER_SETDATA_OFFSET UNITYSDK_OFFSET(0x27EEC80)
#define UISCENARIOMODE_CHAPTER_SETDATA_OFFSET UNITYSDK_OFFSET(0x27EECA0)
#define UISCENARIOMODE_CHAPTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x27EECD0)
#define UISCENARIOMODE_CHAPTER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27EEF90)
#define UISCENARIOMODE_CHAPTER_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0x27EEFD0)
#define UISCENARIOMODE_CHAPTER_SWIPE_OFFSET UNITYSDK_OFFSET(0x27EF060)
#define UISCENARIOMODE_CHAPTER_INITCHAPTERID_OFFSET UNITYSDK_OFFSET(0x27EF0E0)
#define UISCENARIOMODE_CHAPTER_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x27EF2C0)
#define UISCENARIOMODE_CHAPTER_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x27EF3D0)
#define UISCENARIOMODE_CHAPTER_REFRESHNAVIGATIONBUTTONS_OFFSET UNITYSDK_OFFSET(0x27EF4E0)
#define UISCENARIOMODE_CHAPTER_REFRESHNAVIGATIONBUTTONSINTERNAL_OFFSET UNITYSDK_OFFSET(0x27EF5C0)
#define UISCENARIOMODE_CHAPTER_REFRESH_OFFSET UNITYSDK_OFFSET(0x27EF8A0)
#define UISCENARIOMODE_CHAPTER_REFRESHINTERNAL_PLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0x27EFA00)
#define UISCENARIOMODE_CHAPTER_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27EFAB0)
#define UISCENARIOMODE_CHAPTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x27EFAF0)
#define UISCENARIOMODE_CHAPTER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x27EFB30)
#define UISCENARIOMODE_CHAPTER_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x27EFBC0)
#define UISCENARIOMODE_CHAPTER_ADDREWARDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x27EFC00)
#define UISCENARIOMODE_CHAPTER_SETREFILLHISTORYTARGETS_OFFSET UNITYSDK_OFFSET(0x27EFCD0)
#define UISCENARIOMODE_CHAPTER_REFILLEVENTHISTORYBYSTAGECLEARRECORD_OFFSET UNITYSDK_OFFSET(0x27F0190)
#define UISCENARIOMODE_CHAPTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27F0220)
#define UISCENARIOMODE_CHAPTER___N__0_OFFSET UNITYSDK_OFFSET(0x27F0230)
#define UISCENARIOMODE_CHAPTER__SETREFILLHISTORYTARGETS_B__42_0_OFFSET UNITYSDK_OFFSET(0x27F0240)
#define UISCENARIOMODE_CHAPTER__SETREFILLHISTORYTARGETS_B__42_1_OFFSET UNITYSDK_OFFSET(0x27F0330)
#define UISCENARIOMODE_CHAPTER__REFILLEVENTHISTORYBYSTAGECLEARRECORD_G__ADDHISTORYDB|43_0_OFFSET UNITYSDK_OFFSET(0x27F0400)

	inline static constexpr unsigned int UIScenarioMode_Chapter_TypeDefinitionIndex = 7721;

	class UIScenarioMode_Chapter : public Il2CppObject
	{
	public:
		UIScenarioMode_ChapterDetailBase* detail; // 0xD8
		EpisodeListScrollViewControllerBase* episodeListController; // 0xE0
		MXButton* prevButton; // 0xE8
		MXButton* nextButton; // 0xF0
		::FlatData::ScenarioModeTypes* _Type_k__BackingField; // 0xF8
		::FlatData::ScenarioModeReplayTypes* _ReplayType_k__BackingField; // 0xFC
		::System::Int64 _VolumeId_k__BackingField; // 0x100
		::System::Int64 _ChapterId_k__BackingField; // 0x108
		Il2CppObject* refillHistoryTargetScenarios; // 0x110
		Il2CppObject* refillHistoryTargetEventIds; // 0x118

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ReplayType(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_SET_REPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Void set_VolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_SET_VOLUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::System::Void set_ChapterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_SET_CHAPTERID_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_SWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void InitChapterId()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_INITCHAPTERID_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Void RefreshNavigationButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_REFRESHNAVIGATIONBUTTONS_OFFSET))(nullptr);
		}

		::System::Void RefreshNavigationButtonsInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_REFRESHNAVIGATIONBUTTONSINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_REFRESH_OFFSET))(nullptr);
		}

		::System::Void RefreshInternal_PlaySequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_REFRESHINTERNAL_PLAYSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void AddRewardSequence(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_ADDREWARDSEQUENCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetRefillHistoryTargets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_SETREFILLHISTORYTARGETS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* RefillEventHistoryByStageClearRecord()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_REFILLEVENTHISTORYBYSTAGECLEARRECORD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER___N__0_OFFSET))(nullptr);
		}

		::System::Boolean _SetRefillHistoryTargets_b__42_0(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER__SETREFILLHISTORYTARGETS_B__42_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetRefillHistoryTargets_b__42_1(::MX::Data::EventContentSeasonInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER__SETREFILLHISTORYTARGETS_B__42_1_OFFSET))(arg, nullptr);
		}

		::System::Void _RefillEventHistoryByStageClearRecord_g__AddHistoryDB|43_0(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_CHAPTER__REFILLEVENTHISTORYBYSTAGECLEARRECORD_G__ADDHISTORYDB|43_0_OFFSET))(arg, arg2, nullptr);
		}

	};

