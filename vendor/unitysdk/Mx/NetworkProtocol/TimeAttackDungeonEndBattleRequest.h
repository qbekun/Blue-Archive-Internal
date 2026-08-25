#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4FDD0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF4FDE0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FDF0)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xF4FE00)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_SET_ECHELONID_OFFSET UNITYSDK_OFFSET(0xF4FE10)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FE20)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xF4FE30)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF4FE40)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4FE50)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF4FE60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonEndBattleRequest_TypeDefinitionIndex = 12162;

	class TimeAttackDungeonEndBattleRequest : public Il2CppObject
	{
	public:
		::System::Int32 _EchelonId_k__BackingField; // 0x40
		::System::Int64 _RoomId_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x58

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EchelonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_ECHELONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_RoomId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_ROOMID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_SET_ECHELONID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_RoomId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_SET_ROOMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONENDBATTLEREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

	};
}

