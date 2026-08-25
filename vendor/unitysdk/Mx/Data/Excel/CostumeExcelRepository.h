#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A78B80)
#define MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECT_COSTUMEUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1A78BC0)
#define MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECTFIRST_COSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A78FC0)
#define MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECTFIRST_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A792E0)
#define MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECT_COSTUMEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A79600)
#define MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A79910)
#define MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECT_COSTUMEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A79C10)
#define MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A7A020)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CostumeExcelRepository_TypeDefinitionIndex = 17363;

	class CostumeExcelRepository : public ::FlatData::ShopFilterType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CostumeUniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECT_COSTUMEUNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CostumeGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECTFIRST_COSTUMEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CostumeUniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECTFIRST_COSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECT_COSTUMEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeUniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_SELECT_COSTUMEGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COSTUMEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

