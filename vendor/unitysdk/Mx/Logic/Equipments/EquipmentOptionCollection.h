#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EquipmentOptionType; }

#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1088560)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1089580)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x10895D0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1089630)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_GET_ALLTYPES_OFFSET UNITYSDK_OFFSET(0x1089940)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_ALLVALUES_OFFSET UNITYSDK_OFFSET(0x1089A70)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1089B20)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x10887A0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_GETOPTIONSUM_OFFSET UNITYSDK_OFFSET(0x108A060)

namespace MX::Logic::Equipments
{
	inline static constexpr unsigned int EquipmentOptionCollection_TypeDefinitionIndex = 12922;

	class EquipmentOptionCollection : public DefaultSettingsWhenEnable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::FlatData::EquipmentOptionType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::EquipmentOptionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_ADD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_ADDRANGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AllTypes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_GET_ALLTYPES_OFFSET))(nullptr);
		}

		Il2CppObject* AllValues(::FlatData::EquipmentOptionType* arg)
		{
			return ((Il2CppObject*(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_ALLVALUES_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAll(::FlatData::EquipmentOptionType* arg)
		{
			((::System::Void(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_REMOVEALL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetOptionSum(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Int64(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENTOPTIONCOLLECTION_GETOPTIONSUM_OFFSET))(arg, nullptr);
		}

	};
}

