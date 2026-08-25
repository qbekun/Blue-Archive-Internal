#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_GET_CHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C3F0)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_SET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C400)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C410)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C420)
#define MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_SET_CHANGEEQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A8C430)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentChangePieceDBSchema_TypeDefinitionIndex = 17435;

	class EquipmentChangePieceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EquipmentId_k__BackingField; // 0x20
		::System::Int64 _ChangeEquipmentId_k__BackingField; // 0x28

		::System::Int64 get_ChangeEquipmentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_GET_CHANGEEQUIPMENTID_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_SET_EQUIPMENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EquipmentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_GET_EQUIPMENTID_OFFSET))(nullptr);
		}

		::System::Void set_ChangeEquipmentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTCHANGEPIECEDBSCHEMA_SET_CHANGEEQUIPMENTID_OFFSET))(arg, nullptr);
		}

	};
}

