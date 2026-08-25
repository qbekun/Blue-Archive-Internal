#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FavorLevelExcel&; }
namespace MX::Data { class FavorLevelReward&; }
namespace MX::Data { class FavorLevelReward; }

#define MX_DATA_FAVORDATA_LEVELUP_OFFSET UNITYSDK_OFFSET(0x18D8F10)
#define MX_DATA_FAVORDATA_GETMAXFAVORLEVELBYCHARACTERSTARGRADE_OFFSET UNITYSDK_OFFSET(0x18D9300)
#define MX_DATA_FAVORDATA_SET_LEVELTABLE_OFFSET UNITYSDK_OFFSET(0x18D93A0)
#define MX_DATA_FAVORDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D93B0)
#define MX_DATA_FAVORDATA_GETCHARACTERFAVORSTAT_OFFSET UNITYSDK_OFFSET(0x18D9480)
#define MX_DATA_FAVORDATA_TRYGETFAVORLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x18D97F0)
#define MX_DATA_FAVORDATA_GETREQUIREDEXPTOLEVELUP_OFFSET UNITYSDK_OFFSET(0x18D9250)
#define MX_DATA_FAVORDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x18D9850)
#define MX_DATA_FAVORDATA_TRYGETCHARACTERFAVORSTAT_OFFSET UNITYSDK_OFFSET(0x18DA1A0)
#define MX_DATA_FAVORDATA_FINDLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x18DA250)
#define MX_DATA_FAVORDATA_TRYGETLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x18DA280)
#define MX_DATA_FAVORDATA_HASLEVELEXCEL_OFFSET UNITYSDK_OFFSET(0x18DA350)
#define MX_DATA_FAVORDATA_TRYGETMAXFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x18D9190)
#define MX_DATA_FAVORDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18DA3A0)
#define MX_DATA_FAVORDATA_GET_LEVELTABLE_OFFSET UNITYSDK_OFFSET(0x18DA440)

namespace MX::Data
{
	inline static constexpr unsigned int FavorData_TypeDefinitionIndex = 16121;

	class FavorData : public Il2CppObject
	{
	public:
		Il2CppObject* _LevelTable_k__BackingField; // 0x28
		Il2CppObject* rewardTable; // 0x30

		::System::Boolean Levelup(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, int64_t&* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_LEVELUP_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 GetMaxFavorLevelByCharacterStarGrade(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_GETMAXFAVORLEVELBYCHARACTERSTARGRADE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_LevelTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_SET_LEVELTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterFavorStat(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_GETCHARACTERFAVORSTAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetFavorLevelExcel(::System::Int64 arg, ::MX::Data::Excel::FavorLevelExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::FavorLevelExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_TRYGETFAVORLEVELEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetRequiredExpToLevelup(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_GETREQUIREDEXPTOLEVELUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetCharacterFavorStat(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::FavorLevelReward&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::FavorLevelReward&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_TRYGETCHARACTERFAVORSTAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Data::FavorLevelReward* FindLevelReward(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::MX::Data::FavorLevelReward*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_FINDLEVELREWARD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLevelReward(::System::Int64 arg, ::System::Int64 arg, ::MX::Data::FavorLevelReward&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::Data::FavorLevelReward&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_TRYGETLEVELREWARD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasLevelExcel(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_HASLEVELEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMaxFavorLevel(::System::Int64 arg, ::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_TRYGETMAXFAVORLEVEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* get_LevelTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORDATA_GET_LEVELTABLE_OFFSET))(nullptr);
		}

	};
}

