#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_GET_ECHOSENDTICK_OFFSET UNITYSDK_OFFSET(0xF4AEA0)
#define MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4AEB0)
#define MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_SET_RECEIVETICK_OFFSET UNITYSDK_OFFSET(0xF4AEC0)
#define MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_SET_ECHOSENDTICK_OFFSET UNITYSDK_OFFSET(0xF4AED0)
#define MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_GET_RECEIVETICK_OFFSET UNITYSDK_OFFSET(0xF4AEE0)
#define MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4AEF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int NetworkTimeSyncResponse_TypeDefinitionIndex = 11978;

	class NetworkTimeSyncResponse : public Il2CppObject
	{
	public:
		::System::Int64 _ReceiveTick_k__BackingField; // 0x50
		::System::Int64 _EchoSendTick_k__BackingField; // 0x58

		::System::Int64 get_EchoSendTick()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_GET_ECHOSENDTICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ReceiveTick(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_SET_RECEIVETICK_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchoSendTick(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_SET_ECHOSENDTICK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ReceiveTick()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_GET_RECEIVETICK_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_NETWORKTIMESYNCRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

