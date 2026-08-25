#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EQUIPMENTLEVELDBSCHEMA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A910C0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A910D0)
#define MX_DATA_EXCEL_EQUIPMENTLEVELDBSCHEMA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1A910E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EquipmentLevelDBSchema_TypeDefinitionIndex = 17455;

	class EquipmentLevelDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x20

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELDBSCHEMA_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EQUIPMENTLEVELDBSCHEMA_GET_LEVEL_OFFSET))(nullptr);
		}

	};
}

