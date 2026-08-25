#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_RANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1009EF0)
#define MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_HPPERCENTSCOREPOINT_OFFSET UNITYSDK_OFFSET(0x1009F00)
#define MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_BESTRANKINGPOINT_OFFSET UNITYSDK_OFFSET(0x1009F10)
#define MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_CLEARTIMEPOINT_OFFSET UNITYSDK_OFFSET(0x1009F20)
#define MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1009F30)
#define MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_DEFAULTCLEARPOINT_OFFSET UNITYSDK_OFFSET(0x1009F80)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int RaidScoreInfo_TypeDefinitionIndex = 12707;

	class RaidScoreInfo : public Il2CppObject
	{
	public:
		::System::Int64 _ClearTimePoint_k__BackingField; // 0x10
		::System::Int64 _HPPercentScorePoint_k__BackingField; // 0x18
		::System::Int64 _DefaultClearPoint_k__BackingField; // 0x20
		::System::Int64 _RankingPoint_k__BackingField; // 0x28
		::System::Int64 _BestRankingPoint_k__BackingField; // 0x30

		::System::Int64 get_RankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_RANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_HPPercentScorePoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_HPPERCENTSCOREPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_BestRankingPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_BESTRANKINGPOINT_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearTimePoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_CLEARTIMEPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int64 get_DefaultClearPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RAIDSCOREINFO_GET_DEFAULTCLEARPOINT_OFFSET))(nullptr);
		}

	};
}

