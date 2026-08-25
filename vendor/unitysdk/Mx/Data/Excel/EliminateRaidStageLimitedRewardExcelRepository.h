#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_SELECT_LIMITEDREWARDIDS_OFFSET UNITYSDK_OFFSET(0x1A86A20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_SELECTFIRST_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1A86E20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A87140)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_SELECT_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0x1A872B0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A875B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageLimitedRewardExcelRepository_TypeDefinitionIndex = 17412;

	class EliminateRaidStageLimitedRewardExcelRepository : public ::FlatData::SocialMode
	{
	public:
		Il2CppObject* Select_LimitedRewardIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_SELECT_LIMITEDREWARDIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_LimitedRewardId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_SELECTFIRST_LIMITEDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_LimitedRewardId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_SELECT_LIMITEDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGELIMITEDREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

