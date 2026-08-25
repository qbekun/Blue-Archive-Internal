#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class TimeAttackDungeonRoomDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF500F0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50100)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINRESPONSE_SET_PREVIOUSROOMDB_OFFSET UNITYSDK_OFFSET(0xF50110)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINRESPONSE_GET_PREVIOUSROOMDB_OFFSET UNITYSDK_OFFSET(0xF50120)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonLoginResponse_TypeDefinitionIndex = 12169;

	class TimeAttackDungeonLoginResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* _PreviousRoomDB_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PreviousRoomDB(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINRESPONSE_SET_PREVIOUSROOMDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB* get_PreviousRoomDB()
		{
			return ((::MX::GameLogic::DBModel::TimeAttackDungeonRoomDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONLOGINRESPONSE_GET_PREVIOUSROOMDB_OFFSET))(nullptr);
		}

	};
}

