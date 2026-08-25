#pragma once
#include "../../unitysdk.h"

class RoadPuzzleBoardSaveDB;
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFORESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49760)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49770)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFORESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49780)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFORESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49790)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameRoadPuzzleGetInfoResponse_TypeDefinitionIndex = 11914;

	class MiniGameRoadPuzzleGetInfoResponse : public Il2CppObject
	{
	public:
		RoadPuzzleBoardSaveDB* _SaveDB_k__BackingField; // 0x50

		RoadPuzzleBoardSaveDB* get_SaveDB()
		{
			return ((RoadPuzzleBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFORESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFORESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(RoadPuzzleBoardSaveDB* arg)
		{
			((::System::Void(*)(RoadPuzzleBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFORESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

	};
}

