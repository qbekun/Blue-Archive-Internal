#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EQUIPMENTSTATDBSCHEMA_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A92CE0)
#define MX_DATA_EXCEL_EQUIPMENTSTATDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A92CF0)
#define MX_DATA_EXCEL_EQUIPMENTSTATDBSCHEMA_SET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1A92D00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentStatDBSchema_TypeDefinitionIndex = 17462;

	class EquipmentStatDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EquipmentId_k__BackingField; // 0x20

		::System::Int64 get_EquipmentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATDBSCHEMA_GET_EQUIPMENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTSTATDBSCHEMA_SET_EQUIPMENTID_OFFSET))(arg, nullptr);
		}

	};
}

