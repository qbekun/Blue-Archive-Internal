#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class TimeAttackDungeonSeasonManageExcel; }

#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1860E30)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1860E40)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x18610A0)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x18610B0)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_ENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x18610C0)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x18610D0)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x18610E0)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_UISLOT_OFFSET UNITYSDK_OFFSET(0x18610F0)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_DIFFICULTYGEASIDS_OFFSET UNITYSDK_OFFSET(0x1861100)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_DIFFICULTYGEASIDS_OFFSET UNITYSDK_OFFSET(0x1861110)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_ROOMLIFETIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x1861120)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1861130)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x1861140)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_ROOMLIFETIMEINSECONDS_OFFSET UNITYSDK_OFFSET(0x1861150)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_UISLOT_OFFSET UNITYSDK_OFFSET(0x1861160)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1861170)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x1861180)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1861190)
#define MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_ENDNOTELABELSTARTDATE_OFFSET UNITYSDK_OFFSET(0x18611A0)

namespace MX::Data
{
	inline static constexpr unsigned int TimeAttackDungeonSeasonInfo_TypeDefinitionIndex = 15906;

	class TimeAttackDungeonSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		Il2CppObject* _DifficultyGeasIds_k__BackingField; // 0x18
		::System::Int64 _DungeonId_k__BackingField; // 0x20
		::System::DateTime* _StartDate_k__BackingField; // 0x28
		::System::DateTime* _EndDate_k__BackingField; // 0x30
		::System::DateTime* _EndNoteLabelStartDate_k__BackingField; // 0x38
		::System::Int64 _RewardId_k__BackingField; // 0x40
		::System::Int64 _RoomLifeTimeInSeconds_k__BackingField; // 0x48
		::System::Int64 _UISlot_k__BackingField; // 0x50

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::TimeAttackDungeonSeasonManageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_REWARDID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndNoteLabelStartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_ENDNOTELABELSTARTDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_UISlot(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_UISLOT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DifficultyGeasIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_DIFFICULTYGEASIDS_OFFSET))(nullptr);
		}

		::System::Void set_DifficultyGeasIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_DIFFICULTYGEASIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RoomLifeTimeInSeconds(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_ROOMLIFETIMEINSECONDS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_DungeonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_DUNGEONID_OFFSET))(nullptr);
		}

		::System::Int64 get_RoomLifeTimeInSeconds()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_ROOMLIFETIMEINSECONDS_OFFSET))(nullptr);
		}

		::System::Int64 get_UISlot()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_GET_UISLOT_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DungeonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_DUNGEONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EndNoteLabelStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TIMEATTACKDUNGEONSEASONINFO_SET_ENDNOTELABELSTARTDATE_OFFSET))(arg, nullptr);
		}

	};
}

