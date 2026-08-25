#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class CraftInfoDB; }
namespace MX::GameLogic::DBModel { class ItemDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41D40)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_SET_TICKETITEMDB_OFFSET UNITYSDK_OFFSET(0xF41D50)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_SET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0xF41D60)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF41D70)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_GET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0xF41D80)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF41D90)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41DA0)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_GET_TICKETITEMDB_OFFSET UNITYSDK_OFFSET(0xF41DB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftCompleteProcessResponse_TypeDefinitionIndex = 11604;

	class CraftCompleteProcessResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CraftInfoDB* _CraftInfoDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ItemDB* _TicketItemDB_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TicketItemDB(::MX::GameLogic::DBModel::ItemDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_SET_TICKETITEMDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CraftInfoDB(::MX::GameLogic::DBModel::CraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_SET_CRAFTINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CraftInfoDB* get_CraftInfoDB()
		{
			return ((::MX::GameLogic::DBModel::CraftInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_GET_CRAFTINFODB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ItemDB* get_TicketItemDB()
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSRESPONSE_GET_TICKETITEMDB_OFFSET))(nullptr);
		}

	};
}

