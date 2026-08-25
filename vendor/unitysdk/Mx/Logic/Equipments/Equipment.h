#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Equipments { class Equipment; }
namespace MX::Logic::Equipments { class EquipmentOptionCollection; }
namespace MX::Logic::Data { class EquipmentSetting; }
namespace MX::Data::Excel { class EquipmentStatExcel; }
namespace MX::Data::Excel { class EquipmentExcel; }
namespace FlatData { class EquipmentOptionType; }

#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x1088330)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1088380)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1088460)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1088470)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1088480)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1088490)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_TIER_OFFSET UNITYSDK_OFFSET(0x10884A0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x10884B0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_DAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x10884C0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x10884D0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x10885A0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_HASOPTION_OFFSET UNITYSDK_OFFSET(0x1088780)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1088A70)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1088AF0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1088AC0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1088B40)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1088BB0)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_TOEQUIPMENTSETTING_OFFSET UNITYSDK_OFFSET(0x1088C40)
#define MX_LOGIC_EQUIPMENTS_EQUIPMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1088C90)

namespace MX::Logic::Equipments
{
	inline static constexpr unsigned int Equipment_TypeDefinitionIndex = 12918;

	class Equipment : public Il2CppObject
	{
	public:
		::MX::Logic::Equipments::Equipment* _Invalid_k__BackingField; // 0x0
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x20
		::System::Int64 _StackCount_k__BackingField; // 0x28
		::System::Int32 _Tier_k__BackingField; // 0x30
		::MX::Logic::Equipments::EquipmentOptionCollection* _Options_k__BackingField; // 0x38
		::System::String* _DamageFactorGroupId_k__BackingField; // 0x40

		::MX::Logic::Equipments::Equipment* get_Invalid()
		{
			return ((::MX::Logic::Equipments::Equipment*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_INVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_StackCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_STACKCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Tier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_TIER_OFFSET))(nullptr);
		}

		::MX::Logic::Equipments::EquipmentOptionCollection* get_Options()
		{
			return ((::MX::Logic::Equipments::EquipmentOptionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_OPTIONS_OFFSET))(nullptr);
		}

		::System::String* get_DamageFactorGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GET_DAMAGEFACTORGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::EquipmentSetting* arg, ::MX::Data::Excel::EquipmentStatExcel* arg2, ::MX::Data::Excel::EquipmentExcel* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::EquipmentSetting*, ::MX::Data::Excel::EquipmentStatExcel*, ::MX::Data::Excel::EquipmentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasOption(::FlatData::EquipmentOptionType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::EquipmentOptionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_HASOPTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Equipments::Equipment* arg, ::MX::Logic::Equipments::Equipment* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::Equipment*, ::MX::Logic::Equipments::Equipment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Equipments::Equipment* arg, ::MX::Logic::Equipments::Equipment* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::Equipment*, ::MX::Logic::Equipments::Equipment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Equipments::Equipment* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Equipments::Equipment*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::EquipmentSetting* ToEquipmentSetting()
		{
			return ((::MX::Logic::Data::EquipmentSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_TOEQUIPMENTSETTING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_EQUIPMENTS_EQUIPMENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

