#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }

#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_SET_HEALTH_OFFSET UNITYSDK_OFFSET(0x1001F20)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1001F30)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1001F40)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1001F50)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1001F60)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_GET_HEALTH_OFFSET UNITYSDK_OFFSET(0x1001F70)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1001F80)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1001FF0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameCCGCharacterDB_TypeDefinitionIndex = 12646;

	class MiniGameCCGCharacterDB : public Il2CppObject
	{
	public:
		::System::Int32 _SlotIndex_k__BackingField; // 0x10
		::System::Int64 _CharacterId_k__BackingField; // 0x18
		::System::Int32 _Health_k__BackingField; // 0x20

		::System::Void set_Health(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_SET_HEALTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_Health()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_GET_HEALTH_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* Clone(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

