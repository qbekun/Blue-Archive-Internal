#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19FBFC0)
#define MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_SELECTFIRST_CAFEID_RANK_OFFSET UNITYSDK_OFFSET(0x19FC130)
#define MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_SELECT_CAFEID_RANK_OFFSET UNITYSDK_OFFSET(0x19FC530)
#define MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_SELECT_CAFEID_RANK_OFFSET UNITYSDK_OFFSET(0x19FC910)
#define MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19FCEB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeRankExcelRepository_TypeDefinitionIndex = 16860;

	class CafeRankExcelRepository : public ::FlatData::MissionCategory
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CafeId_Rank(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_SELECTFIRST_CAFEID_RANK_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CafeId_Rank(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_SELECT_CAFEID_RANK_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CafeId_Rank(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_SELECT_CAFEID_RANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

