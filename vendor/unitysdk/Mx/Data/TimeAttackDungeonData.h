#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data { class TimeAttackDungeonSeasonInfo; }
namespace MX::Data::Excel { class TimeAttackDungeonExcel; }
namespace MX::Data::Excel { class TimeAttackDungeonExcel&; }
namespace MX::Data::Excel { class TimeAttackDungeonGeasExcel; }
namespace MX::Data { class TimeAttackDungeonGeasInfo; }
namespace MX::Data { class TimeAttackDungeonGeasInfo&; }
namespace FlatData { class TimeAttackDungeonType; }
namespace MX::Data::Excel { class TimeAttackDungeonGeasExcel&; }
namespace MX::Data { class TimeAttackDungeonRewardInfo&; }
namespace FlatData { class TimeAttackDungeonRewardType; }

#define MX_DATA_TIMEATTACKDUNGEONDATA_GET_ENTERPARCELINFO_OFFSET UNITYSDK_OFFSET(0x1960FC0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETALLTIMEATTACKDUNGEONSEASONINFOS_OFFSET UNITYSDK_OFFSET(0x19610E0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1961130)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONSEASONINFO_OFFSET UNITYSDK_OFFSET(0x19623E0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x1962450)
#define MX_DATA_TIMEATTACKDUNGEONDATA_TRYGETTIMEATTACKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0x19624D0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1962530)
#define MX_DATA_TIMEATTACKDUNGEONDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x1961240)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETCURRENTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x19625B0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETCURRENTORLASTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x19626A0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETNEXTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x19627B0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETNEXTSEASONINFO_OFFSET UNITYSDK_OFFSET(0x1962910)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONGEASINFO_OFFSET UNITYSDK_OFFSET(0x1962940)
#define MX_DATA_TIMEATTACKDUNGEONDATA_TRYGETTIMEATTACKDUNGEONGEASINFO_OFFSET UNITYSDK_OFFSET(0x19629B0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONGEASINFOSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1962A10)
#define MX_DATA_TIMEATTACKDUNGEONDATA_TRYGETGEASEXCEL_OFFSET UNITYSDK_OFFSET(0x1962B00)
#define MX_DATA_TIMEATTACKDUNGEONDATA_TRYGETSEASONREWARDINFO_OFFSET UNITYSDK_OFFSET(0x1962B60)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETREWARDSFROMTOTALPOINTSUM_OFFSET UNITYSDK_OFFSET(0x1962BC0)
#define MX_DATA_TIMEATTACKDUNGEONDATA_GETREWARDSFROMTOTALPOINTSUM_OFFSET UNITYSDK_OFFSET(0x1962D40)
#define MX_DATA_TIMEATTACKDUNGEONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1962E10)

namespace MX::Data
{
	inline static constexpr unsigned int TimeAttackDungeonData_TypeDefinitionIndex = 16427;

	class TimeAttackDungeonData : public Il2CppObject
	{
	public:
		Il2CppObject* dungeonExcels; // 0x28
		Il2CppObject* geasExcels; // 0x30
		Il2CppObject* geasInfos; // 0x38
		Il2CppObject* rewardExcels; // 0x40
		Il2CppObject* rewardInfos; // 0x48
		Il2CppObject* seasonManageExcels; // 0x50
		Il2CppObject* seasonInfos; // 0x58

		::MX::GameLogic::Parcel::ParcelInfo* get_EnterParcelInfo()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GET_ENTERPARCELINFO_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllTimeAttackDungeonSeasonInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETALLTIMEATTACKDUNGEONSEASONINFOS_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::MX::Data::TimeAttackDungeonSeasonInfo* GetTimeAttackDungeonSeasonInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::TimeAttackDungeonSeasonInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONSEASONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonExcel* GetTimeAttackDungeonExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTimeAttackDungeonExcel(::System::Int64 arg, ::MX::Data::Excel::TimeAttackDungeonExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::TimeAttackDungeonExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_TRYGETTIMEATTACKDUNGEONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TimeAttackDungeonGeasExcel* GetTimeAttackDungeonGeasExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::TimeAttackDungeonGeasExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONGEASEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::MX::Data::TimeAttackDungeonSeasonInfo* GetCurrentSeasonInfo(::System::DateTime* arg)
		{
			return (return (::MX::Data::TimeAttackDungeonSeasonInfo*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETCURRENTSEASONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::TimeAttackDungeonSeasonInfo* GetCurrentOrLastSeasonInfo(::System::DateTime* arg)
		{
			return (return (::MX::Data::TimeAttackDungeonSeasonInfo*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETCURRENTORLASTSEASONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::TimeAttackDungeonSeasonInfo* GetNextSeasonInfo(::MX::Data::TimeAttackDungeonSeasonInfo* arg, ::System::DateTime* arg)
		{
			return (return (::MX::Data::TimeAttackDungeonSeasonInfo*(*)(::MX::Data::TimeAttackDungeonSeasonInfo*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETNEXTSEASONINFO_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::TimeAttackDungeonSeasonInfo* GetNextSeasonInfo(::System::DateTime* arg)
		{
			return (return (::MX::Data::TimeAttackDungeonSeasonInfo*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETNEXTSEASONINFO_OFFSET))(arg, nullptr);
		}

		::MX::Data::TimeAttackDungeonGeasInfo* GetTimeAttackDungeonGeasInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::TimeAttackDungeonGeasInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONGEASINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTimeAttackDungeonGeasInfo(::System::Int64 arg, ::MX::Data::TimeAttackDungeonGeasInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::TimeAttackDungeonGeasInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_TRYGETTIMEATTACKDUNGEONGEASINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetTimeAttackDungeonGeasInfosByType(::FlatData::TimeAttackDungeonType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TimeAttackDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETTIMEATTACKDUNGEONGEASINFOSBYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetGeasExcel(::System::Int64 arg, ::MX::Data::Excel::TimeAttackDungeonGeasExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::TimeAttackDungeonGeasExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_TRYGETGEASEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSeasonRewardInfo(::System::Int64 arg, ::MX::Data::TimeAttackDungeonRewardInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::TimeAttackDungeonRewardInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_TRYGETSEASONREWARDINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRewardsFromTotalPointSum(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETREWARDSFROMTOTALPOINTSUM_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRewardsFromTotalPointSum(::System::Int64 arg, ::System::Int64 arg, ::FlatData::TimeAttackDungeonRewardType* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::TimeAttackDungeonRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_GETREWARDSFROMTOTALPOINTSUM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

