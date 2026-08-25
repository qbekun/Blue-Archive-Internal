#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureHistoryDB; }
namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_GET_HIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0xF45FB0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_SET_VARIATIONID_OFFSET UNITYSDK_OFFSET(0xF45FC0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_GET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF45FD0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45FE0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_SET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0xF45FF0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_SET_HIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0xF46000)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46010)
#define MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_GET_VARIATIONID_OFFSET UNITYSDK_OFFSET(0xF46020)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentTreasureLobbyResponse_TypeDefinitionIndex = 11768;

	class EventContentTreasureLobbyResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* _BoardHistoryDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EventContentTreasureCell* _HiddenImage_k__BackingField; // 0x58
		::System::Int64 _VariationId_k__BackingField; // 0x60

		::MX::GameLogic::DBModel::EventContentTreasureCell* get_HiddenImage()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureCell*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_GET_HIDDENIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_VariationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_SET_VARIATIONID_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* get_BoardHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_GET_BOARDHISTORYDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BoardHistoryDB(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_SET_BOARDHISTORYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_HiddenImage(::MX::GameLogic::DBModel::EventContentTreasureCell* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureCell*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_SET_HIDDENIMAGE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_VariationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTTREASURELOBBYRESPONSE_GET_VARIATIONID_OFFSET))(nullptr);
		}

	};
}

