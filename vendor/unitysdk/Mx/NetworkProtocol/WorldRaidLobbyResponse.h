#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WorldRaidProgressDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50B20)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_SET_CLEARHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF50B30)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_SET_LOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0xF50B40)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_LOCALBOSSDBS_OFFSET UNITYSDK_OFFSET(0xF50B50)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_SET_WORLDRAIDPROGRESSDB_OFFSET UNITYSDK_OFFSET(0xF50B60)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_BOSSGROUPS_OFFSET UNITYSDK_OFFSET(0xF50B70)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_WORLDRAIDPROGRESSDB_OFFSET UNITYSDK_OFFSET(0xF50B80)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50B90)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_SET_BOSSGROUPS_OFFSET UNITYSDK_OFFSET(0xF50BA0)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_CLEARHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF50BB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WorldRaidLobbyResponse_TypeDefinitionIndex = 12200;

	class WorldRaidLobbyResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ClearHistoryDBs_k__BackingField; // 0x50
		Il2CppObject* _LocalBossDBs_k__BackingField; // 0x58
		Il2CppObject* _BossGroups_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::WorldRaidProgressDB* _WorldRaidProgressDB_k__BackingField; // 0x68

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClearHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_SET_CLEARHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_LocalBossDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_SET_LOCALBOSSDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LocalBossDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_LOCALBOSSDBS_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidProgressDB(::MX::GameLogic::DBModel::WorldRaidProgressDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::WorldRaidProgressDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_SET_WORLDRAIDPROGRESSDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BossGroups()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_BOSSGROUPS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::WorldRaidProgressDB* get_WorldRaidProgressDB()
		{
			return ((::MX::GameLogic::DBModel::WorldRaidProgressDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_WORLDRAIDPROGRESSDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BossGroups(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_SET_BOSSGROUPS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClearHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYRESPONSE_GET_CLEARHISTORYDBS_OFFSET))(nullptr);
		}

	};
}

