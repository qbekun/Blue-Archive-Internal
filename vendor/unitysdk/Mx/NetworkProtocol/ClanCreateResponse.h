#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::GameLogic::DBModel { class ClanMemberDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANCREATERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF164A0)
#define MX_NETWORKPROTOCOL_CLANCREATERESPONSE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF164B0)
#define MX_NETWORKPROTOCOL_CLANCREATERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF164C0)
#define MX_NETWORKPROTOCOL_CLANCREATERESPONSE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0xF164D0)
#define MX_NETWORKPROTOCOL_CLANCREATERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF164E0)
#define MX_NETWORKPROTOCOL_CLANCREATERESPONSE_GET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF164F0)
#define MX_NETWORKPROTOCOL_CLANCREATERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF16500)
#define MX_NETWORKPROTOCOL_CLANCREATERESPONSE_SET_CLANMEMBERDB_OFFSET UNITYSDK_OFFSET(0xF16510)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanCreateResponse_TypeDefinitionIndex = 11491;

	class ClanCreateResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanMemberDB* _ClanMemberDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATERESPONSE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATERESPONSE_GET_CLANDB_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATERESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanMemberDB* get_ClanMemberDB()
		{
			return ((::MX::GameLogic::DBModel::ClanMemberDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATERESPONSE_GET_CLANMEMBERDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATERESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::System::Void set_ClanMemberDB(::MX::GameLogic::DBModel::ClanMemberDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanMemberDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANCREATERESPONSE_SET_CLANMEMBERDB_OFFSET))(arg, nullptr);
		}

	};
}

