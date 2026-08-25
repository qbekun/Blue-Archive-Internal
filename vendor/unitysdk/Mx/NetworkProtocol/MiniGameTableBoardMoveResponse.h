#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGPlayerDB; }
namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::TableBoard { class TBGEncounterDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48920)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_ENCOUNTERDB_OFFSET UNITYSDK_OFFSET(0xF48930)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48940)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF48950)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_SET_PLAYERDB_OFFSET UNITYSDK_OFFSET(0xF48960)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_SET_ENCOUNTERDB_OFFSET UNITYSDK_OFFSET(0xF48970)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48980)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48990)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF489A0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_PLAYERDB_OFFSET UNITYSDK_OFFSET(0xF489B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardMoveResponse_TypeDefinitionIndex = 11882;

	class MiniGameTableBoardMoveResponse : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGPlayerDB* _PlayerDB_k__BackingField; // 0x50
		::MX::TableBoard::TBGBoardSaveDB* _SaveDB_k__BackingField; // 0x58
		::MX::TableBoard::TBGEncounterDB* _EncounterDB_k__BackingField; // 0x60
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGEncounterDB* get_EncounterDB()
		{
			return ((::MX::TableBoard::TBGEncounterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_ENCOUNTERDB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGBoardSaveDB* get_SaveDB()
		{
			return ((::MX::TableBoard::TBGBoardSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void set_PlayerDB(::MX::TableBoard::TBGPlayerDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGPlayerDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_SET_PLAYERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_EncounterDB(::MX::TableBoard::TBGEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_SET_ENCOUNTERDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGPlayerDB* get_PlayerDB()
		{
			return ((::MX::TableBoard::TBGPlayerDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDMOVERESPONSE_GET_PLAYERDB_OFFSET))(nullptr);
		}

	};
}

