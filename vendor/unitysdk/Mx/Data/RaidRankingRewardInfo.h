#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class RaidRankingRewardExcel; }
namespace MX::Data::Excel { class EliminateRaidRankingRewardExcel; }

#define MX_DATA_RAIDRANKINGREWARDINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1857F50)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1857F60)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1857F70)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1857F80)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1857F90)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1857FA0)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTKR_OFFSET UNITYSDK_OFFSET(0x1857FB0)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTKR_OFFSET UNITYSDK_OFFSET(0x1857FC0)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDKR_OFFSET UNITYSDK_OFFSET(0x1857FD0)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDKR_OFFSET UNITYSDK_OFFSET(0x1857FE0)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTTW_OFFSET UNITYSDK_OFFSET(0x1857FF0)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTTW_OFFSET UNITYSDK_OFFSET(0x1858000)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDTW_OFFSET UNITYSDK_OFFSET(0x1858010)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDTW_OFFSET UNITYSDK_OFFSET(0x1858020)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTASIA_OFFSET UNITYSDK_OFFSET(0x1858030)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTASIA_OFFSET UNITYSDK_OFFSET(0x1858040)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDASIA_OFFSET UNITYSDK_OFFSET(0x1858050)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDASIA_OFFSET UNITYSDK_OFFSET(0x1858060)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTNA_OFFSET UNITYSDK_OFFSET(0x1858070)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTNA_OFFSET UNITYSDK_OFFSET(0x1858080)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDNA_OFFSET UNITYSDK_OFFSET(0x1858090)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDNA_OFFSET UNITYSDK_OFFSET(0x18580A0)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTGLOBAL_OFFSET UNITYSDK_OFFSET(0x18580B0)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTGLOBAL_OFFSET UNITYSDK_OFFSET(0x18580C0)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDGLOBAL_OFFSET UNITYSDK_OFFSET(0x18580D0)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDGLOBAL_OFFSET UNITYSDK_OFFSET(0x18580E0)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_PERCENTRANKSTART_OFFSET UNITYSDK_OFFSET(0x18580F0)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_PERCENTRANKSTART_OFFSET UNITYSDK_OFFSET(0x1858100)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_PERCENTRANKEND_OFFSET UNITYSDK_OFFSET(0x1858110)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_PERCENTRANKEND_OFFSET UNITYSDK_OFFSET(0x1858120)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_TIER_OFFSET UNITYSDK_OFFSET(0x1858130)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_TIER_OFFSET UNITYSDK_OFFSET(0x1858140)
#define MX_DATA_RAIDRANKINGREWARDINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1858150)
#define MX_DATA_RAIDRANKINGREWARDINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x1858160)
#define MX_DATA_RAIDRANKINGREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1858180)
#define MX_DATA_RAIDRANKINGREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1858410)
#define MX_DATA_RAIDRANKINGREWARDINFO_GETRANKSTART_OFFSET UNITYSDK_OFFSET(0x18586A0)
#define MX_DATA_RAIDRANKINGREWARDINFO_GETRANKEND_OFFSET UNITYSDK_OFFSET(0x1858790)

namespace MX::Data
{
	inline static constexpr unsigned int RaidRankingRewardInfo_TypeDefinitionIndex = 15877;

	class RaidRankingRewardInfo : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Int64 _RankStartKr_k__BackingField; // 0x28
		::System::Int64 _RankEndKr_k__BackingField; // 0x30
		::System::Int64 _RankStartTw_k__BackingField; // 0x38
		::System::Int64 _RankEndTw_k__BackingField; // 0x40
		::System::Int64 _RankStartAsia_k__BackingField; // 0x48
		::System::Int64 _RankEndAsia_k__BackingField; // 0x50
		::System::Int64 _RankStartNa_k__BackingField; // 0x58
		::System::Int64 _RankEndNa_k__BackingField; // 0x60
		::System::Int64 _RankStartGlobal_k__BackingField; // 0x68
		::System::Int64 _RankEndGlobal_k__BackingField; // 0x70
		::System::Int64 _PercentRankStart_k__BackingField; // 0x78
		::System::Int64 _PercentRankEnd_k__BackingField; // 0x80
		::System::Int32 _Tier_k__BackingField; // 0x88
		Il2CppObject* _Rewards_k__BackingField; // 0x90

		::FlatData::ContentType* get_ContentType()
		{
			return (return (::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankStartKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTKR_OFFSET))(nullptr);
		}

		::System::Void set_RankStartKr(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTKR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankEndKr()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDKR_OFFSET))(nullptr);
		}

		::System::Void set_RankEndKr(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDKR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankStartTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTTW_OFFSET))(nullptr);
		}

		::System::Void set_RankStartTw(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTTW_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankEndTw()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDTW_OFFSET))(nullptr);
		}

		::System::Void set_RankEndTw(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDTW_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankStartAsia()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTASIA_OFFSET))(nullptr);
		}

		::System::Void set_RankStartAsia(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTASIA_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankEndAsia()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDASIA_OFFSET))(nullptr);
		}

		::System::Void set_RankEndAsia(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDASIA_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankStartNa()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTNA_OFFSET))(nullptr);
		}

		::System::Void set_RankStartNa(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTNA_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankEndNa()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDNA_OFFSET))(nullptr);
		}

		::System::Void set_RankEndNa(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDNA_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankStartGlobal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKSTARTGLOBAL_OFFSET))(nullptr);
		}

		::System::Void set_RankStartGlobal(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKSTARTGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RankEndGlobal()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_RANKENDGLOBAL_OFFSET))(nullptr);
		}

		::System::Void set_RankEndGlobal(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_RANKENDGLOBAL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PercentRankStart()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_PERCENTRANKSTART_OFFSET))(nullptr);
		}

		::System::Void set_PercentRankStart(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_PERCENTRANKSTART_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PercentRankEnd()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_PERCENTRANKEND_OFFSET))(nullptr);
		}

		::System::Void set_PercentRankEnd(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_PERCENTRANKEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Tier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_TIER_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_TIER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::RaidRankingRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::RaidRankingRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EliminateRaidRankingRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EliminateRaidRankingRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetRankStart(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GETRANKSTART_OFFSET))(str, nullptr);
		}

		::System::Int64 GetRankEnd(::System::String* str)
		{
			return (return (::System::Int64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_RAIDRANKINGREWARDINFO_GETRANKEND_OFFSET))(str, nullptr);
		}

	};
}

