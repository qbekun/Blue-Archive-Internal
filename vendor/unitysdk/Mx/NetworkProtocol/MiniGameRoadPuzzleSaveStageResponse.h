#pragma once
#include "../../unitysdk.h"

class RoadPuzzleBoardSaveDB;
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLESAVESTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49960)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLESAVESTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49970)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLESAVESTAGERESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49980)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLESAVESTAGERESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49990)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameRoadPuzzleSaveStageResponse_TypeDefinitionIndex = 11918;

	class MiniGameRoadPuzzleSaveStageResponse : public Il2CppObject
	{
	public:
		RoadPuzzleBoardSaveDB* _SaveDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLESAVESTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLESAVESTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		RoadPuzzleBoardSaveDB* get_SaveDB()
		{
			return ((RoadPuzzleBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLESAVESTAGERESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(RoadPuzzleBoardSaveDB* arg)
		{
			((::System::Void(*)(RoadPuzzleBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLESAVESTAGERESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

	};
}

