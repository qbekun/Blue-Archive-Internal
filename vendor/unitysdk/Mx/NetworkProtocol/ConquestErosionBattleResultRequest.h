#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40E20)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xF40E30)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0xF40E40)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40E50)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40E60)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xF40E70)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0xF40E80)
#define MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40E90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestErosionBattleResultRequest_TypeDefinitionIndex = 11569;

	class ConquestErosionBattleResultRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x50

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTEROSIONBATTLERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

