#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A89280)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDDBSCHEMA_SET_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1A89290)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDDBSCHEMA_GET_SEASONREWARDID_OFFSET UNITYSDK_OFFSET(0x1A892A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageSeasonRewardDBSchema_TypeDefinitionIndex = 17421;

	class EliminateRaidStageSeasonRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _SeasonRewardId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDDBSCHEMA_SET_SEASONREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGESEASONREWARDDBSCHEMA_GET_SEASONREWARDID_OFFSET))(nullptr);
		}

	};
}

