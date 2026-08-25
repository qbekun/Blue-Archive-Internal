#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49E00)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49E10)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49E20)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49E30)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_SET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF49E40)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_GET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF49E50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGEndStageDualResponse_TypeDefinitionIndex = 11930;

	class MiniGameCCGEndStageDualResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* _StageDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _SaveDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StageDB(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_SET_STAGEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* get_StageDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEDUALRESPONSE_GET_STAGEDB_OFFSET))(nullptr);
		}

	};
}

