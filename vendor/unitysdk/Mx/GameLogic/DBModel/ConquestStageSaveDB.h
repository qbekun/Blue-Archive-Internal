#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace FlatData { class ConquestTileType; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace FlatData { class ContentType; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_ECHELONSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xFEEBF0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFEEC00)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_CONQUESTEVENTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xFEEC10)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_CONQUESTEVENTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xFEEC20)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_ECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xFEEC30)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_ASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xFEEC40)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_ECHELONSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xFEEC50)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEEC60)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_CONQUESTTILETYPE_OFFSET UNITYSDK_OFFSET(0xFEEC70)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_ASSISTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xFEEC80)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_ECHELONSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xFEECA0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_TILEPRESETID_OFFSET UNITYSDK_OFFSET(0xFEECB0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEECC0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEECD0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_USEMANAGEECHELON_OFFSET UNITYSDK_OFFSET(0xFEECE0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_TILEPRESETID_OFFSET UNITYSDK_OFFSET(0xFEECF0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEED00)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEED10)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEED20)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEED30)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_CONQUESTTILETYPE_OFFSET UNITYSDK_OFFSET(0xFEED40)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_USEMANAGEECHELON_OFFSET UNITYSDK_OFFSET(0xFEED50)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestStageSaveDB_TypeDefinitionIndex = 12539;

	class ConquestStageSaveDB : public Il2CppObject
	{
	public:
		Il2CppObject* _ConquestEventObjectDBId_k__BackingField; // 0x78
		::System::Int64 _EventContentId_k__BackingField; // 0x88
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x90
		::System::Int64 _TileUniqueId_k__BackingField; // 0x98
		::System::Int64 _TilePresetId_k__BackingField; // 0xA0
		::FlatData::ConquestTileType* _ConquestTileType_k__BackingField; // 0xA8
		::System::Boolean _UseManageEchelon_k__BackingField; // 0xAC
		::MX::GameLogic::DBModel::AssistCharacterDB* _AssistCharacterDB_k__BackingField; // 0xB0
		::System::Int32 _EchelonSlotType_k__BackingField; // 0xB8
		::System::Int32 _EchelonSlotIndex_k__BackingField; // 0xBC

		::System::Void set_EchelonSlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_ECHELONSLOTINDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConquestEventObjectDBId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_CONQUESTEVENTOBJECTDBID_OFFSET))(nullptr);
		}

		::System::Void set_ConquestEventObjectDBId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_CONQUESTEVENTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonSlotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_ECHELONSLOTTYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AssistCharacterDB* get_AssistCharacterDB()
		{
			return ((::MX::GameLogic::DBModel::AssistCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_ASSISTCHARACTERDB_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonSlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_ECHELONSLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ConquestTileType(::FlatData::ConquestTileType* arg)
		{
			((::System::Void(*)(::FlatData::ConquestTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_CONQUESTTILETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistCharacterDB(::MX::GameLogic::DBModel::AssistCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_ASSISTCHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonSlotType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_ECHELONSLOTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_TilePresetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_TILEPRESETID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UseManageEchelon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_USEMANAGEECHELON_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TilePresetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_TILEPRESETID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::FlatData::ConquestTileType* get_ConquestTileType()
		{
			return ((::FlatData::ConquestTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_CONQUESTTILETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseManageEchelon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSTAGESAVEDB_GET_USEMANAGEECHELON_OFFSET))(nullptr);
		}

	};
}

