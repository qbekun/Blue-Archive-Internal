#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C28330)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C28370)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECTFIRST_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C28670)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C28990)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C28D90)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECT_SHOPIDS_OFFSET UNITYSDK_OFFSET(0x1C290B0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECT_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C294C0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C297D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PickupDuplicateBonusExcelRepository_TypeDefinitionIndex = 19042;

	class PickupDuplicateBonusExcelRepository : public <co_InternalInvoke>d__2
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ShopId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECTFIRST_SHOPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ShopIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECT_SHOPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ShopId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_SELECT_SHOPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

