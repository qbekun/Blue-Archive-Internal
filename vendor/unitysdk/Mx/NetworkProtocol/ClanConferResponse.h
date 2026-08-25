#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDescriptionDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_SET_ACCOUNTCLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16B40)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_SET_CLANMEMBERDESCRIPTIONDB_OFFSET UNITYSDK_OFFSET(0xF16B50)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_ACCOUNTCLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16B60)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16B70)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16B80)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16B90)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_CLANMEMBERDESCRIPTIONDB_OFFSET UNITYSDK_OFFSET(0xF16BA0)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_SET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16BB0)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16BC0)
#define MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16BD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanConferResponse_TypeDefinitionIndex = 11513;

	class ClanConferResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanMemberDB* _ClanMemberDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanMemberDB* _AccountClanMemberDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::ClanMemberDescriptionDB* _ClanMemberDescriptionDB_k__BackingField; // 0x68

		::System::Void set_AccountClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_SET_ACCOUNTCLANMEMBERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanMemberDescriptionDB(::MX::GameLogic::DBModel::ClanMemberDescriptionDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDescriptionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_SET_CLANMEMBERDESCRIPTIONDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_AccountClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_ACCOUNTCLANMEMBERDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_CLANDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDescriptionDB* get_ClanMemberDescriptionDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDescriptionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_CLANMEMBERDESCRIPTIONDB_OFFSET))(nullptr);
		}

		::System::Void set_ClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_SET_CLANMEMBERDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_ClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_GET_CLANMEMBERDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCONFERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

