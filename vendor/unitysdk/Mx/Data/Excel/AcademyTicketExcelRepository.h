#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_SELECT_LOCATIONRANKSUMS_OFFSET UNITYSDK_OFFSET(0x19C8330)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19C8730)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C88A0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_SELECT_LOCATIONRANKSUM_OFFSET UNITYSDK_OFFSET(0x19C88E0)
#define MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_SELECTFIRST_LOCATIONRANKSUM_OFFSET UNITYSDK_OFFSET(0x19C8BE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyTicketExcelRepository_TypeDefinitionIndex = 16605;

	class AcademyTicketExcelRepository : public ::FlatData::AttendanceCountRule
	{
	public:
		Il2CppObject* Select_LocationRankSums(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_SELECT_LOCATIONRANKSUMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_LocationRankSum(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_SELECT_LOCATIONRANKSUM_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_LocationRankSum(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYTICKETEXCELREPOSITORY_SELECTFIRST_LOCATIONRANKSUM_OFFSET))(arg, arg, nullptr);
		}

	};
}

