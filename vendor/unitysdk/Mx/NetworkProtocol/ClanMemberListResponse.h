#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_SET_CLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0xF16640)
#define MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_GET_CLANMEMBERDBS_OFFSET UNITYSDK_OFFSET(0xF16650)
#define MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16660)
#define MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16670)
#define MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16680)
#define MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16690)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanMemberListResponse_TypeDefinitionIndex = 11495;

	class ClanMemberListResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x50
		Il2CppObject* _ClanMemberDBs_k__BackingField; // 0x58

		::System::Void set_ClanMemberDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_SET_CLANMEMBERDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClanMemberDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_GET_CLANMEMBERDBS_OFFSET))(nullptr);
		}

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTRESPONSE_GET_CLANDB_OFFSET))(nullptr);
		}

	};
}

