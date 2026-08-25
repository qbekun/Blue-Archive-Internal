#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class ButtonActivator;
class MXButton;
class UISprite;
class MultiSweepListScrollInfo;
class MultiSweepListScrollController;
namespace FlatData { class StageDifficulty; }

#define MULTISWEEP_LISTUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27097D0)
#define MULTISWEEP_LISTUNIT_SETSTAGESELECT_OFFSET UNITYSDK_OFFSET(0x2709A80)
#define MULTISWEEP_LISTUNIT_ONCLICKREWARDTOTAL_OFFSET UNITYSDK_OFFSET(0x2709C00)
#define MULTISWEEP_LISTUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2709DA0)
#define MULTISWEEP_LISTUNIT_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x270AF30)
#define MULTISWEEP_LISTUNIT_REFRESHEVENTREWARDTAG_OFFSET UNITYSDK_OFFSET(0x270A180)
#define MULTISWEEP_LISTUNIT_ONCLICKSELECTCHECK_OFFSET UNITYSDK_OFFSET(0x270AF40)
#define MULTISWEEP_LISTUNIT_REFRESHHARDSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x270B190)
#define MULTISWEEP_LISTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x270B4E0)
#define MULTISWEEP_LISTUNIT_REFRESHHARDSTAGEPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0x270ACF0)
#define MULTISWEEP_LISTUNIT_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x270B580)
#define MULTISWEEP_LISTUNIT_SETSTAGEREWARDLIST_OFFSET UNITYSDK_OFFSET(0x270A250)

	inline static constexpr unsigned int MultiSweep_ListUnit_TypeDefinitionIndex = 7115;

	class MultiSweep_ListUnit : public ::System::Xml::Serialization::XmlElementEventArgs
	{
	public:
		UILabel* stageIndexLabel; // 0x28
		::UnityEngine::GameObject* tagNormal; // 0x30
		::UnityEngine::GameObject* tagHard; // 0x38
		::UnityEngine::GameObject* tagEvent; // 0x40
		UILabel* eventRewardInfoTextLabel; // 0x48
		Il2CppObject* starsOn; // 0x50
		::Il2CppArray<::System::Object*>* rewardParcelCards; // 0x58
		::Il2CppArray<::System::Object*>* rewardParcelCardSelectBoxs; // 0x60
		ButtonActivator* rewardTotalButton; // 0x68
		MXButton* selectCheckButton; // 0x70
		UISprite* checkSprite; // 0x78
		UILabel* multiSweepCountTitle; // 0x80
		UILabel* hardStagePlayCountLabel; // 0x88
		::UnityEngine::GameObject* dimParent; // 0x90
		::UnityEngine::GameObject* dimHardStagePlayNotEnough; // 0x98
		::UnityEngine::GameObject* dimNotThreeStar; // 0xA0
		::System::Int64 _StageUniqueId_k__BackingField; // 0xA8
		Il2CppObject* showMoreRewardList; // 0xB0
		MultiSweepListScrollInfo* sweepStageInfo; // 0xB8
		::System::Boolean threeStar; // 0xC0
		::System::Int64 hardStagePlayCount; // 0xC8
		MultiSweepListScrollController* multiSweepListScrollController; // 0xD0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetStageSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_SETSTAGESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRewardTotal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_ONCLICKREWARDTOTAL_OFFSET))(nullptr);
		}

		::System::Void SetData(MultiSweepListScrollInfo* arg)
		{
			((::System::Void(*)(MultiSweepListScrollInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshEventRewardTag(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_REFRESHEVENTREWARDTAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSelectCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_ONCLICKSELECTCHECK_OFFSET))(nullptr);
		}

		::System::Void RefreshHardStageInfo(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_REFRESHHARDSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshHardStagePlayCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_REFRESHHARDSTAGEPLAYCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void SetStageRewardList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTISWEEP_LISTUNIT_SETSTAGEREWARDLIST_OFFSET))(nullptr);
		}

	};

