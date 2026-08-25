#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_GET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF49EA0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49EB0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49EC0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49ED0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49EE0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_SET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF49EF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGEndStageEventResponse_TypeDefinitionIndex = 11932;

	class MiniGameCCGEndStageEventResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* _StageDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _SaveDB_k__BackingField; // 0x58

		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* get_StageDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_GET_STAGEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StageDB(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENDSTAGEEVENTRESPONSE_SET_STAGEDB_OFFSET))(arg, nullptr);
		}

	};
}

