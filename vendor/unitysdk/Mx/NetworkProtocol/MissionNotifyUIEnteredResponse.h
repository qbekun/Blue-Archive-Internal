#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDRESPONSE_SET_WELCOMECAMPAIGNHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4A800)
#define MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A810)
#define MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A820)
#define MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDRESPONSE_GET_WELCOMECAMPAIGNHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF4A830)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionNotifyUIEnteredResponse_TypeDefinitionIndex = 11958;

	class MissionNotifyUIEnteredResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _WelcomeCampaignHistoryDBs_k__BackingField; // 0x50

		::System::Void set_WelcomeCampaignHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDRESPONSE_SET_WELCOMECAMPAIGNHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_WelcomeCampaignHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDRESPONSE_GET_WELCOMECAMPAIGNHISTORYDBS_OFFSET))(nullptr);
		}

	};
}

