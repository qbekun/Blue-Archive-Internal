#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EBF0)
#define MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0EC00)
#define MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_SET_EXPIREDCURRENCY_OFFSET UNITYSDK_OFFSET(0xF0EC10)
#define MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF0EC20)
#define MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_GET_EXPIREDCURRENCY_OFFSET UNITYSDK_OFFSET(0xF0EC30)
#define MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF0EC40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCurrencySyncResponse_TypeDefinitionIndex = 11228;

	class AccountCurrencySyncResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x50
		Il2CppObject* _ExpiredCurrency_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ExpiredCurrency(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_SET_EXPIREDCURRENCY_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExpiredCurrency()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_GET_EXPIREDCURRENCY_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCURRENCYSYNCRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

	};
}

