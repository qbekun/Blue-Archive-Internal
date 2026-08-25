#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTIMAGEREQUEST_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xF46730)
#define MX_NETWORKPROTOCOL_EVENTIMAGEREQUEST_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xF46740)
#define MX_NETWORKPROTOCOL_EVENTIMAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46750)
#define MX_NETWORKPROTOCOL_EVENTIMAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46760)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventImageRequest_TypeDefinitionIndex = 11789;

	class EventImageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventId_k__BackingField; // 0x40

		::System::Void set_EventId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTIMAGEREQUEST_SET_EVENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTIMAGEREQUEST_GET_EVENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTIMAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTIMAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

