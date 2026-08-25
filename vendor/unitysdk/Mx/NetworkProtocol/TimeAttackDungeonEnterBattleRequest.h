#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FD30)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xF4FD40)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xF4FD50)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4FD60)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4FD70)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FD80)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonEnterBattleRequest_TypeDefinitionIndex = 12160;

	class TimeAttackDungeonEnterBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RoomId_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_RoomId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_SET_ROOMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RoomId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_GET_ROOMID_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENTERBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

