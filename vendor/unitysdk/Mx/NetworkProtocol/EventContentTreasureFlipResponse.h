#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF460B0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_GET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF460C0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF460D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF460E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_SET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF460F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF46100)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentTreasureFlipResponse_TypeDefinitionIndex = 11770;

	class EventContentTreasureFlipResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* _BoardHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* get_BoardHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_GET_BOARDHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_BoardHistoryDB(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_SET_BOARDHISTORYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASUREFLIPRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

