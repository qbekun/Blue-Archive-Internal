#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGCardDB; }

#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1001E60)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1001E70)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_GET_CARDDBID_OFFSET UNITYSDK_OFFSET(0x1001E80)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1001E90)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_SET_CARDDBID_OFFSET UNITYSDK_OFFSET(0x1001F00)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x1001F10)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameCCGCardDB_TypeDefinitionIndex = 12645;

	class MiniGameCCGCardDB : public Il2CppObject
	{
	public:
		::System::Int32 _CardDBId_k__BackingField; // 0x10
		::System::Int64 _CardId_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_GET_CARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_CardDBId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_GET_CARDDBID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCardDB* Clone(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg)
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGCardDB*(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_CLONE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CardDBId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_SET_CARDDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGCARDDB_SET_CARDID_OFFSET))(arg, nullptr);
		}

	};
}

