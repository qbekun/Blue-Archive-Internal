#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A28A20)
#define MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A28E20)
#define MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A28F90)
#define MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A29290)
#define MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A295B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterGearExcelRepository_TypeDefinitionIndex = 17019;

	class CharacterGearExcelRepository : public ::FlatData::CurrencyAdditionalChargeType
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERGEAREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

