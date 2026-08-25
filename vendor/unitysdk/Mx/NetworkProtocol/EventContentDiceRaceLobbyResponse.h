#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentDiceRaceDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45C50)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45C60)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYRESPONSE_SET_DICERACEDB_OFFSET UNITYSDK_OFFSET(0xF45C70)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYRESPONSE_GET_DICERACEDB_OFFSET UNITYSDK_OFFSET(0xF45C80)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentDiceRaceLobbyResponse_TypeDefinitionIndex = 11758;

	class EventContentDiceRaceLobbyResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentDiceRaceDB* _DiceRaceDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DiceRaceDB(::MX::GameLogic::DBModel::EventContentDiceRaceDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentDiceRaceDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYRESPONSE_SET_DICERACEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentDiceRaceDB* get_DiceRaceDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentDiceRaceDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDICERACELOBBYRESPONSE_GET_DICERACEDB_OFFSET))(nullptr);
		}

	};
}

