#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF504E0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF504F0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF50500)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF50510)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF50520)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF50530)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF50540)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50550)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WeekDungeonBattleResultRequest_TypeDefinitionIndex = 12181;

	class WeekDungeonBattleResultRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Boolean _PassCheckCharacter_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean get_PassCheckCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_PassCheckCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONBATTLERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

