#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentMainStageSaveDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_GET_WITHDRAWECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF44310)
#define MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_SET_WITHDRAWECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF44320)
#define MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44330)
#define MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_SET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44340)
#define MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_GET_SAVEDATADB_OFFSET UNITYSDK_OFFSET(0xF44350)
#define MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44360)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentWithdrawEchelonResponse_TypeDefinitionIndex = 11698;

	class EventContentWithdrawEchelonResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* _SaveDataDB_k__BackingField; // 0x50
		Il2CppObject* _WithdrawEchelonDBs_k__BackingField; // 0x58

		Il2CppObject* get_WithdrawEchelonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_GET_WITHDRAWECHELONDBS_OFFSET))(nullptr);
		}

		::System::Void set_WithdrawEchelonDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_SET_WITHDRAWECHELONDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SaveDataDB(::MX::GameLogic::DBModel::EventContentMainStageSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_SET_SAVEDATADB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentMainStageSaveDB* get_SaveDataDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentMainStageSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_GET_SAVEDATADB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTWITHDRAWECHELONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

