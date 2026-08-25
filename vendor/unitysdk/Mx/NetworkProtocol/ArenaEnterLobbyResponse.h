#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaPlayerInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_OPPONENTUSERDBS_OFFSET UNITYSDK_OFFSET(0xF10B40)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_AUTOREFRESHTIME_OFFSET UNITYSDK_OFFSET(0xF10B50)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10B60)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10B70)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_SET_OPPONENTUSERDBS_OFFSET UNITYSDK_OFFSET(0xF10B80)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_ARENAPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0xF10B90)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xF10BA0)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_SET_ARENAPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0xF10BB0)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_SET_AUTOREFRESHTIME_OFFSET UNITYSDK_OFFSET(0xF10BC0)
#define MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xF10BD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaEnterLobbyResponse_TypeDefinitionIndex = 11278;

	class ArenaEnterLobbyResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ArenaPlayerInfoDB* _ArenaPlayerInfoDB_k__BackingField; // 0x50
		Il2CppObject* _OpponentUserDBs_k__BackingField; // 0x58
		::System::Int64 _MapId_k__BackingField; // 0x60
		::System::DateTime* _AutoRefreshTime_k__BackingField; // 0x68

		Il2CppObject* get_OpponentUserDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_OPPONENTUSERDBS_OFFSET))(nullptr);
		}

		::System::DateTime* get_AutoRefreshTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_AUTOREFRESHTIME_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OpponentUserDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_SET_OPPONENTUSERDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ArenaPlayerInfoDB* get_ArenaPlayerInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaPlayerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_ARENAPLAYERINFODB_OFFSET))(nullptr);
		}

		::System::Void set_MapId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_SET_MAPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ArenaPlayerInfoDB(::MX::GameLogic::DBModel::ArenaPlayerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaPlayerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_SET_ARENAPLAYERINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AutoRefreshTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_SET_AUTOREFRESHTIME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MapId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERLOBBYRESPONSE_GET_MAPID_OFFSET))(nullptr);
		}

	};
}

