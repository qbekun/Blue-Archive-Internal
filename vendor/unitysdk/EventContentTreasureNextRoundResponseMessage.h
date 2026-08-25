#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureHistoryDB; }
namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTTREASURENEXTROUNDRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F77560)
#define EVENTCONTENTTREASURENEXTROUNDRESPONSEMESSAGE_GET_HIDDENIMAGE_OFFSET UNITYSDK_OFFSET(0x1F77910)
#define EVENTCONTENTTREASURENEXTROUNDRESPONSEMESSAGE_GET_BOARDHISTORYDB_OFFSET UNITYSDK_OFFSET(0x1F77920)

	inline static constexpr unsigned int EventContentTreasureNextRoundResponseMessage_TypeDefinitionIndex = 2551;

	class EventContentTreasureNextRoundResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* _BoardHistoryDB_k__BackingField; // 0x20
		::MX::GameLogic::DBModel::EventContentTreasureCell* _HiddenImage_k__BackingField; // 0x28

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* arg2, ::MX::GameLogic::DBModel::EventContentTreasureCell* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*, ::MX::GameLogic::DBModel::EventContentTreasureCell*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureCell* get_HiddenImage()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureCell*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDRESPONSEMESSAGE_GET_HIDDENIMAGE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentTreasureHistoryDB* get_BoardHistoryDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentTreasureHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDRESPONSEMESSAGE_GET_BOARDHISTORYDB_OFFSET))(nullptr);
		}

	};

