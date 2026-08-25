#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::GameLogic::DBModel { class ArenaCharacterDB; }

#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_SUPPORTCHARACTERS_OFFSET UNITYSDK_OFFSET(0xFE28D0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_TSSINTERACTIONCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFE28E0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_TSSINTERACTIONCHARACTERID_OFFSET UNITYSDK_OFFSET(0xFE2990)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_SQUADCOUNT_OFFSET UNITYSDK_OFFSET(0xFE29A0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE26D0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_TSSINTERACTIONCHARACTERID_OFFSET UNITYSDK_OFFSET(0xFE2B20)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_LEADERCHARACTERID_OFFSET UNITYSDK_OFFSET(0xFE2B30)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_TSSCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xFE2B40)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB__GET_TSSINTERACTIONCHARACTERSERVERID_B__13_0_OFFSET UNITYSDK_OFFSET(0xFE2B50)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_MAINCHARACTERS_OFFSET UNITYSDK_OFFSET(0xFE2B70)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_CANBATTLE_OFFSET UNITYSDK_OFFSET(0xFE2B80)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_SUPPORTCHARACTERS_OFFSET UNITYSDK_OFFSET(0xFE2C90)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFE2CA0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xFE2CB0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_MAINCHARACTERS_OFFSET UNITYSDK_OFFSET(0xFE2CC0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_LEADERCHARACTERID_OFFSET UNITYSDK_OFFSET(0xFE2CD0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xFE2CE0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xFE2CF0)
#define MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_TSSCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xFE2D00)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ArenaTeamSettingDB_TypeDefinitionIndex = 12482;

	class ArenaTeamSettingDB : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x10
		::System::Int64 _LeaderCharacterId_k__BackingField; // 0x18
		::System::Int64 _TSSInteractionCharacterId_k__BackingField; // 0x20
		Il2CppObject* _MainCharacters_k__BackingField; // 0x28
		Il2CppObject* _SupportCharacters_k__BackingField; // 0x30
		::MX::GameLogic::DBModel::ArenaCharacterDB* _TSSCharacterDB_k__BackingField; // 0x38
		::System::Int64 _MapId_k__BackingField; // 0x40

		Il2CppObject* get_SupportCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_SUPPORTCHARACTERS_OFFSET))(nullptr);
		}

		::System::Int64 get_TSSInteractionCharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_TSSINTERACTIONCHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_TSSInteractionCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_TSSINTERACTIONCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int32 get_SquadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_SQUADCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_TSSINTERACTIONCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_LeaderCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_LEADERCHARACTERID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaCharacterDB* get_TSSCharacterDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_TSSCHARACTERDB_OFFSET))(nullptr);
		}

		::System::Boolean _get_TSSInteractionCharacterServerId_b__13_0(::MX::GameLogic::DBModel::ArenaCharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ArenaCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB__GET_TSSINTERACTIONCHARACTERSERVERID_B__13_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MainCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_MAINCHARACTERS_OFFSET))(nullptr);
		}

		::System::Boolean CanBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_CANBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_SupportCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_SUPPORTCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MapId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_MAPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_MainCharacters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_MAINCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LeaderCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_LEADERCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_MapId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_MAPID_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_TSSCharacterDB(::MX::GameLogic::DBModel::ArenaCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ARENATEAMSETTINGDB_SET_TSSCHARACTERDB_OFFSET))(arg, nullptr);
		}

	};
}

