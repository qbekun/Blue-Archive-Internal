#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_SET_MISSIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4A560)
#define MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_SET_PROGRESSSERVERID_OFFSET UNITYSDK_OFFSET(0xF4A570)
#define MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF4A580)
#define MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_GET_MISSIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4A590)
#define MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A5A0)
#define MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A5B0)
#define MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_GET_PROGRESSSERVERID_OFFSET UNITYSDK_OFFSET(0xF4A5C0)
#define MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF4A5D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionRewardRequest_TypeDefinitionIndex = 11949;

	class MissionRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _MissionUniqueId_k__BackingField; // 0x40
		::System::Int64 _ProgressServerId_k__BackingField; // 0x48
		Il2CppObject* _EventContentId_k__BackingField; // 0x50

		::System::Void set_MissionUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_SET_MISSIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProgressServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_SET_PROGRESSSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MissionUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_GET_MISSIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_ProgressServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_GET_PROGRESSSERVERID_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventContentId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONREWARDREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

