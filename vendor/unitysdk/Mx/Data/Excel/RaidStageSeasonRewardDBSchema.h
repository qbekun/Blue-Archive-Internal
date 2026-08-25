#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDDBSCHEMA_GET_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1C4D270)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDDBSCHEMA_SET_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1C4D280)
#define MX_DATA_EXCEL_RAIDSTAGESEASONREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D290)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidStageSeasonRewardDBSchema_TypeDefinitionIndex = 19197;

	class RaidStageSeasonRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SeasonRewardId_k__BackingField; // 0x20

		::System::Int64 get_SeasonRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDDBSCHEMA_GET_SEASONREWARDID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDDBSCHEMA_SET_SEASONREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGESEASONREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

