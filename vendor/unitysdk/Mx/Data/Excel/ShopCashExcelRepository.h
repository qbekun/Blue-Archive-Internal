#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C72430)
#define MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C72750)
#define MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C72790)
#define MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C72900)
#define MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C72D00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopCashExcelRepository_TypeDefinitionIndex = 19373;

	class ShopCashExcelRepository : public SaveDataInternal
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPCASHEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

