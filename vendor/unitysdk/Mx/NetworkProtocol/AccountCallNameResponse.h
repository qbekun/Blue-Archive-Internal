#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F620)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMERESPONSE_GET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF0F630)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMERESPONSE_SET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF0F640)
#define MX_NETWORKPROTOCOL_ACCOUNTCALLNAMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F650)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCallNameResponse_TypeDefinitionIndex = 11238;

	class AccountCallNameResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountDB* _AccountDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AccountDB* get_AccountDB()
		{
			return ((::MX::GameLogic::DBModel::AccountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMERESPONSE_GET_ACCOUNTDB_OFFSET))(nullptr);
		}

		::System::Void set_AccountDB(::MX::GameLogic::DBModel::AccountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMERESPONSE_SET_ACCOUNTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCALLNAMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

