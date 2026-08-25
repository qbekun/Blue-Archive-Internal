#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentDiceRaceDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45DB0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_SET_DICERACEDB_OFFSET UNITYSDK_OFFSET(0xF45DC0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_GET_DICERACEDB_OFFSET UNITYSDK_OFFSET(0xF45DD0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF45DE0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF45DF0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45E00)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentDiceRaceLapRewardResponse_TypeDefinitionIndex = 11762;

	class EventContentDiceRaceLapRewardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentDiceRaceDB* _DiceRaceDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DiceRaceDB(::MX::GameLogic::DBModel::EventContentDiceRaceDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentDiceRaceDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_SET_DICERACEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentDiceRaceDB* get_DiceRaceDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentDiceRaceDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_GET_DICERACEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELAPREWARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

