#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClueSearchSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHGETINFORESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46530)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHGETINFORESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF46540)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHGETINFORESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF46550)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHGETINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46560)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentClueSearchGetInfoResponse_TypeDefinitionIndex = 11782;

	class EventContentClueSearchGetInfoResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClueSearchSaveDB* _SaveDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHGETINFORESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::ClueSearchSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClueSearchSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHGETINFORESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClueSearchSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::ClueSearchSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHGETINFORESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHGETINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

