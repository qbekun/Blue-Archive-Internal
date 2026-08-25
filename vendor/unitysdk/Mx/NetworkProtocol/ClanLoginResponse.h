#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16220)
#define MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_SET_CLANASSISTSLOTDBS_OFFSET UNITYSDK_OFFSET(0xF16230)
#define MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_SET_ACCOUNTCLANDB_OFFSET UNITYSDK_OFFSET(0xF16240)
#define MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_SET_ACCOUNTCLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16250)
#define MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_GET_ACCOUNTCLANDB_OFFSET UNITYSDK_OFFSET(0xF16260)
#define MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_GET_CLANASSISTSLOTDBS_OFFSET UNITYSDK_OFFSET(0xF16270)
#define MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_GET_ACCOUNTCLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16280)
#define MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16290)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanLoginResponse_TypeDefinitionIndex = 11485;

	class ClanLoginResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _AccountClanDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanMemberDB* _AccountClanMemberDB_k__BackingField; // 0x58
		Il2CppObject* _ClanAssistSlotDBs_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClanAssistSlotDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_SET_CLANASSISTSLOTDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_SET_ACCOUNTCLANDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_SET_ACCOUNTCLANMEMBERDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_AccountClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_GET_ACCOUNTCLANDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ClanAssistSlotDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_GET_CLANASSISTSLOTDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_AccountClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_GET_ACCOUNTCLANMEMBERDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANLOGINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

