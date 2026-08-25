#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYRESPONSE_GET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF0F6A0)
#define MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYRESPONSE_SET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF0F6B0)
#define MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F6C0)
#define MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F6D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountBirthDayResponse_TypeDefinitionIndex = 11240;

	class AccountBirthDayResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountDB* _AccountDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::AccountDB* get_AccountDB()
		{
			return ((::MX::GameLogic::DBModel::AccountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYRESPONSE_GET_ACCOUNTDB_OFFSET))(nullptr);
		}

		::System::Void set_AccountDB(::MX::GameLogic::DBModel::AccountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYRESPONSE_SET_ACCOUNTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTBIRTHDAYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

