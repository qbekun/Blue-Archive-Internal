#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureHistoryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F76A00)
#define EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_GET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1F76DC0)
#define EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x1F76DD0)
#define EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x1F76DE0)
#define EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_SET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1F76DF0)

	inline static constexpr unsigned int EventContentTreasureFlipResponseMessage_TypeDefinitionIndex = 2545;

	class EventContentTreasureFlipResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* _BoardHistoryDB_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x28

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg2, ::MX::GameLogic::Parcel::ParcelResultDB* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* get_BoardHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_GET_BOARDHISTORYDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_BoardHistoryDB(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPRESPONSEMESSAGE_SET_BOARDHISTORYDB_OFFSET))(arg, nullptr);
		}

	};

