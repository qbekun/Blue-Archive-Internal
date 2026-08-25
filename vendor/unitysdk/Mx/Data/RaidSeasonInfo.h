#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class RaidSeasonManageExcel; }
namespace FlatData { class RaidSeasonType; }

#define MX_DATA_RAIDSEASONINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1858880)
#define MX_DATA_RAIDSEASONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1858890)
#define MX_DATA_RAIDSEASONINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x18588A0)
#define MX_DATA_RAIDSEASONINFO_GET_SEASONDISPLAY_OFFSET UNITYSDK_OFFSET(0x18588B0)
#define MX_DATA_RAIDSEASONINFO_SET_SEASONDISPLAY_OFFSET UNITYSDK_OFFSET(0x18588C0)
#define MX_DATA_RAIDSEASONINFO_GET_SEASONSTART_OFFSET UNITYSDK_OFFSET(0x18588D0)
#define MX_DATA_RAIDSEASONINFO_SET_SEASONSTART_OFFSET UNITYSDK_OFFSET(0x18588E0)
#define MX_DATA_RAIDSEASONINFO_GET_SEASONEND_OFFSET UNITYSDK_OFFSET(0x18588F0)
#define MX_DATA_RAIDSEASONINFO_SET_SEASONEND_OFFSET UNITYSDK_OFFSET(0x1858900)
#define MX_DATA_RAIDSEASONINFO_GET_SETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x1858910)
#define MX_DATA_RAIDSEASONINFO_SET_SETTLEMENTENDDATE_OFFSET UNITYSDK_OFFSET(0x1858920)
#define MX_DATA_RAIDSEASONINFO_GET_ENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1858930)
#define MX_DATA_RAIDSEASONINFO_SET_ENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1858940)
#define MX_DATA_RAIDSEASONINFO_GET_OPENRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1858950)
#define MX_DATA_RAIDSEASONINFO_SET_OPENRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x1858960)
#define MX_DATA_RAIDSEASONINFO_GET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1858970)
#define MX_DATA_RAIDSEASONINFO_SET_RANKINGREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1858980)
#define MX_DATA_RAIDSEASONINFO_GET_MAXSEASONREWARDGAUAGE_OFFSET UNITYSDK_OFFSET(0x1858990)
#define MX_DATA_RAIDSEASONINFO_SET_MAXSEASONREWARDGAUAGE_OFFSET UNITYSDK_OFFSET(0x18589A0)
#define MX_DATA_RAIDSEASONINFO_GET_SEASONREWARDDAMAGETABLE_OFFSET UNITYSDK_OFFSET(0x18589B0)
#define MX_DATA_RAIDSEASONINFO_SET_SEASONREWARDDAMAGETABLE_OFFSET UNITYSDK_OFFSET(0x18589C0)
#define MX_DATA_RAIDSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1856ED0)
#define MX_DATA_RAIDSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18589D0)
#define MX_DATA_RAIDSEASONINFO_GETSEASONTYPE_OFFSET UNITYSDK_OFFSET(0x1858DD0)

namespace MX::Data
{
	inline static constexpr unsigned int RaidSeasonInfo_TypeDefinitionIndex = 15878;

	class RaidSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _SeasonDisplay_k__BackingField; // 0x18
		::System::DateTime* _SeasonStart_k__BackingField; // 0x20
		::System::DateTime* _SeasonEnd_k__BackingField; // 0x28
		::System::DateTime* _SettlementEndDate_k__BackingField; // 0x30
		::System::DateTime* _EndNoteLabelStartDate_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _OpenRaidBossGroup_k__BackingField; // 0x40
		::System::Int64 _RankingRewardGroupId_k__BackingField; // 0x48
		::System::Int64 _MaxSeasonRewardGauage_k__BackingField; // 0x50
		Il2CppObject* _SeasonRewardDamageTable_k__BackingField; // 0x58

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonDisplay()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_SEASONDISPLAY_OFFSET))(nullptr);
		}

		::System::Void set_SeasonDisplay(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_SEASONDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SeasonStart()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_SEASONSTART_OFFSET))(nullptr);
		}

		::System::Void set_SeasonStart(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_SEASONSTART_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SeasonEnd()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_SEASONEND_OFFSET))(nullptr);
		}

		::System::Void set_SeasonEnd(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_SEASONEND_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SettlementEndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_SETTLEMENTENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_SettlementEndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_SETTLEMENTENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndNoteLabelStartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_ENDNOTELABELSTARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_EndNoteLabelStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_ENDNOTELABELSTARTDATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_OpenRaidBossGroup()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_OPENRAIDBOSSGROUP_OFFSET))(nullptr);
		}

		::System::Void set_OpenRaidBossGroup(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_OPENRAIDBOSSGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankingRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_RANKINGREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_RankingRewardGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_RANKINGREWARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxSeasonRewardGauage()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_MAXSEASONREWARDGAUAGE_OFFSET))(nullptr);
		}

		::System::Void set_MaxSeasonRewardGauage(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_MAXSEASONREWARDGAUAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SeasonRewardDamageTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GET_SEASONREWARDDAMAGETABLE_OFFSET))(nullptr);
		}

		::System::Void set_SeasonRewardDamageTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_SET_SEASONREWARDDAMAGETABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::RaidSeasonManageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::RaidSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::RaidSeasonType* GetSeasonType(::System::DateTime* arg)
		{
			return (return (::FlatData::RaidSeasonType*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDSEASONINFO_GETSEASONTYPE_OFFSET))(arg, nullptr);
		}

	};
}

