#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_SELECTFIRST_RANK_OFFSET UNITYSDK_OFFSET(0x198A900)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_SELECT_RANK_OFFSET UNITYSDK_OFFSET(0x198AC20)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_SELECT_RANKS_OFFSET UNITYSDK_OFFSET(0x198AF20)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x198B320)
#define MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x198B490)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyLocationRankExcelRepository_TypeDefinitionIndex = 16578;

	class AcademyLocationRankExcelRepository : public ::FlatData::DisplayGroupType
	{
	public:
		Il2CppObject* SelectFirst_Rank(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_SELECTFIRST_RANK_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Rank(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_SELECT_RANK_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ranks(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_SELECT_RANKS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYLOCATIONRANKEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

