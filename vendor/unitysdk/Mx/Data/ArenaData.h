#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ConstArenaExcel; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class ArenaRewardExcel; }
namespace FlatData { class ArenaRewardType; }
namespace MX::Data::Excel { class ArenaMapExcel&; }
namespace MX::Data::Excel { class ArenaMapExcel; }
namespace MX::Data::Excel { class ArenaSeasonExcel&; }
namespace MX::Data { class ArenaNPCInfo; }
namespace MX::Data::Excel { class ArenaLevelSectionExcel&; }

#define MX_DATA_ARENADATA_GET_ARENACONST_OFFSET UNITYSDK_OFFSET(0x1873CC0)
#define MX_DATA_ARENADATA_GET_ARENACONSTENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1873CE0)
#define MX_DATA_ARENADATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1873E00)
#define MX_DATA_ARENADATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1873F80)
#define MX_DATA_ARENADATA_GETREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1876AA0)
#define MX_DATA_ARENADATA_GETTOPREWARDRANK_OFFSET UNITYSDK_OFFSET(0x1876BA0)
#define MX_DATA_ARENADATA_GETBOTTOMREWARDRANK_OFFSET UNITYSDK_OFFSET(0x1876D80)
#define MX_DATA_ARENADATA_TRYGETARENAMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1876F60)
#define MX_DATA_ARENADATA_TRYGETARENAMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1876FC0)
#define MX_DATA_ARENADATA_GETARENAMAPEXCEL_OFFSET UNITYSDK_OFFSET(0x1877100)
#define MX_DATA_ARENADATA_GETARENAMAPTABLE_OFFSET UNITYSDK_OFFSET(0x1877190)
#define MX_DATA_ARENADATA_GETARENASEASONCLOSEREWARD_OFFSET UNITYSDK_OFFSET(0x18771F0)
#define MX_DATA_ARENADATA_GETSEASONRECORDREWARDPARCELINFOLIST_OFFSET UNITYSDK_OFFSET(0x1877300)
#define MX_DATA_ARENADATA_GETOVERALLRECORDREWARDPARCELINFOLIST_OFFSET UNITYSDK_OFFSET(0x1877A90)
#define MX_DATA_ARENADATA_GETTIMEREWARDPARCELINFOLIST_OFFSET UNITYSDK_OFFSET(0x1877AB0)
#define MX_DATA_ARENADATA_GETDAILYREWARDPARCELINFOLIST_OFFSET UNITYSDK_OFFSET(0x1877BB0)
#define MX_DATA_ARENADATA_GETARENANEWRECORDREWARD_OFFSET UNITYSDK_OFFSET(0x1877320)
#define MX_DATA_ARENADATA_GETREWARDINFOSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1877CB0)
#define MX_DATA_ARENADATA_GETSEASONCLOSEREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x1877D30)
#define MX_DATA_ARENADATA_GETATTACKVICTORYREWARDS_OFFSET UNITYSDK_OFFSET(0x1877DB0)
#define MX_DATA_ARENADATA_GETDEFENSEVICTORYREWARDS_OFFSET UNITYSDK_OFFSET(0x1877EA0)
#define MX_DATA_ARENADATA_ISSEASONOPEN_OFFSET UNITYSDK_OFFSET(0x1877F90)
#define MX_DATA_ARENADATA_GETARENAOPENMAPUNIQUEIDBYRANK_OFFSET UNITYSDK_OFFSET(0x1878220)
#define MX_DATA_ARENADATA_TRYGETSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1878430)
#define MX_DATA_ARENADATA_TRYGETSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1878710)
#define MX_DATA_ARENADATA_TRYGETNEXTSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1878770)
#define MX_DATA_ARENADATA_GETARENANPCINFOBYRANK_OFFSET UNITYSDK_OFFSET(0x1878C60)
#define MX_DATA_ARENADATA_GETARENATEAMSEED_OFFSET UNITYSDK_OFFSET(0x1878D50)
#define MX_DATA_ARENADATA_GETARENARANKICONPATH_OFFSET UNITYSDK_OFFSET(0x1878E10)
#define MX_DATA_ARENADATA_TRYGETAVAILABLEARENAMAP_OFFSET UNITYSDK_OFFSET(0x1878EC0)
#define MX_DATA_ARENADATA_TRYFINDARENALEVELSECTION_OFFSET UNITYSDK_OFFSET(0x1878FE0)
#define MX_DATA_ARENADATA_TRYGETARENALEVELSECTIONENUMERABLE_OFFSET UNITYSDK_OFFSET(0x18790E0)
#define MX_DATA_ARENADATA_GETARENALEVELSECTIONENUMERABLE_OFFSET UNITYSDK_OFFSET(0x18791D0)
#define MX_DATA_ARENADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1879300)

namespace MX::Data
{
	inline static constexpr unsigned int ArenaData_TypeDefinitionIndex = 15968;

	class ArenaData : public Il2CppObject
	{
	public:
		Il2CppObject* arenaMapDic; // 0x28
		Il2CppObject* arenaNPCDic; // 0x30
		Il2CppObject* arenaRewardDic; // 0x38
		Il2CppObject* arenaSeasonDic; // 0x40
		Il2CppObject* arenaSeasonCloseRewards; // 0x48
		Il2CppObject* arenaLevelSections; // 0x50
		Il2CppObject* arenaRewardInfoDic; // 0x58
		Il2CppObject* arenaSeasonCloseRewardInfos; // 0x60
		Il2CppObject* arenaNPCInfoDic; // 0x68

		::FlatData::ConstArenaExcel* get_ArenaConst()
		{
			return (return (::FlatData::ConstArenaExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GET_ARENACONST_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ArenaConstEnterParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GET_ARENACONSTENTERPARCELINFO_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ArenaRewardExcel* GetRewardExcel(::System::Int64 arg, ::FlatData::ArenaRewardType* arg)
		{
			return (return (::MX::Data::Excel::ArenaRewardExcel*(*)(::System::Int64, ::FlatData::ArenaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetTopRewardRank(::FlatData::ArenaRewardType* arg)
		{
			return (return (::System::Int64(*)(::FlatData::ArenaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETTOPREWARDRANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetBottomRewardRank(::FlatData::ArenaRewardType* arg)
		{
			return (return (::System::Int64(*)(::FlatData::ArenaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETBOTTOMREWARDRANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetArenaMapExcel(::System::Int64 arg, ::MX::Data::Excel::ArenaMapExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ArenaMapExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_TRYGETARENAMAPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetArenaMapExcel(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::ArenaMapExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::MX::Data::Excel::ArenaMapExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_TRYGETARENAMAPEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::MX::Data::Excel::ArenaMapExcel* GetArenaMapExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::ArenaMapExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENAMAPEXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetArenaMapTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENAMAPTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetArenaSeasonCloseReward(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENASEASONCLOSEREWARD_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetSeasonRecordRewardParcelInfoList(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETSEASONRECORDREWARDPARCELINFOLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetOverallRecordRewardParcelInfoList(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETOVERALLRECORDREWARDPARCELINFOLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetTimeRewardParcelInfoList(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETTIMEREWARDPARCELINFOLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDailyRewardParcelInfoList(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETDAILYREWARDPARCELINFOLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetArenaNewRecordReward(::System::Int64 arg, ::System::Int64 arg, ::FlatData::ArenaRewardType* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::ArenaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENANEWRECORDREWARD_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetRewardInfosByType(::FlatData::ArenaRewardType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ArenaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETREWARDINFOSBYTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSeasonCloseRewardInfos(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETSEASONCLOSEREWARDINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAttackVictoryRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETATTACKVICTORYREWARDS_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefenseVictoryRewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETDEFENSEVICTORYREWARDS_OFFSET))(nullptr);
		}

		::System::Boolean IsSeasonOpen(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_ISSEASONOPEN_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetArenaOpenMapUniqueIdByRank(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENAOPENMAPUNIQUEIDBYRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonExcel(::System::DateTime* arg, ::MX::Data::Excel::ArenaSeasonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::MX::Data::Excel::ArenaSeasonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_TRYGETSEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonExcel(::System::Int64 arg, ::MX::Data::Excel::ArenaSeasonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ArenaSeasonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_TRYGETSEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetNextSeasonExcel(::System::DateTime* arg, ::MX::Data::Excel::ArenaSeasonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::MX::Data::Excel::ArenaSeasonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_TRYGETNEXTSEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::ArenaNPCInfo* GetArenaNPCInfoByRank(::System::Int64 arg)
		{
			return (return (::MX::Data::ArenaNPCInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENANPCINFOBYRANK_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetArenaTeamSeed(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::UInt32(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENATEAMSEED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetArenaRankIconPath(::System::Int64 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENARANKICONPATH_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetAvailableArenaMap(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::ArenaMapExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::ArenaMapExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_TRYGETAVAILABLEARENAMAP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryFindArenaLevelSection(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::Excel::ArenaLevelSectionExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::Excel::ArenaLevelSectionExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_TRYFINDARENALEVELSECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetArenaLevelSectionEnumerable(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_TRYGETARENALEVELSECTIONENUMERABLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetArenaLevelSectionEnumerable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_GETARENALEVELSECTIONENUMERABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ARENADATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

