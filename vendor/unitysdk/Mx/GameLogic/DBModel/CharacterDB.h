#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_EXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEA770)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_LEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEA780)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFEA790)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_EXP_OFFSET UNITYSDK_OFFSET(0xFEA880)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEA890)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFEA8A0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0xFEA8B0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_EQUIPMENTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFEA8C0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EXP_OFFSET UNITYSDK_OFFSET(0xFEA8D0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_FAVOREXP_OFFSET UNITYSDK_OFFSET(0xFEA8E0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xFEA8F0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_EQUIVALENT_OFFSET UNITYSDK_OFFSET(0xFEA900)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_ISFAVORITE_OFFSET UNITYSDK_OFFSET(0xFEAB20)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFEAB30)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFEABD0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_STARGRADE_OFFSET UNITYSDK_OFFSET(0xFEABE0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFEABF0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE33B0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0xFEAC00)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SHOULDSERIALIZEPOTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0xFEAC10)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_ISFAVORITE_OFFSET UNITYSDK_OFFSET(0xFEAC50)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0xFEAC60)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEAC70)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_PUBLICSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEAC80)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_LEADERSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEAC90)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EXTRAPASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEACA0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SHOULDSERIALIZEEQUIPMENTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFEACB0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EQUIPMENTSLOTANDDBIDS_OFFSET UNITYSDK_OFFSET(0xFEAA20)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xFEACF0)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EQUIPMENTSERVERIDS_OFFSET UNITYSDK_OFFSET(0xFEAD00)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_PUBLICSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEAD10)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_POTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0xFEAD20)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEAD30)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_PASSIVESKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEAD40)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEAD50)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFEAD60)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_POTENTIALSTATS_OFFSET UNITYSDK_OFFSET(0xFEAD70)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_EXSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xFEAD80)
#define MX_GAMELOGIC_DBMODEL_CHARACTERDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFEAD90)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CharacterDB_TypeDefinitionIndex = 12518;

	class CharacterDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int32 _StarGrade_k__BackingField; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x24
		::System::Int64 _Exp_k__BackingField; // 0x28
		::System::Int32 _FavorRank_k__BackingField; // 0x30
		::System::Int64 _FavorExp_k__BackingField; // 0x38
		::System::Int32 _PublicSkillLevel_k__BackingField; // 0x40
		::System::Int32 _ExSkillLevel_k__BackingField; // 0x44
		::System::Int32 _PassiveSkillLevel_k__BackingField; // 0x48
		::System::Int32 _ExtraPassiveSkillLevel_k__BackingField; // 0x4C
		::System::Int32 _LeaderSkillLevel_k__BackingField; // 0x50
		::System::Boolean _IsFavorite_k__BackingField; // 0x54
		Il2CppObject* _EquipmentServerIds_k__BackingField; // 0x58
		Il2CppObject* _PotentialStats_k__BackingField; // 0x60

		::System::Void set_ExtraPassiveSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_EXTRAPASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LeaderSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_LEADERSKILLLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void set_Exp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_EXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EXSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_FAVOREXP_OFFSET))(nullptr);
		}

		::System::Void set_EquipmentServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_EQUIPMENTSERVERIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Exp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EXP_OFFSET))(nullptr);
		}

		::System::Void set_FavorExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_FAVOREXP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StarGrade()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_STARGRADE_OFFSET))(nullptr);
		}

		::System::Boolean Equivalent(::MX::GameLogic::DBModel::CharacterDB* arg, ::MX::GameLogic::DBModel::CharacterDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_EQUIVALENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_IsFavorite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_ISFAVORITE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_CLONE_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_StarGrade(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_STARGRADE_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FavorRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializePotentialStats()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SHOULDSERIALIZEPOTENTIALSTATS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFavorite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_ISFAVORITE_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void set_PassiveSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_PASSIVESKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_PublicSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_PUBLICSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_LeaderSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_LEADERSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExtraPassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EXTRAPASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeEquipmentServerIds()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SHOULDSERIALIZEEQUIPMENTSERVERIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_EquipmentSlotAndDBIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EQUIPMENTSLOTANDDBIDS_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EquipmentServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_EQUIPMENTSERVERIDS_OFFSET))(nullptr);
		}

		::System::Int32 get_PublicSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_PUBLICSKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_PotentialStats(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_POTENTIALSTATS_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PassiveSkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_PASSIVESKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PotentialStats()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_GET_POTENTIALSTATS_OFFSET))(nullptr);
		}

		::System::Void set_ExSkillLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_SET_EXSKILLLEVEL_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CHARACTERDB_TOSTRING_OFFSET))(nullptr);
		}

	};
}

