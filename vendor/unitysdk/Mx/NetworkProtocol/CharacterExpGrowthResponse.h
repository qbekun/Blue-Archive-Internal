#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF15B20)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF15B30)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15B40)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF15B50)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15B60)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15B70)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF15B80)
#define MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF15B90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterExpGrowthResponse_TypeDefinitionIndex = 11465;

	class CharacterExpGrowthResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CharacterDB* _CharacterDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x60

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* get_CharacterDB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTEREXPGROWTHRESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

	};
}

