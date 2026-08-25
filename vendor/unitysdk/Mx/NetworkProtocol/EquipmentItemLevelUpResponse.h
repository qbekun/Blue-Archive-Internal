#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF43600)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43610)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43620)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF43630)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_GET_EQUIPMENTDB_OFFSET UNITYSDK_OFFSET(0xF43640)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF43650)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF43660)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_SET_EQUIPMENTDB_OFFSET UNITYSDK_OFFSET(0xF43670)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemLevelUpResponse_TypeDefinitionIndex = 11672;

	class EquipmentItemLevelUpResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EquipmentDB* _EquipmentDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x60

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* get_EquipmentDB()
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_GET_EQUIPMENTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_EquipmentDB(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLEVELUPRESPONSE_SET_EQUIPMENTDB_OFFSET))(arg, nullptr);
		}

	};
}

