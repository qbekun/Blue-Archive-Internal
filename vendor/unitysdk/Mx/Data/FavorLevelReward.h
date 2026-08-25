#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FavorLevelRewardExcel; }

#define MX_DATA_FAVORLEVELREWARD_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1847A20)
#define MX_DATA_FAVORLEVELREWARD_SET_FAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1847A30)
#define MX_DATA_FAVORLEVELREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1847A40)
#define MX_DATA_FAVORLEVELREWARD_GET_ADDEDSTATS_OFFSET UNITYSDK_OFFSET(0x1847C10)
#define MX_DATA_FAVORLEVELREWARD_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1847C20)
#define MX_DATA_FAVORLEVELREWARD_GET_FAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1847C30)

namespace MX::Data
{
	inline static constexpr unsigned int FavorLevelReward_TypeDefinitionIndex = 15822;

	class FavorLevelReward : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x10
		::System::Int64 _FavorLevel_k__BackingField; // 0x18
		Il2CppObject* _AddedStats_k__BackingField; // 0x20

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORLEVELREWARD_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FavorLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORLEVELREWARD_SET_FAVORLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::FavorLevelRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::FavorLevelRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORLEVELREWARD_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AddedStats()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORLEVELREWARD_GET_ADDEDSTATS_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORLEVELREWARD_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FAVORLEVELREWARD_GET_FAVORLEVEL_OFFSET))(nullptr);
		}

	};
}

