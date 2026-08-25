#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MultipleConditionCheckType; }
namespace MX::Data::Excel { class WorldRaidConditionExcel; }

#define MX_DATA_WORLDRAIDCONDITIONINFO_SET_RAIDBOSSIDS_OFFSET UNITYSDK_OFFSET(0x1865B60)
#define MX_DATA_WORLDRAIDCONDITIONINFO_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1865B70)
#define MX_DATA_WORLDRAIDCONDITIONINFO_GET_SCENARIOMODEIDS_OFFSET UNITYSDK_OFFSET(0x1865B80)
#define MX_DATA_WORLDRAIDCONDITIONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1865B90)
#define MX_DATA_WORLDRAIDCONDITIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1865BA0)
#define MX_DATA_WORLDRAIDCONDITIONINFO_SET_AFTERWHENDATE_OFFSET UNITYSDK_OFFSET(0x1865F50)
#define MX_DATA_WORLDRAIDCONDITIONINFO_SET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1865F60)
#define MX_DATA_WORLDRAIDCONDITIONINFO_GET_HIDEWHENLOCKED_OFFSET UNITYSDK_OFFSET(0x1865F70)
#define MX_DATA_WORLDRAIDCONDITIONINFO_GET_RAIDBOSSIDS_OFFSET UNITYSDK_OFFSET(0x1865F80)
#define MX_DATA_WORLDRAIDCONDITIONINFO_SET_HIDEWHENLOCKED_OFFSET UNITYSDK_OFFSET(0x1865F90)
#define MX_DATA_WORLDRAIDCONDITIONINFO_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1865FA0)
#define MX_DATA_WORLDRAIDCONDITIONINFO_GET_AFTERWHENDATE_OFFSET UNITYSDK_OFFSET(0x1865FB0)
#define MX_DATA_WORLDRAIDCONDITIONINFO_SET_CAMPAIGNSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1865FC0)
#define MX_DATA_WORLDRAIDCONDITIONINFO_GET_CAMPAIGNSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1865FD0)
#define MX_DATA_WORLDRAIDCONDITIONINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1865FE0)
#define MX_DATA_WORLDRAIDCONDITIONINFO_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1865FF0)
#define MX_DATA_WORLDRAIDCONDITIONINFO_SET_SCENARIOMODEIDS_OFFSET UNITYSDK_OFFSET(0x1866000)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidConditionInfo_TypeDefinitionIndex = 15924;

	class WorldRaidConditionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Boolean _HideWhenLocked_k__BackingField; // 0x18
		::System::Int64 _AccountLevel_k__BackingField; // 0x20
		::System::DateTime* _AfterWhenDate_k__BackingField; // 0x28
		Il2CppObject* _ScenarioModeIds_k__BackingField; // 0x30
		Il2CppObject* _CampaignStageIds_k__BackingField; // 0x38
		Il2CppObject* _RaidBossIds_k__BackingField; // 0x40
		::FlatData::MultipleConditionCheckType* _MultipleConditionCheckType_k__BackingField; // 0x48

		::System::Void set_RaidBossIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_SET_RAIDBOSSIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ScenarioModeIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_GET_SCENARIOMODEIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WorldRaidConditionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WorldRaidConditionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_AfterWhenDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_SET_AFTERWHENDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_SET_ACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HideWhenLocked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_GET_HIDEWHENLOCKED_OFFSET))(nullptr);
		}

		Il2CppObject* get_RaidBossIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_GET_RAIDBOSSIDS_OFFSET))(nullptr);
		}

		::System::Void set_HideWhenLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_SET_HIDEWHENLOCKED_OFFSET))(arg, nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return (return (::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::DateTime* get_AfterWhenDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_GET_AFTERWHENDATE_OFFSET))(nullptr);
		}

		::System::Void set_CampaignStageIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_SET_CAMPAIGNSTAGEIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CampaignStageIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_GET_CAMPAIGNSTAGEIDS_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MultipleConditionCheckType(::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScenarioModeIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONINFO_SET_SCENARIOMODEIDS_OFFSET))(arg, nullptr);
		}

	};
}

