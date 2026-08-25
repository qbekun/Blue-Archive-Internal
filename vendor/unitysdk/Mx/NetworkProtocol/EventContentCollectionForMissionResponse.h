#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONRESPONSE_SET_EVENTCONTENTCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF45630)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45640)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONRESPONSE_GET_EVENTCONTENTCOLLECTIONDBS_OFFSET UNITYSDK_OFFSET(0xF45650)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45660)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentCollectionForMissionResponse_TypeDefinitionIndex = 11742;

	class EventContentCollectionForMissionResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EventContentCollectionDBs_k__BackingField; // 0x50

		::System::Void set_EventContentCollectionDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONRESPONSE_SET_EVENTCONTENTCOLLECTIONDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventContentCollectionDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONRESPONSE_GET_EVENTCONTENTCOLLECTIONDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONFORMISSIONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

