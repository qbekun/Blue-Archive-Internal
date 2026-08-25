#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class Transform; }
class MXButton;
class UIScrollView;
class UIGrid;
class UIWeekDungeonStageUnit;
class UIWeekDungeonStageSelectContentInfo;
namespace UnityEngine { class GameObject; }
namespace FlatData { class ContentType; }
class TooltipTargetParcelTracker;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class WeekDungeonType; }

#define UIWEEKDUNGEONSTAGESELECT_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xBCAFD0)
#define UIWEEKDUNGEONSTAGESELECT_GET_FIRSTSTAGEID_OFFSET UNITYSDK_OFFSET(0xBCB3C0)
#define UIWEEKDUNGEONSTAGESELECT_SET_FIRSTSTAGEID_OFFSET UNITYSDK_OFFSET(0xBCB3D0)
#define UIWEEKDUNGEONSTAGESELECT_GET_STAGEIDTOMOVE_OFFSET UNITYSDK_OFFSET(0xBCB3E0)
#define UIWEEKDUNGEONSTAGESELECT_SET_STAGEIDTOMOVE_OFFSET UNITYSDK_OFFSET(0xBCB3F0)
#define UIWEEKDUNGEONSTAGESELECT_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xBCB400)
#define UIWEEKDUNGEONSTAGESELECT_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0xBCB410)
#define UIWEEKDUNGEONSTAGESELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBCB430)
#define UIWEEKDUNGEONSTAGESELECT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xBCB920)
#define UIWEEKDUNGEONSTAGESELECT_CREATESTACKUI_OFFSET UNITYSDK_OFFSET(0xBCBA90)
#define UIWEEKDUNGEONSTAGESELECT_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBCBB20)
#define UIWEEKDUNGEONSTAGESELECT_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBCBC10)
#define UIWEEKDUNGEONSTAGESELECT_SETEVENTREWARDINFO_OFFSET UNITYSDK_OFFSET(0xBCBD80)
#define UIWEEKDUNGEONSTAGESELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBCA410)
#define UIWEEKDUNGEONSTAGESELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBCC810)
#define UIWEEKDUNGEONSTAGESELECT_APPLYSHORTCUT_OFFSET UNITYSDK_OFFSET(0xBCCB10)
#define UIWEEKDUNGEONSTAGESELECT_SETCATEGORY_OFFSET UNITYSDK_OFFSET(0xBCC7C0)
#define UIWEEKDUNGEONSTAGESELECT_SETCONTENTS_OFFSET UNITYSDK_OFFSET(0xBCB760)
#define UIWEEKDUNGEONSTAGESELECT_SETBUTTONS_OFFSET UNITYSDK_OFFSET(0xBCCD20)
#define UIWEEKDUNGEONSTAGESELECT_SETLIST_OFFSET UNITYSDK_OFFSET(0xBCC060)
#define UIWEEKDUNGEONSTAGESELECT_CREATELIST_OFFSET UNITYSDK_OFFSET(0xBCCEA0)
#define UIWEEKDUNGEONSTAGESELECT_CHANGEWEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0xBCDB40)
#define UIWEEKDUNGEONSTAGESELECT_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xBCDD50)
#define UIWEEKDUNGEONSTAGESELECT_SETOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xBCCD90)
#define UIWEEKDUNGEONSTAGESELECT_MOVESCROLL_OFFSET UNITYSDK_OFFSET(0xBCD570)
#define UIWEEKDUNGEONSTAGESELECT_COSHOWEARNINGSTAGECLEARSTAR_OFFSET UNITYSDK_OFFSET(0xBCDD80)
#define UIWEEKDUNGEONSTAGESELECT_COPLAYSTAGEUNLOCKING_OFFSET UNITYSDK_OFFSET(0xBCDE10)
#define UIWEEKDUNGEONSTAGESELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBCDEA0)
#define UIWEEKDUNGEONSTAGESELECT__ONOPENED_G__AFTERSCENARIO|30_0_OFFSET UNITYSDK_OFFSET(0xBCDF80)

	inline static constexpr unsigned int UIWeekDungeonStageSelect_TypeDefinitionIndex = 8655;

	class UIWeekDungeonStageSelect : public Il2CppObject
	{
	public:
		UILabel* weekTitle; // 0xD8
		UILabel* chaseTitle; // 0xE0
		::UnityEngine::Transform* countLabelAnchor; // 0xE8
		MXButton* prevButton; // 0xF0
		MXButton* nextButton; // 0xF8
		UIScrollView* scrollView; // 0x100
		UIGrid* grid; // 0x108
		UIWeekDungeonStageUnit* stageUnit; // 0x110
		Il2CppObject* units; // 0x118
		UIWeekDungeonStageSelectContentInfo* contentInfo; // 0x120
		::UnityEngine::GameObject* chaserEventRewardInfo; // 0x128
		UILabel* chaserEventRewardInfoTextLabel; // 0x130
		::UnityEngine::GameObject* weekEventRewardInfo; // 0x138
		UILabel* weekEventRewardInfoTextLabel; // 0x140
		Il2CppObject* openTypes; // 0x148
		::System::Int64 _FirstStageId_k__BackingField; // 0x150
		::FlatData::ContentType* contentType; // 0x158
		::System::Int64 _StageIdToMove_k__BackingField; // 0x160
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x168

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Int64 get_FirstStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_GET_FIRSTSTAGEID_OFFSET))(nullptr);
		}

		::System::Void set_FirstStageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SET_FIRSTSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageIdToMove()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_GET_STAGEIDTOMOVE_OFFSET))(nullptr);
		}

		::System::Void set_StageIdToMove(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SET_STAGEIDTOMOVE_OFFSET))(arg, nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateStackUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_CREATESTACKUI_OFFSET))(nullptr);
		}

		::System::Boolean HandleContentSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventRewardIncreaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetEventRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SETEVENTREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyShortcut(::System::Int64 arg, TooltipTargetParcelTracker* arg2)
		{
			((::System::Void(*)(::System::Int64, TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_APPLYSHORTCUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCategory(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SETCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void SetContents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SETCONTENTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SETBUTTONS_OFFSET))(nullptr);
		}

		::System::Void SetList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SETLIST_OFFSET))(nullptr);
		}

		::System::Void CreateList(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_CREATELIST_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeWeekDungeonType(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_CHANGEWEEKDUNGEONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void SetOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_SETOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void MoveScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_MOVESCROLL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowEarningStageClearStar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_COSHOWEARNINGSTAGECLEARSTAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayStageUnlocking()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_COPLAYSTAGEUNLOCKING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_g__AfterScenario|30_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGESELECT__ONOPENED_G__AFTERSCENARIO|30_0_OFFSET))(nullptr);
		}

	};

