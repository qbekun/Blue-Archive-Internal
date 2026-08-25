#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_SELECTFIRST_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A92D10)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A93030)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A931A0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_SELECT_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A931E0)
#define MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_SELECT_EQUIPMENTIDS_OFFSET UNITYSDK_OFFSET(0x1A934E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentStatExcelRepository_TypeDefinitionIndex = 17467;

	class EquipmentStatExcelRepository : public ::FlatData::StrategyAIType
	{
	public:
		Il2CppObject* SelectFirst_EquipmentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_SELECTFIRST_EQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EquipmentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_SELECT_EQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EquipmentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATEXCELREPOSITORY_SELECT_EQUIPMENTIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

