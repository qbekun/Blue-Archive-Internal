#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentConcentrationSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONGETINFORESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46210)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONGETINFORESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF46220)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONGETINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46230)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONGETINFORESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF46240)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentConcentrationGetInfoResponse_TypeDefinitionIndex = 11774;

	class EventContentConcentrationGetInfoResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* _SaveDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONGETINFORESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONGETINFORESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONGETINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONGETINFORESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

	};
}

