#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF452B0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF452C0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF452D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF452E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentSelectBuffResponse_TypeDefinitionIndex = 11732;

	class EventContentSelectBuffResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

