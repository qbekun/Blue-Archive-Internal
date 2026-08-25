#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFREQUEST_SET_SELECTEDBUFFID_OFFSET UNITYSDK_OFFSET(0xF45270)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45280)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFREQUEST_GET_SELECTEDBUFFID_OFFSET UNITYSDK_OFFSET(0xF45290)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF452A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentSelectBuffRequest_TypeDefinitionIndex = 11731;

	class EventContentSelectBuffRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SelectedBuffId_k__BackingField; // 0x40

		::System::Void set_SelectedBuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFREQUEST_SET_SELECTEDBUFFID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedBuffId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFREQUEST_GET_SELECTEDBUFFID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSELECTBUFFREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

