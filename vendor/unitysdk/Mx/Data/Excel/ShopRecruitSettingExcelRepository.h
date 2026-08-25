#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C81240)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C81540)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C81860)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C819D0)
#define MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C81DD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRecruitSettingExcelRepository_TypeDefinitionIndex = 19439;

	class ShopRecruitSettingExcelRepository : public <>c
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITSETTINGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

