#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x19C72F0)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19C7610)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x19C7A10)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19C7D10)
#define MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C7E80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyRewardExcelRepository_TypeDefinitionIndex = 16598;

	class AcademyRewardExcelRepository : public ::FlatData::AttendanceType
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

