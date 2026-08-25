#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentChangeDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_GET_EVENTCONTENTCHANGEDB_OFFSET UNITYSDK_OFFSET(0x1F75010)
#define EVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F74D60)
#define EVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_SET_EVENTCONTENTCHANGEDB_OFFSET UNITYSDK_OFFSET(0x1F75020)

	inline static constexpr unsigned int EventContentSubEventLobbyResponseMessage_TypeDefinitionIndex = 2536;

	class EventContentSubEventLobbyResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentChangeDB* _EventContentChangeDB_k__BackingField; // 0x20

		::MX::GameLogic::DBModel::EventContentChangeDB* get_EventContentChangeDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentChangeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_GET_EVENTCONTENTCHANGEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::EventContentChangeDB* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::EventContentChangeDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_EventContentChangeDB(::MX::GameLogic::DBModel::EventContentChangeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentChangeDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSUBEVENTLOBBYRESPONSEMESSAGE_SET_EVENTCONTENTCHANGEDB_OFFSET))(arg, nullptr);
		}

	};

