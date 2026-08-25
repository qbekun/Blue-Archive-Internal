#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class EquipmentDB; }

#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFFBCE0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFFBCF0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_EQUIVALENT_OFFSET UNITYSDK_OFFSET(0xFFBDE0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFFBE30)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFFC190)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFFC1A0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0xFFC290)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFC250)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_SET_TIER_OFFSET UNITYSDK_OFFSET(0xFFC2A0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_CANCONSUME_OFFSET UNITYSDK_OFFSET(0xFFC2B0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFFC2C0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_TIER_OFFSET UNITYSDK_OFFSET(0xFFC2D0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFFC2E0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_CREATE_OFFSET UNITYSDK_OFFSET(0xFFC2F0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0xFFC380)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_SET_BOUNDCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFFC390)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EquipmentDB_TypeDefinitionIndex = 12594;

	class EquipmentDB : public Il2CppObject
	{
	public:
		::System::Int32 _Level_k__BackingField; // 0x28
		::System::Int64 _Exp_k__BackingField; // 0x30
		::System::Int32 _Tier_k__BackingField; // 0x38
		::System::Int64 _BoundCharacterServerId_k__BackingField; // 0x40

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Boolean Equivalent(::MX::GameLogic::DBModel::EquipmentDB* arg, ::MX::GameLogic::DBModel::EquipmentDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_EQUIVALENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_CLONE_OFFSET))(nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Tier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_SET_TIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanConsume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_CANCONSUME_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Tier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_TIER_OFFSET))(nullptr);
		}

		::System::Int64 get_BoundCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_GET_BOUNDCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* Create(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::System::Int64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_CREATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::Void set_BoundCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTDB_SET_BOUNDCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

	};
}

