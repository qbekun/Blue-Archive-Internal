#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentChangeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_GET_EVENTCONTENTCHANGEDB_OFFSET UNITYSDK_OFFSET(0xF43A60)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43A70)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_GET_ISONSUBEVENT_OFFSET UNITYSDK_OFFSET(0xF43A80)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43A90)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_SET_ISONSUBEVENT_OFFSET UNITYSDK_OFFSET(0xF43AA0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_SET_EVENTCONTENTCHANGEDB_OFFSET UNITYSDK_OFFSET(0xF43AB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentSubEventLobbyResponse_TypeDefinitionIndex = 11682;

	class EventContentSubEventLobbyResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentChangeDB* _EventContentChangeDB_k__BackingField; // 0x50
		::System::Boolean _IsOnSubEvent_k__BackingField; // 0x58

		::MX::GameLogic::DBModel::EventContentChangeDB* get_EventContentChangeDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentChangeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_GET_EVENTCONTENTCHANGEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOnSubEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_GET_ISONSUBEVENT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_IsOnSubEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_SET_ISONSUBEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentChangeDB(::MX::GameLogic::DBModel::EventContentChangeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentChangeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSUBEVENTLOBBYRESPONSE_SET_EVENTCONTENTCHANGEDB_OFFSET))(arg, nullptr);
		}

	};
}

