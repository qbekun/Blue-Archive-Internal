#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MissionCategory; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48520)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_GET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0xF48530)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_SET_MISSIONCATEGORY_OFFSET UNITYSDK_OFFSET(0xF48540)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48550)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48560)
#define MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48570)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameMissionMultipleRewardRequest_TypeDefinitionIndex = 11869;

	class MiniGameMissionMultipleRewardRequest : public Il2CppObject
	{
	public:
		::FlatData::MissionCategory* _MissionCategory_k__BackingField; // 0x40
		::System::Int64 _EventContentId_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::FlatData::MissionCategory* get_MissionCategory()
		{
			return ((::FlatData::MissionCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_GET_MISSIONCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_MissionCategory(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_SET_MISSIONCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEMISSIONMULTIPLEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

