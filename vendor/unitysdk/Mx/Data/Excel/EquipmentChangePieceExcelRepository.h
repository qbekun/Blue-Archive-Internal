#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A8C440)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECTFIRST_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C7A0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8CAC0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_EQUIPMENTIDS_OFFSET UNITYSDK_OFFSET(0x1A8CDC0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECTFIRST_CHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8D1C0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_CHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8D4E0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_CHANGEEQUIPMENTIDS_OFFSET UNITYSDK_OFFSET(0x1A8D7F0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECTFIRST_EQUIPMENTID_CHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8DC00)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_EQUIPMENTID_CHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8E000)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_EQUIPMENTID_CHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8E3E0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E980)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentChangePieceExcelRepository_TypeDefinitionIndex = 17446;

	class EquipmentChangePieceExcelRepository : public ::FlatData::MessagePopupButtonType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EquipmentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECTFIRST_EQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EquipmentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_EQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EquipmentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_EQUIPMENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ChangeEquipmentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECTFIRST_CHANGEEQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ChangeEquipmentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_CHANGEEQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ChangeEquipmentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_CHANGEEQUIPMENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EquipmentId_ChangeEquipmentId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECTFIRST_EQUIPMENTID_CHANGEEQUIPMENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EquipmentId_ChangeEquipmentId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_EQUIPMENTID_CHANGEEQUIPMENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EquipmentId_ChangeEquipmentId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_SELECT_EQUIPMENTID_CHANGEEQUIPMENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

