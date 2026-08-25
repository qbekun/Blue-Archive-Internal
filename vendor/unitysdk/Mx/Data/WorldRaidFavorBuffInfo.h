#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class WorldRaidFavorBuffExcel; }

#define MX_DATA_WORLDRAIDFAVORBUFFINFO_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x1866360)
#define MX_DATA_WORLDRAIDFAVORBUFFINFO_SET_BONUS_OFFSET UNITYSDK_OFFSET(0x1866370)
#define MX_DATA_WORLDRAIDFAVORBUFFINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1866380)
#define MX_DATA_WORLDRAIDFAVORBUFFINFO_GET_BONUS_OFFSET UNITYSDK_OFFSET(0x18663C0)
#define MX_DATA_WORLDRAIDFAVORBUFFINFO_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x18663D0)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidFavorBuffInfo_TypeDefinitionIndex = 15928;

	class WorldRaidFavorBuffInfo : public Il2CppObject
	{
	public:
		::System::Int64 _FavorRank_k__BackingField; // 0x10
		::System::Int64 _Bonus_k__BackingField; // 0x18

		::System::Int64 get_FavorRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDFAVORBUFFINFO_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_Bonus(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDFAVORBUFFINFO_SET_BONUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WorldRaidFavorBuffExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WorldRaidFavorBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDFAVORBUFFINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Bonus()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDFAVORBUFFINFO_GET_BONUS_OFFSET))(nullptr);
		}

		::System::Void set_FavorRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDFAVORBUFFINFO_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

	};
}

