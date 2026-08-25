#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentLocationDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTLOCATIONGETINFORESPONSE_GET_EVENTCONTENTLOCATIONDB_OFFSET UNITYSDK_OFFSET(0xF45870)
#define MX_NETWORKPROTOCOL_EVENTCONTENTLOCATIONGETINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45880)
#define MX_NETWORKPROTOCOL_EVENTCONTENTLOCATIONGETINFORESPONSE_SET_EVENTCONTENTLOCATIONDB_OFFSET UNITYSDK_OFFSET(0xF45890)
#define MX_NETWORKPROTOCOL_EVENTCONTENTLOCATIONGETINFORESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF458A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentLocationGetInfoResponse_TypeDefinitionIndex = 11748;

	class EventContentLocationGetInfoResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentLocationDB* _EventContentLocationDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::EventContentLocationDB* get_EventContentLocationDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentLocationDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTLOCATIONGETINFORESPONSE_GET_EVENTCONTENTLOCATIONDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTLOCATIONGETINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentLocationDB(::MX::GameLogic::DBModel::EventContentLocationDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentLocationDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTLOCATIONGETINFORESPONSE_SET_EVENTCONTENTLOCATIONDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTLOCATIONGETINFORESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

