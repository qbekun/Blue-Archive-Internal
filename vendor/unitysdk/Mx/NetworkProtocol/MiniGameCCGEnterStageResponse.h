#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGERESPONSE_SET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF49D60)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGERESPONSE_GET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF49D70)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49D80)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49D90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGEnterStageResponse_TypeDefinitionIndex = 11928;

	class MiniGameCCGEnterStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* _StageDB_k__BackingField; // 0x50

		::System::Void set_StageDB(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGERESPONSE_SET_STAGEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* get_StageDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGERESPONSE_GET_STAGEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

