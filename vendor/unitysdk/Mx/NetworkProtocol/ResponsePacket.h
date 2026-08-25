#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class ServerNotificationFlag; }

#define MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_STATICOPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0xF11990)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_STATICOPENCONDITIONS_OFFSET UNITYSDK_OFFSET(0xF119A0)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_WELCOMECAMPAIGNPROGRESSDBDICT_OFFSET UNITYSDK_OFFSET(0xF119B0)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_MISSIONPROGRESSDBS_OFFSET UNITYSDK_OFFSET(0xF119C0)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_EVENTMISSIONPROGRESSDBDICT_OFFSET UNITYSDK_OFFSET(0xF119D0)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EAB0)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_MISSIONPROGRESSDBS_OFFSET UNITYSDK_OFFSET(0xF119E0)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_BATTLEPASSMISSIONPROGRESSDBDICT_OFFSET UNITYSDK_OFFSET(0xF119F0)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_SERVERTIMETICKS_OFFSET UNITYSDK_OFFSET(0xF11A00)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_SERVERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xF11A10)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_BATTLEPASSMISSIONPROGRESSDBDICT_OFFSET UNITYSDK_OFFSET(0xF11A20)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_SERVERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xF11A30)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_SERVERTIMETICKS_OFFSET UNITYSDK_OFFSET(0xF11A40)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_EVENTMISSIONPROGRESSDBDICT_OFFSET UNITYSDK_OFFSET(0xF11A50)
#define MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_WELCOMECAMPAIGNPROGRESSDBDICT_OFFSET UNITYSDK_OFFSET(0xF11A60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ResponsePacket_TypeDefinitionIndex = 11325;

	class ResponsePacket : public ::TriInspector::TriDropdownItem
	{
	public:
		::System::Int64 _ServerTimeTicks_k__BackingField; // 0x18
		::MX::NetworkProtocol::ServerNotificationFlag* _ServerNotification_k__BackingField; // 0x20
		Il2CppObject* _MissionProgressDBs_k__BackingField; // 0x28
		Il2CppObject* _EventMissionProgressDBDict_k__BackingField; // 0x30
		Il2CppObject* _BattlePassMissionProgressDBDict_k__BackingField; // 0x38
		Il2CppObject* _WelcomeCampaignProgressDBDict_k__BackingField; // 0x40
		Il2CppObject* _StaticOpenConditions_k__BackingField; // 0x48

		Il2CppObject* get_StaticOpenConditions()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_STATICOPENCONDITIONS_OFFSET))(nullptr);
		}

		::System::Void set_StaticOpenConditions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_STATICOPENCONDITIONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WelcomeCampaignProgressDBDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_WELCOMECAMPAIGNPROGRESSDBDICT_OFFSET))(nullptr);
		}

		::System::Void set_MissionProgressDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_MISSIONPROGRESSDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventMissionProgressDBDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_EVENTMISSIONPROGRESSDBDICT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_MissionProgressDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_MISSIONPROGRESSDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_BattlePassMissionProgressDBDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_BATTLEPASSMISSIONPROGRESSDBDICT_OFFSET))(nullptr);
		}

		::System::Void set_ServerTimeTicks(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_SERVERTIMETICKS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ServerNotificationFlag* get_ServerNotification()
		{
			return ((::MX::NetworkProtocol::ServerNotificationFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_SERVERNOTIFICATION_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassMissionProgressDBDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_BATTLEPASSMISSIONPROGRESSDBDICT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerNotification(::MX::NetworkProtocol::ServerNotificationFlag* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ServerNotificationFlag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_SERVERNOTIFICATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerTimeTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_SERVERTIMETICKS_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventMissionProgressDBDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_GET_EVENTMISSIONPROGRESSDBDICT_OFFSET))(nullptr);
		}

		::System::Void set_WelcomeCampaignProgressDBDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESPONSEPACKET_SET_WELCOMECAMPAIGNPROGRESSDBDICT_OFFSET))(arg, nullptr);
		}

	};
}

