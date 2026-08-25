#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStagePlayDB; }
namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_SET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF49F80)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_GET_RECEIVEDREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF49F90)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49FA0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_GET_STAGEDB_OFFSET UNITYSDK_OFFSET(0xF49FB0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49FC0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_SET_RECEIVEDREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF49FD0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49FE0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49FF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGSelectRewardCardResponse_TypeDefinitionIndex = 11934;

	class MiniGameCCGSelectRewardCardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* _StageDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _SaveDB_k__BackingField; // 0x58
		Il2CppObject* _ReceivedRewardIds_k__BackingField; // 0x60

		::System::Void set_StageDB(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_SET_STAGEDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReceivedRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_GET_RECEIVEDREWARDIDS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB* get_StageDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGStagePlayDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_GET_STAGEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReceivedRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_SET_RECEIVEDREWARDIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSELECTREWARDCARDRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

	};
}

