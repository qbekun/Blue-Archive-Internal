#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGREROLLREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A360)
#define MX_NETWORKPROTOCOL_MINIGAMECCGREROLLREWARDRESPONSE_GET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF4A370)
#define MX_NETWORKPROTOCOL_MINIGAMECCGREROLLREWARDRESPONSE_SET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF4A380)
#define MX_NETWORKPROTOCOL_MINIGAMECCGREROLLREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A390)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGRerollRewardResponse_TypeDefinitionIndex = 11944;

	class MiniGameCCGRerollRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* _StageDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREROLLREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* get_StageDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREROLLREWARDRESPONSE_GET_STAGEDB_OFFSET))(nullptr);
		}

		::System::Void set_StageDB(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREROLLREWARDRESPONSE_SET_STAGEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGREROLLREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

