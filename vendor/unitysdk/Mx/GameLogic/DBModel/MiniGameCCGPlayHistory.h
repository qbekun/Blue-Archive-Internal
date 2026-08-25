#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }

#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x1002170)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1002180)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_GET_STAGEPLAYDB_OFFSET UNITYSDK_OFFSET(0x1002190)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_SET_STAGEPLAYDB_OFFSET UNITYSDK_OFFSET(0x10021A0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x10021B0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x10021C0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameCCGPlayHistory_TypeDefinitionIndex = 12650;

	class MiniGameCCGPlayHistory : public Il2CppObject
	{
	public:
		::System::Int64 _LevelId_k__BackingField; // 0x10
		::System::Int64 _NodeId_k__BackingField; // 0x18
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* _StagePlayDB_k__BackingField; // 0x20

		::System::Void set_NodeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_SET_NODEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_GET_NODEID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* get_StagePlayDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_GET_STAGEPLAYDB_OFFSET))(nullptr);
		}

		::System::Void set_StagePlayDB(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_SET_STAGEPLAYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_LevelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_SET_LEVELID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LevelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMECCGPLAYHISTORY_GET_LEVELID_OFFSET))(nullptr);
		}

	};
}

