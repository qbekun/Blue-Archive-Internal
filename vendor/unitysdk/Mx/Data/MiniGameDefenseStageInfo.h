#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Data::Excel { class MiniGameDefenseStageExcel; }
namespace FlatData { class ContentType; }
namespace FlatData { class StageTopography; }
namespace FlatData { class EchelonExtensionType; }
namespace FlatData { class StageDifficulty; }

#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1900650)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1900670)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1900690)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGECOSTID_OFFSET UNITYSDK_OFFSET(0x19006A0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_MINIGAMEDEFENSEFIXEDSTATID_OFFSET UNITYSDK_OFFSET(0x19006C0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x19004E0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x19006E0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1900700)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STARGOALTYPEORDER_OFFSET UNITYSDK_OFFSET(0x1900710)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_FIRSTCLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x1900720)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_DISPLAYEDREWARD_OFFSET UNITYSDK_OFFSET(0x1900930)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18FE4D0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1900940)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET__EXCEL_OFFSET UNITYSDK_OFFSET(0x1900960)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_DEFENSEFORMATIONBGPREFAB_OFFSET UNITYSDK_OFFSET(0x1900970)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1900990)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x19009B0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_STARGOALTYPEORDER_OFFSET UNITYSDK_OFFSET(0x19009D0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x19009E0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_STAGEREWARD_OFFSET UNITYSDK_OFFSET(0x1900A00)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_ENTERCOSTS_OFFSET UNITYSDK_OFFSET(0x1900A10)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_STARGOALS_OFFSET UNITYSDK_OFFSET(0x1900A20)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_SWEEPRAWREWARDS_OFFSET UNITYSDK_OFFSET(0x1900A30)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_DISPLAYEDREWARD_OFFSET UNITYSDK_OFFSET(0x1900C40)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGENUMBER_OFFSET UNITYSDK_OFFSET(0x1900C50)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_ENTERCOSTS_OFFSET UNITYSDK_OFFSET(0x1900C70)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x18FE4F0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STARGOALS_OFFSET UNITYSDK_OFFSET(0x1900C80)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEHINT_OFFSET UNITYSDK_OFFSET(0x1900C90)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEREWARD_OFFSET UNITYSDK_OFFSET(0x1900CB0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18FF6D0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_CLEARSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1900CC0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1900CD0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x1900CF0)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x1900D10)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEDIFFICULTYLOCALIZEHASH_OFFSET UNITYSDK_OFFSET(0x1900D30)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_DEFENSEFORMATIONBGPREFABSCALE_OFFSET UNITYSDK_OFFSET(0x1900D50)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1900D70)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_ENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1900D90)
#define MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_THREESTARREWARDS_OFFSET UNITYSDK_OFFSET(0x1900DA0)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameDefenseStageInfo_TypeDefinitionIndex = 16203;

	class MiniGameDefenseStageInfo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _EnterScenarioGroupId_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _ClearScenarioGroupId_k__BackingField; // 0x18
		Il2CppObject* _StarGoals_k__BackingField; // 0x20
		Il2CppObject* _StarGoalTypeOrder_k__BackingField; // 0x28
		::MX::GameLogic::Parcel::ParcelCost* _EnterCosts_k__BackingField; // 0x30
		Il2CppObject* _StageReward_k__BackingField; // 0x38
		Il2CppObject* _DisplayedReward_k__BackingField; // 0x40
		::MX::Data::Excel::MiniGameDefenseStageExcel* __excel_k__BackingField; // 0x48

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_StageRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEREWARDID_OFFSET))(nullptr);
		}

		::System::Void set_EnterScenarioGroupId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_ENTERSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageCostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGECOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_MinigameDefenseFixedStatId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_MINIGAMEDEFENSEFIXEDSTATID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEID_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Void set_ClearScenarioGroupId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_CLEARSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StarGoalTypeOrder()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STARGOALTYPEORDER_OFFSET))(nullptr);
		}

		Il2CppObject* get_FirstClearRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_FIRSTCLEARREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_DisplayedReward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_DISPLAYEDREWARD_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_StageDisplay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEDISPLAY_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameDefenseStageExcel* get__excel()
		{
			return (return (::MX::Data::Excel::MiniGameDefenseStageExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET__EXCEL_OFFSET))(nullptr);
		}

		::System::String* get_DefenseFormationBGPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_DEFENSEFORMATIONBGPREFAB_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_EchelonExtensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_ECHELONEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_StarGoalTypeOrder(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_STARGOALTYPEORDER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Void set_StageReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_STAGEREWARD_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_EnterCosts()
		{
			return (return (::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_ENTERCOSTS_OFFSET))(nullptr);
		}

		::System::Void set_StarGoals(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_STARGOALS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SweepRawRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_SWEEPRAWREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_DisplayedReward(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_DISPLAYEDREWARD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageNumber()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EnterCosts(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_SET_ENTERCOSTS_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return (return (::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_StarGoals()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STARGOALS_OFFSET))(nullptr);
		}

		::System::UInt32 get_StageHint()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEHINT_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageReward()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEREWARD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameDefenseStageExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDefenseStageExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ClearScenarioGroupId()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_CLEARSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommendLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_RECOMMENDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::UInt32 get_StageDifficultyLocalizeHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGEDIFFICULTYLOCALIZEHASH_OFFSET))(nullptr);
		}

		::System::Single get_DefenseFormationBGPrefabScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_DEFENSEFORMATIONBGPREFABSCALE_OFFSET))(nullptr);
		}

		::System::String* get_StageName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_STAGENAME_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_EnterScenarioGroupId()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_ENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ThreeStarRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMEDEFENSESTAGEINFO_GET_THREESTARREWARDS_OFFSET))(nullptr);
		}

	};
}

