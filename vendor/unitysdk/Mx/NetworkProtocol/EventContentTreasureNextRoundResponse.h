#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureHistoryDB; }
namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46170)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_GET_HIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0xF46180)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_SET_HIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0xF46190)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF461A0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_SET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF461B0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_GET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF461C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentTreasureNextRoundResponse_TypeDefinitionIndex = 11772;

	class EventContentTreasureNextRoundResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* _BoardHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EventContentTreasureCell* _HiddenImage_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureCell* get_HiddenImage()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureCell*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_GET_HIDDENIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_HiddenImage(::MX::GameLogic::DBModel::EventContentTreasureCell* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureCell*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_SET_HIDDENIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BoardHistoryDB(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_SET_BOARDHISTORYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* get_BoardHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURENEXTROUNDRESPONSE_GET_BOARDHISTORYDB_OFFSET))(nullptr);
		}

	};
}

