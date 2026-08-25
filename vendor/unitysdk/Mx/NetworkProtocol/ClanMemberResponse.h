#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::GameLogic::DBModel { class DetailedAccountInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16580)
#define MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_GET_DETAILEDACCOUNTINFODB_OFFSET UNITYSDK_OFFSET(0xF16590)
#define MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF165A0)
#define MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF165B0)
#define MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF165C0)
#define MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_GET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF165D0)
#define MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_SET_DETAILEDACCOUNTINFODB_OFFSET UNITYSDK_OFFSET(0xF165E0)
#define MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_SET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF165F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanMemberResponse_TypeDefinitionIndex = 11493;

	class ClanMemberResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanMemberDB* _ClanMemberDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::DetailedAccountInfoDB* _DetailedAccountInfoDB_k__BackingField; // 0x60

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_GET_CLANDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::DetailedAccountInfoDB* get_DetailedAccountInfoDB()
		{
			return ((::MX::GameLogic::DBModel::DetailedAccountInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_GET_DETAILEDACCOUNTINFODB_OFFSET))(nullptr);
		}

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_ClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_GET_CLANMEMBERDB_OFFSET))(nullptr);
		}

		::System::Void set_DetailedAccountInfoDB(::MX::GameLogic::DBModel::DetailedAccountInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::DetailedAccountInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_SET_DETAILEDACCOUNTINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERRESPONSE_SET_CLANMEMBERDB_OFFSET))(arg, nullptr);
		}

	};
}

