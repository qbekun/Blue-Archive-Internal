#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::GameLogic::DBModel { class ConquestEchelonDB; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SETASSIST_OFFSET UNITYSDK_OFFSET(0xFEE140)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_RESETASSIST_OFFSET UNITYSDK_OFFSET(0xFEE180)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEE1B0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEE1C0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_ASSISTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEE1D0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEE1E0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0xFEE1F0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEE200)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xFEE210)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0xFEE220)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_CLONE_OFFSET UNITYSDK_OFFSET(0xFEE230)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEE5C0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_ASSISTCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFEE5D0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEE380)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_COPYFROM_OFFSET UNITYSDK_OFFSET(0xFEE5E0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xFEE6F0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEE700)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestEchelonDB_TypeDefinitionIndex = 12535;

	class ConquestEchelonDB : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x18
		::System::Int64 _TileUniqueId_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::EchelonDB* _EchelonDB_k__BackingField; // 0x28
		::System::Int64 _AssistCharacterUniqueId_k__BackingField; // 0x30
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x38

		::System::Void SetAssist(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg, ::MX::GameLogic::DBModel::AssistCharacterDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::MX::GameLogic::DBModel::AssistCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SETASSIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetAssist()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_RESETASSIST_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_ASSISTCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* get_EchelonDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_ECHELONDB_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_EchelonDB(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_ECHELONDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestEchelonDB* Clone()
		{
			return ((::MX::GameLogic::DBModel::ConquestEchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_CLONE_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AssistCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_GET_ASSISTCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::MX::GameLogic::DBModel::ConquestEchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTECHELONDB_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

