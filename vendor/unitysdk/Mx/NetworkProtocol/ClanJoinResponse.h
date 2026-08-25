#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class IrcServerConfig; }
namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANJOINRESPONSE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16760)
#define MX_NETWORKPROTOCOL_CLANJOINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16770)
#define MX_NETWORKPROTOCOL_CLANJOINRESPONSE_SET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16780)
#define MX_NETWORKPROTOCOL_CLANJOINRESPONSE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16790)
#define MX_NETWORKPROTOCOL_CLANJOINRESPONSE_SET_IRCCONFIG_OFFSET UNITYSDK_OFFSET(0xF167A0)
#define MX_NETWORKPROTOCOL_CLANJOINRESPONSE_GET_IRCCONFIG_OFFSET UNITYSDK_OFFSET(0xF167B0)
#define MX_NETWORKPROTOCOL_CLANJOINRESPONSE_GET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF167C0)
#define MX_NETWORKPROTOCOL_CLANJOINRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF167D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanJoinResponse_TypeDefinitionIndex = 11499;

	class ClanJoinResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::IrcServerConfig* _IrcConfig_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanMemberDB* _ClanMemberDB_k__BackingField; // 0x60

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINRESPONSE_GET_CLANDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINRESPONSE_SET_CLANMEMBERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINRESPONSE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_IrcConfig(::MX::NetworkProtocol::IrcServerConfig* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::IrcServerConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINRESPONSE_SET_IRCCONFIG_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::IrcServerConfig* get_IrcConfig()
		{
			return ((::MX::NetworkProtocol::IrcServerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINRESPONSE_GET_IRCCONFIG_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_ClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINRESPONSE_GET_CLANMEMBERDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

