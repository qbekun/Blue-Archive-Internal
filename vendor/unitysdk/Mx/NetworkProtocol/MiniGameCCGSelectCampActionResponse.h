#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF4A180)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A190)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF4A1A0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A1B0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_GET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF4A1C0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_SET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF4A1D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGSelectCampActionResponse_TypeDefinitionIndex = 11938;

	class MiniGameCCGSelectCampActionResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* _StageDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _SaveDB_k__BackingField; // 0x58

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* get_StageDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_GET_STAGEDB_OFFSET))(nullptr);
		}

		::System::Void set_StageDB(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTCAMPACTIONRESPONSE_SET_STAGEDB_OFFSET))(arg, nullptr);
		}

	};
}

