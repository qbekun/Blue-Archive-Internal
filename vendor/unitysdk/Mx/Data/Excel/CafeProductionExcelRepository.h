#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19FA770)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_SELECT_CAFEIDS_OFFSET UNITYSDK_OFFSET(0x19FA8E0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19FACE0)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_SELECTFIRST_CAFEID_OFFSET UNITYSDK_OFFSET(0x19FAD20)
#define MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_SELECT_CAFEID_OFFSET UNITYSDK_OFFSET(0x19FB040)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeProductionExcelRepository_TypeDefinitionIndex = 16853;

	class CafeProductionExcelRepository : public ::FlatData::MiniGameTBGThemaRewardType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_CafeIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_SELECT_CAFEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_CafeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_SELECTFIRST_CAFEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CafeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEPRODUCTIONEXCELREPOSITORY_SELECT_CAFEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

