#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTDEPLOYECHELONRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44250)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDEPLOYECHELONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44260)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDEPLOYECHELONRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44270)
#define MX_NETWORKPROTOCOL_EVENTCONTENTDEPLOYECHELONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44280)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentDeployEchelonResponse_TypeDefinitionIndex = 11696;

	class EventContentDeployEchelonResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDEPLOYECHELONRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDEPLOYECHELONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDEPLOYECHELONRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTDEPLOYECHELONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

