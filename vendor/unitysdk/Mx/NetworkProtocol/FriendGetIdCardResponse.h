#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class FriendIdCardDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDGETIDCARDRESPONSE_SET_FRIENDIDCARDDB_OFFSET UNITYSDK_OFFSET(0xF46D00)
#define MX_NETWORKPROTOCOL_FRIENDGETIDCARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46D10)
#define MX_NETWORKPROTOCOL_FRIENDGETIDCARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46D20)
#define MX_NETWORKPROTOCOL_FRIENDGETIDCARDRESPONSE_GET_FRIENDIDCARDDB_OFFSET UNITYSDK_OFFSET(0xF46D30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendGetIdCardResponse_TypeDefinitionIndex = 11802;

	class FriendGetIdCardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::FriendIdCardDB* _FriendIdCardDB_k__BackingField; // 0x50

		::System::Void set_FriendIdCardDB(::MX::GameLogic::DBModel::FriendIdCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendIdCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETIDCARDRESPONSE_SET_FRIENDIDCARDDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETIDCARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETIDCARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FriendIdCardDB* get_FriendIdCardDB()
		{
			return ((::MX::GameLogic::DBModel::FriendIdCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETIDCARDRESPONSE_GET_FRIENDIDCARDDB_OFFSET))(nullptr);
		}

	};
}

