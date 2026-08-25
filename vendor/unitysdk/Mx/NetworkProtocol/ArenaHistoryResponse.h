#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_GET_ARENAHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF112E0)
#define MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF112F0)
#define MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11300)
#define MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_SET_ARENAHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF11310)
#define MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_GET_ARENADAMAGEREPORTDB_OFFSET UNITYSDK_OFFSET(0xF11320)
#define MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_SET_ARENADAMAGEREPORTDB_OFFSET UNITYSDK_OFFSET(0xF11330)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaHistoryResponse_TypeDefinitionIndex = 11300;

	class ArenaHistoryResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ArenaHistoryDBs_k__BackingField; // 0x50
		Il2CppObject* _ArenaDamageReportDB_k__BackingField; // 0x58

		Il2CppObject* get_ArenaHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_GET_ARENAHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ArenaHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_SET_ARENAHISTORYDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ArenaDamageReportDB()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_GET_ARENADAMAGEREPORTDB_OFFSET))(nullptr);
		}

		::System::Void set_ArenaDamageReportDB(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYRESPONSE_SET_ARENADAMAGEREPORTDB_OFFSET))(arg, nullptr);
		}

	};
}

