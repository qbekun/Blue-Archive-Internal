#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONLISTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF4A480)
#define MX_NETWORKPROTOCOL_MISSIONLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A490)
#define MX_NETWORKPROTOCOL_MISSIONLISTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF4A4A0)
#define MX_NETWORKPROTOCOL_MISSIONLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A4B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionListRequest_TypeDefinitionIndex = 11947;

	class MissionListRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _EventContentId_k__BackingField; // 0x40

		::System::Void set_EventContentId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventContentId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

