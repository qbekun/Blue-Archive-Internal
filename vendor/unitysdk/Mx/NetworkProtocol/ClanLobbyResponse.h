#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class IrcServerConfig; }
namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_ACCOUNTCLANDB_OFFSET UNITYSDK_OFFSET(0xF162C0)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_DEFAULTEXPOSEDCLANDBS_OFFSET UNITYSDK_OFFSET(0xF162D0)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_IRCCONFIG_OFFSET UNITYSDK_OFFSET(0xF162E0)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_CLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0xF162F0)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_ACCOUNTCLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16300)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_DEFAULTEXPOSEDCLANDBS_OFFSET UNITYSDK_OFFSET(0xF16310)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_CLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0xF16320)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_ACCOUNTCLANDB_OFFSET UNITYSDK_OFFSET(0xF16330)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16340)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_IRCCONFIG_OFFSET UNITYSDK_OFFSET(0xF16350)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_ACCOUNTCLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16360)
#define MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16370)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanLobbyResponse_TypeDefinitionIndex = 11487;

	class ClanLobbyResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::IrcServerConfig* _IrcConfig_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanDB* _AccountClanDB_k__BackingField; // 0x58
		Il2CppObject* _DefaultExposedClanDBs_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::ClanMemberDB* _AccountClanMemberDB_k__BackingField; // 0x68
		Il2CppObject* _ClanMemberDBs_k__BackingField; // 0x70

		::System::Void set_AccountClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_ACCOUNTCLANDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_DefaultExposedClanDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_DEFAULTEXPOSEDCLANDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IrcConfig(::MX::NetworkProtocol::IrcServerConfig* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::IrcServerConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_IRCCONFIG_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClanMemberDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_CLANMEMBERDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_AccountClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_ACCOUNTCLANMEMBERDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_DefaultExposedClanDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_DEFAULTEXPOSEDCLANDBS_OFFSET))(nullptr);
		}

		::System::Void set_ClanMemberDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_CLANMEMBERDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_AccountClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_ACCOUNTCLANDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::IrcServerConfig* get_IrcConfig()
		{
			return ((::MX::NetworkProtocol::IrcServerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_IRCCONFIG_OFFSET))(nullptr);
		}

		::System::Void set_AccountClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_SET_ACCOUNTCLANMEMBERDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOBBYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

