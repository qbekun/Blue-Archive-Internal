#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftInfoDB; }
namespace MX::GameLogic::DBModel { class CraftNodeDB; }
namespace MX::GameLogic::DBModel { class AccountCurrencyDB; }
namespace MX::GameLogic::DBModel { class ConsumeResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_SET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0xF41BE0)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_CRAFTNODEDB_OFFSET UNITYSDK_OFFSET(0xF41BF0)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF41C00)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41C10)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_SET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF41C20)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_CRAFTINFODB_OFFSET UNITYSDK_OFFSET(0xF41C30)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_SET_CRAFTNODEDB_OFFSET UNITYSDK_OFFSET(0xF41C40)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41C50)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET UNITYSDK_OFFSET(0xF41C60)
#define MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_CONSUMERESULTDB_OFFSET UNITYSDK_OFFSET(0xF41C70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftUpdateNodeLevelResponse_TypeDefinitionIndex = 11600;

	class CraftUpdateNodeLevelResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CraftInfoDB* _CraftInfoDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CraftNodeDB* _CraftNodeDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::AccountCurrencyDB* _AccountCurrencyDB_k__BackingField; // 0x60
		::MX::GameLogic::DBModel::ConsumeResultDB* _ConsumeResultDB_k__BackingField; // 0x68

		::System::Void set_CraftInfoDB(::MX::GameLogic::DBModel::CraftInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_SET_CRAFTINFODB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CraftNodeDB* get_CraftNodeDB()
		{
			return ((::MX::GameLogic::DBModel::CraftNodeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_CRAFTNODEDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountCurrencyDB* get_AccountCurrencyDB()
		{
			return ((::MX::GameLogic::DBModel::AccountCurrencyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_ACCOUNTCURRENCYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeResultDB(::MX::GameLogic::DBModel::ConsumeResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_SET_CONSUMERESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CraftInfoDB* get_CraftInfoDB()
		{
			return ((::MX::GameLogic::DBModel::CraftInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_CRAFTINFODB_OFFSET))(nullptr);
		}

		::System::Void set_CraftNodeDB(::MX::GameLogic::DBModel::CraftNodeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CraftNodeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_SET_CRAFTNODEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccountCurrencyDB(::MX::GameLogic::DBModel::AccountCurrencyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountCurrencyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_SET_ACCOUNTCURRENCYDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeResultDB* get_ConsumeResultDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTUPDATENODELEVELRESPONSE_GET_CONSUMERESULTDB_OFFSET))(nullptr);
		}

	};
}

