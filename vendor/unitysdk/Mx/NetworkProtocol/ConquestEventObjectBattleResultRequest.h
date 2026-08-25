#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xF409E0)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xF409F0)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xF40A00)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40A10)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40A20)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40A30)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xF40A40)
#define MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40A50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestEventObjectBattleResultRequest_TypeDefinitionIndex = 11561;

	class ConquestEventObjectBattleResultRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x50

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEVENTOBJECTBATTLERESULTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

