#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class AssistRelation; }
namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::GameLogic::DBModel { class GearDB; }
namespace MX::GameLogic::DBModel { class CostumeDB; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ASSISTCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFE3300)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xFE3310)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFE3320)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFE3330)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFE3340)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE3350)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xFE3360)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xFE3380)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_GEARDB_OFFSET UNITYSDK_OFFSET(0xFE3390)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE33A0)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ISTSAINTERACTION_OFFSET UNITYSDK_OFFSET(0xFE3430)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xFE3440)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFE3450)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xFE3460)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xFE3470)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ASSISTCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFE3480)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ISMULLIGAN_OFFSET UNITYSDK_OFFSET(0xFE3490)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_COSTUMEDB_OFFSET UNITYSDK_OFFSET(0xFE34A0)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_GEARDB_OFFSET UNITYSDK_OFFSET(0xFE3560)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_HASGEAR_OFFSET UNITYSDK_OFFSET(0xFE3580)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xFE35A0)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ISMULLIGAN_OFFSET UNITYSDK_OFFSET(0xFE35C0)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_HASWEAPON_OFFSET UNITYSDK_OFFSET(0xFE35D0)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ASSISTRELATION_OFFSET UNITYSDK_OFFSET(0xFE35F0)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_WEAPONDB_OFFSET UNITYSDK_OFFSET(0xFE3600)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ASSISTRELATION_OFFSET UNITYSDK_OFFSET(0xFE3610)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_WEAPONDB_OFFSET UNITYSDK_OFFSET(0xFE3620)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_EQUIPMENTDBS_OFFSET UNITYSDK_OFFSET(0xFE3640)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xFE3650)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_CLONEASSIST_OFFSET UNITYSDK_OFFSET(0xFE3660)
#define MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ISTSAINTERACTION_OFFSET UNITYSDK_OFFSET(0xFE3E90)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AssistCharacterDB_TypeDefinitionIndex = 12487;

	class AssistCharacterDB : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x68
		::System::Int32 _SlotNumber_k__BackingField; // 0x6C
		::System::Int64 _AccountId_k__BackingField; // 0x70
		::MX::GameLogic::DBModel::AssistRelation* _AssistRelation_k__BackingField; // 0x78
		::System::Int64 _AssistCharacterServerId_k__BackingField; // 0x80
		::System::String* _NickName_k__BackingField; // 0x88
		Il2CppObject* _EquipmentDBs_k__BackingField; // 0x90
		::MX::GameLogic::DBModel::WeaponDB* _WeaponDB_k__BackingField; // 0x98
		::MX::GameLogic::DBModel::GearDB* _GearDB_k__BackingField; // 0xA0
		::System::Int64 _CostumeId_k__BackingField; // 0xA8
		::MX::GameLogic::DBModel::CostumeDB* _costumeDB; // 0xB0
		::System::Boolean _IsMulligan_k__BackingField; // 0xB8
		::System::Boolean _IsTSAInteraction_k__BackingField; // 0xB9
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0xBC

		::System::Void set_AssistCharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ASSISTCHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_EQUIPMENTDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* get_GearDB()
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_GEARDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTSAInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ISTSAINTERACTION_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_NICKNAME_OFFSET))(nullptr);
		}

		::System::Int64 get_AssistCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ASSISTCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_IsMulligan(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ISMULLIGAN_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CostumeDB* get_CostumeDB()
		{
			return ((::MX::GameLogic::DBModel::CostumeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_COSTUMEDB_OFFSET))(nullptr);
		}

		::System::Void set_GearDB(::MX::GameLogic::DBModel::GearDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::GearDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_GEARDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasGear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_HASGEAR_OFFSET))(nullptr);
		}

		::System::Void set_NickName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_NICKNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsMulligan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ISMULLIGAN_OFFSET))(nullptr);
		}

		::System::Boolean get_HasWeapon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_HASWEAPON_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AssistRelation* get_AssistRelation()
		{
			return ((::MX::GameLogic::DBModel::AssistRelation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_ASSISTRELATION_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::WeaponDB* get_WeaponDB()
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_WEAPONDB_OFFSET))(nullptr);
		}

		::System::Void set_AssistRelation(::MX::GameLogic::DBModel::AssistRelation* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistRelation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ASSISTRELATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_WeaponDB(::MX::GameLogic::DBModel::WeaponDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WeaponDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_WEAPONDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EquipmentDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_GET_EQUIPMENTDBS_OFFSET))(nullptr);
		}

		::System::Void set_AccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ACCOUNTID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AssistCharacterDB* CloneAssist()
		{
			return ((::MX::GameLogic::DBModel::AssistCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_CLONEASSIST_OFFSET))(nullptr);
		}

		::System::Void set_IsTSAInteraction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ASSISTCHARACTERDB_SET_ISTSAINTERACTION_OFFSET))(arg, nullptr);
		}

	};
}

