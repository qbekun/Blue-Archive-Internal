#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MissionHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_GET_ADDEDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF484C0)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF484D0)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF484E0)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF484F0)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_SET_ADDEDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF48500)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF48510)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameMissionRewardResponse_TypeDefinitionIndex = 11868;

	class MiniGameMissionRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MissionHistoryDB* _AddedHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::DBModel::MissionHistoryDB* get_AddedHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::MissionHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_GET_ADDEDHISTORYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AddedHistoryDB(::MX::GameLogic::DBModel::MissionHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MissionHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_SET_ADDEDHISTORYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

