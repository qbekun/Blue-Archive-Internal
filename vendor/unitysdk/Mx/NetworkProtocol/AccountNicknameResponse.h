#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTNICKNAMERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F560)
#define MX_NETWORKPROTOCOL_ACCOUNTNICKNAMERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F570)
#define MX_NETWORKPROTOCOL_ACCOUNTNICKNAMERESPONSE_SET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF0F580)
#define MX_NETWORKPROTOCOL_ACCOUNTNICKNAMERESPONSE_GET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF0F590)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountNicknameResponse_TypeDefinitionIndex = 11236;

	class AccountNicknameResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountDB* _AccountDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTNICKNAMERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTNICKNAMERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccountDB(::MX::GameLogic::DBModel::AccountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTNICKNAMERESPONSE_SET_ACCOUNTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountDB* get_AccountDB()
		{
			return ((::MX::GameLogic::DBModel::AccountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTNICKNAMERESPONSE_GET_ACCOUNTDB_OFFSET))(nullptr);
		}

	};
}

