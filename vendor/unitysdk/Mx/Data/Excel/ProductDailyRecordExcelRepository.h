#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C36140)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C36460)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C36760)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C367A0)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C36BA0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductDailyRecordExcelRepository_TypeDefinitionIndex = 19105;

	class ProductDailyRecordExcelRepository : public ::MXUnderCover::UCSkillLogic
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

