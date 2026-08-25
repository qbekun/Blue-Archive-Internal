#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EquipmentOptionType; }
namespace MX::Logic::Equipments { class Equipment; }
namespace MX::Logic::Equipments { class EquipmentOptionCollection; }
namespace MX::Logic::Skills::LogicEffects { class EquipmentOptionChangeEffect; }

#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_SUMOF_OFFSET UNITYSDK_OFFSET(0x1137860)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_BUILDOPTIONSUMTABLE_OFFSET UNITYSDK_OFFSET(0x1137BB0)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_BATCHEQUIP_OFFSET UNITYSDK_OFFSET(0x11383B0)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_REMOVEEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1138530)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_REMOVEEXPIRED_OFFSET UNITYSDK_OFFSET(0x1138620)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_GET_EQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1138760)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_ADDEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x1138770)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1138820)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_RESETEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x1138420)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_ADDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1137F10)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_CLEAREXPIRABLE_OFFSET UNITYSDK_OFFSET(0x1138950)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_GET_EQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x1138940)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_ADDEFFECT_OFFSET UNITYSDK_OFFSET(0x11389A0)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_CALCEFFECTAPPLIEDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1137930)
#define MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_GET_OPTIONTABLE_OFFSET UNITYSDK_OFFSET(0x1138A60)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EquipmentProcessor_TypeDefinitionIndex = 13090;

	class EquipmentProcessor : public Il2CppObject
	{
	public:
		Il2CppObject* _OptionTable_k__BackingField; // 0x10
		Il2CppObject* _equipList_k__BackingField; // 0x18
		Il2CppObject* expirableEffects; // 0x20

		::System::Int64 SumOf(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Int64(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_SUMOF_OFFSET))(arg, nullptr);
		}

		::System::Void BuildOptionSumTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_BUILDOPTIONSUMTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void BatchEquip(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_BATCHEQUIP_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveEquipment(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_REMOVEEQUIPMENT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_REMOVEEXPIRED_OFFSET))(nullptr);
		}

		Il2CppObject* get_equipList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_GET_EQUIPLIST_OFFSET))(nullptr);
		}

		::System::Void AddEquipment(::MX::Logic::Equipments::Equipment* arg)
		{
			((::System::Void(*)(::MX::Logic::Equipments::Equipment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_ADDEQUIPMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetEquipments()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_RESETEQUIPMENTS_OFFSET))(nullptr);
		}

		::System::Void AddOptions(::MX::Logic::Equipments::EquipmentOptionCollection* arg)
		{
			((::System::Void(*)(::MX::Logic::Equipments::EquipmentOptionCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_ADDOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ClearExpirable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_CLEAREXPIRABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Equipments()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_GET_EQUIPMENTS_OFFSET))(nullptr);
		}

		::System::Void AddEffect(::MX::Logic::Skills::LogicEffects::EquipmentOptionChangeEffect* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::EquipmentOptionChangeEffect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_ADDEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 CalcEffectAppliedAmount(::FlatData::EquipmentOptionType* arg, ::System::Int64 arg2)
		{
			return ((::System::Int64(*)(::FlatData::EquipmentOptionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_CALCEFFECTAPPLIEDAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_OptionTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_EQUIPMENTPROCESSOR_GET_OPTIONTABLE_OFFSET))(nullptr);
		}

	};
}

