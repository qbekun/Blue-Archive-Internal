#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTCHECKREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40C20)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40C30)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40C40)
#define MX_NETWORKPROTOCOL_CONQUESTCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40C50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestCheckRequest_TypeDefinitionIndex = 11565;

	class ConquestCheckRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

