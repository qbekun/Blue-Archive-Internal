#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MissionCategory; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_GET_GUIDEMISSIONSEASONID_OFFSET UNITYSDK_OFFSET(0xF4A640)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF4A650)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF4A660)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_SET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0xF4A670)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_SET_GUIDEMISSIONSEASONID_OFFSET UNITYSDK_OFFSET(0xF4A680)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A690)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A6A0)
#define MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_GET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0xF4A6B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionMultipleRewardRequest_TypeDefinitionIndex = 11951;

	class MissionMultipleRewardRequest : public Il2CppObject
	{
	public:
		::FlatData::MissionCategory* _MissionCategory_k__BackingField; // 0x40
		Il2CppObject* _GuideMissionSeasonId_k__BackingField; // 0x48
		Il2CppObject* _EventContentId_k__BackingField; // 0x58

		Il2CppObject* get_GuideMissionSeasonId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_GET_GUIDEMISSIONSEASONID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EventContentId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_MissionCategory(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_SET_MISSIONCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_GuideMissionSeasonId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_SET_GUIDEMISSIONSEASONID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::MissionCategory* get_MissionCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONMULTIPLEREWARDREQUEST_GET_MISSIONCATEGORY_OFFSET))(nullptr);
		}

	};
}

