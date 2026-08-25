#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGGIVEUPGAMERESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF4A2E0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGGIVEUPGAMERESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF4A2F0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGGIVEUPGAMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A300)
#define MX_NETWORKPROTOCOL_MINIGAMECCGGIVEUPGAMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A310)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGGiveupGameResponse_TypeDefinitionIndex = 11942;

	class MiniGameCCGGiveupGameResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* _SaveDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::MiniGameCCGSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::MiniGameCCGSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGGIVEUPGAMERESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGGIVEUPGAMERESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGGIVEUPGAMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGGIVEUPGAMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

