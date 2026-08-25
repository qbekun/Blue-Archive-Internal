#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ArenaPlayerInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENALOGINRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10C00)
#define MX_NETWORKPROTOCOL_ARENALOGINRESPONSE_SET_ARENAPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0xF10C10)
#define MX_NETWORKPROTOCOL_ARENALOGINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10C20)
#define MX_NETWORKPROTOCOL_ARENALOGINRESPONSE_GET_ARENAPLAYERINFODB_OFFSET UNITYSDK_OFFSET(0xF10C30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaLoginResponse_TypeDefinitionIndex = 11280;

	class ArenaLoginResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ArenaPlayerInfoDB* _ArenaPlayerInfoDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENALOGINRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ArenaPlayerInfoDB(::MX::GameLogic::DBModel::ArenaPlayerInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaPlayerInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENALOGINRESPONSE_SET_ARENAPLAYERINFODB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENALOGINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaPlayerInfoDB* get_ArenaPlayerInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaPlayerInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENALOGINRESPONSE_GET_ARENAPLAYERINFODB_OFFSET))(nullptr);
		}

	};
}

