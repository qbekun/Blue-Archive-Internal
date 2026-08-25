#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaUserDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_GETARENATEAMCHEATRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3FDA0)
#define MX_NETWORKPROTOCOL_GETARENATEAMCHEATRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3FDB0)
#define MX_NETWORKPROTOCOL_GETARENATEAMCHEATRESPONSE_GET_OPPONENT_OFFSET UNITYSDK_OFFSET(0xF3FDC0)
#define MX_NETWORKPROTOCOL_GETARENATEAMCHEATRESPONSE_SET_OPPONENT_OFFSET UNITYSDK_OFFSET(0xF3FDD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int GetArenaTeamCheatResponse_TypeDefinitionIndex = 11540;

	class GetArenaTeamCheatResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ArenaUserDB* _Opponent_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GETARENATEAMCHEATRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GETARENATEAMCHEATRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_Opponent()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GETARENATEAMCHEATRESPONSE_GET_OPPONENT_OFFSET))(nullptr);
		}

		::System::Void set_Opponent(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_GETARENATEAMCHEATRESPONSE_SET_OPPONENT_OFFSET))(arg, nullptr);
		}

	};
}

