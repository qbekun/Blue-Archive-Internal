#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF43B20)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43B30)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43B40)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_SET_ISONSUBEVENT_OFFSET UNITYSDK_OFFSET(0xF43B50)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_GET_ISONSUBEVENT_OFFSET UNITYSDK_OFFSET(0xF43B60)
#define MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF43B70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentEnterMainStageResponse_TypeDefinitionIndex = 11684;

	class EventContentEnterMainStageResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		::System::Boolean _IsOnSubEvent_k__BackingField; // 0x58

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_IsOnSubEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_SET_ISONSUBEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOnSubEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_GET_ISONSUBEVENT_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTENTERMAINSTAGERESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

	};
}

