#pragma once
#include "../../unitysdk.h"

class RoadPuzzleRailTileData;
class RoadPuzzleBoardSaveDB;
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_SET_RAILTILETOPLACE_OFFSET UNITYSDK_OFFSET(0xF49840)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49850)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49860)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF49870)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49880)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF49890)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_GET_RAILTILETOPLACE_OFFSET UNITYSDK_OFFSET(0xF498A0)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF498B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameRoadPuzzleTilePlaceResponse_TypeDefinitionIndex = 11916;

	class MiniGameRoadPuzzleTilePlaceResponse : public Il2CppObject
	{
	public:
		RoadPuzzleRailTileData* _RailTileToPlace_k__BackingField; // 0x50
		RoadPuzzleBoardSaveDB* _SaveDB_k__BackingField; // 0x58
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x60

		::System::Void set_RailTileToPlace(RoadPuzzleRailTileData* arg)
		{
			((::System::Void(*)(RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_SET_RAILTILETOPLACE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(RoadPuzzleBoardSaveDB* arg)
		{
			((::System::Void(*)(RoadPuzzleBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		RoadPuzzleRailTileData* get_RailTileToPlace()
		{
			return ((RoadPuzzleRailTileData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_GET_RAILTILETOPLACE_OFFSET))(nullptr);
		}

		RoadPuzzleBoardSaveDB* get_SaveDB()
		{
			return ((RoadPuzzleBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLETILEPLACERESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

	};
}

