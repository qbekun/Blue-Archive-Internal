#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF16960)
#define MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_GET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16970)
#define MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16980)
#define MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_SET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16990)
#define MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF169A0)
#define MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF169B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanPermitResponse_TypeDefinitionIndex = 11507;

	class ClanPermitResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanMemberDB* _ClanMemberDB_k__BackingField; // 0x58

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_ClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_GET_CLANMEMBERDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_SET_CLANMEMBERDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANPERMITRESPONSE_GET_CLANDB_OFFSET))(nullptr);
		}

	};
}

