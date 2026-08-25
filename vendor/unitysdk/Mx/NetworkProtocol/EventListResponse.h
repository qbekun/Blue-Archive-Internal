#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF466F0)
#define MX_NETWORKPROTOCOL_EVENTLISTRESPONSE_GET_EVENTINFODBS_OFFSET UNITYSDK_OFFSET(0xF46700)
#define MX_NETWORKPROTOCOL_EVENTLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46710)
#define MX_NETWORKPROTOCOL_EVENTLISTRESPONSE_SET_EVENTINFODBS_OFFSET UNITYSDK_OFFSET(0xF46720)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventListResponse_TypeDefinitionIndex = 11788;

	class EventListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _EventInfoDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_EventInfoDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTLISTRESPONSE_GET_EVENTINFODBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventInfoDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTLISTRESPONSE_SET_EVENTINFODBS_OFFSET))(arg, nullptr);
		}

	};
}

