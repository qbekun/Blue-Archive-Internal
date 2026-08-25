#pragma once
#include "unitysdk.h"

class UISchoolDungeonStageSelectContentInfo;
class UIScrollView;
class UIGrid;
class UIWeekDungeonStageUnit;
namespace FlatData { class SchoolDungeonType; }
class TooltipTargetParcelTracker;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISCHOOLDUNGEONSTAGESELECT_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x281A1E0)
#define UISCHOOLDUNGEONSTAGESELECT_GET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x281A3A0)
#define UISCHOOLDUNGEONSTAGESELECT_SET_DUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x281A3B0)
#define UISCHOOLDUNGEONSTAGESELECT_GET_STAGEIDTOMOVE_OFFSET UNITYSDK_OFFSET(0x281A3C0)
#define UISCHOOLDUNGEONSTAGESELECT_SET_STAGEIDTOMOVE_OFFSET UNITYSDK_OFFSET(0x281A3D0)
#define UISCHOOLDUNGEONSTAGESELECT_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x281A3E0)
#define UISCHOOLDUNGEONSTAGESELECT_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x281A3F0)
#define UISCHOOLDUNGEONSTAGESELECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x281A410)
#define UISCHOOLDUNGEONSTAGESELECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x281A5A0)
#define UISCHOOLDUNGEONSTAGESELECT_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x281A790)
#define UISCHOOLDUNGEONSTAGESELECT_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x281A820)
#define UISCHOOLDUNGEONSTAGESELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x281A0A0)
#define UISCHOOLDUNGEONSTAGESELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x281A8B0)
#define UISCHOOLDUNGEONSTAGESELECT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x281A950)
#define UISCHOOLDUNGEONSTAGESELECT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x281AAB0)
#define UISCHOOLDUNGEONSTAGESELECT_APPLYSHORTCUT_OFFSET UNITYSDK_OFFSET(0x281AAE0)
#define UISCHOOLDUNGEONSTAGESELECT_SETCONTENTS_OFFSET UNITYSDK_OFFSET(0x281AA00)
#define UISCHOOLDUNGEONSTAGESELECT_SETLIST_OFFSET UNITYSDK_OFFSET(0x281ACE0)
#define UISCHOOLDUNGEONSTAGESELECT_CREATELIST_OFFSET UNITYSDK_OFFSET(0x281B390)
#define UISCHOOLDUNGEONSTAGESELECT_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x281BAE0)
#define UISCHOOLDUNGEONSTAGESELECT_SETOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x281B280)
#define UISCHOOLDUNGEONSTAGESELECT_MOVESCROLL_OFFSET UNITYSDK_OFFSET(0x281B4F0)
#define UISCHOOLDUNGEONSTAGESELECT_COSHOWEARNINGSTAGECLEARSTAR_OFFSET UNITYSDK_OFFSET(0x281BB00)
#define UISCHOOLDUNGEONSTAGESELECT_COPLAYSTAGEUNLOCKING_OFFSET UNITYSDK_OFFSET(0x281BB70)
#define UISCHOOLDUNGEONSTAGESELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x281BBE0)

	inline static constexpr unsigned int UISchoolDungeonStageSelect_TypeDefinitionIndex = 7825;

	class UISchoolDungeonStageSelect : public Il2CppObject
	{
	public:
		UISchoolDungeonStageSelectContentInfo* contentInfo; // 0xD8
		UIScrollView* scrollView; // 0xE0
		UIGrid* grid; // 0xE8
		UIWeekDungeonStageUnit* stageUnit; // 0xF0
		Il2CppObject* units; // 0xF8
		::FlatData::SchoolDungeonType* _DungeonType_k__BackingField; // 0x100
		::System::Int64 _StageIdToMove_k__BackingField; // 0x108
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x110

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::FlatData::SchoolDungeonType* get_DungeonType()
		{
			return ((::FlatData::SchoolDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_GET_DUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DungeonType(::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_SET_DUNGEONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageIdToMove()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_GET_STAGEIDTOMOVE_OFFSET))(nullptr);
		}

		::System::Void set_StageIdToMove(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_SET_STAGEIDTOMOVE_OFFSET))(arg, nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleContentSweepResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_HANDLECONTENTSWEEPRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventRewardIncreaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void ApplyShortcut(::System::Int64 arg, TooltipTargetParcelTracker* arg2)
		{
			((::System::Void(*)(::System::Int64, TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_APPLYSHORTCUT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetContents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_SETCONTENTS_OFFSET))(nullptr);
		}

		::System::Void SetList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_SETLIST_OFFSET))(nullptr);
		}

		::System::Void CreateList(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_CREATELIST_OFFSET))(arg, nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void SetOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_SETOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void MoveScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_MOVESCROLL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoShowEarningStageClearStar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_COSHOWEARNINGSTAGECLEARSTAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayStageUnlocking()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_COPLAYSTAGEUNLOCKING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONSTAGESELECT_.CTOR_OFFSET))(nullptr);
		}

	};

