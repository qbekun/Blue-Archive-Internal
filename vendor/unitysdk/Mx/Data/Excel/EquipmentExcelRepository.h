#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A8FD60)
#define MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A8FED0)
#define MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A901F0)
#define MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A90230)
#define MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A90530)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentExcelRepository_TypeDefinitionIndex = 17453;

	class EquipmentExcelRepository : public ::FlatData::ToastType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

