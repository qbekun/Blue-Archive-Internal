#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A869F0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDDBSCHEMA_SET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1A86A00)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDDBSCHEMA_GET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1A86A10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageLimitedRewardDBSchema_TypeDefinitionIndex = 17407;

	class EliminateRaidStageLimitedRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _LimitedRewardId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LimitedRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDDBSCHEMA_SET_LIMITEDREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LimitedRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDDBSCHEMA_GET_LIMITEDREWARDID_OFFSET))(nullptr);
		}

	};
}

