#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class BattlePassInfoDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11D10)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_GET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11D20)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_SET_BATTLEPASSINFO_OFFSET UNITYSDK_OFFSET(0xF11D30)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF11D40)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11D50)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF11D60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassBuyLevelResponse_TypeDefinitionIndex = 11334;

	class BattlePassBuyLevelResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::BattlePassInfoDB* _BattlePassInfo_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::BattlePassInfoDB* get_BattlePassInfo()
		{
			return ((::MX::GameLogic::DBModel::BattlePassInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_GET_BATTLEPASSINFO_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassInfo(::MX::GameLogic::DBModel::BattlePassInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BattlePassInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_SET_BATTLEPASSINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

	};
}

