#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48D80)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48D90)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48DA0)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48DB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardResurrectRequest_TypeDefinitionIndex = 11891;

	class MiniGameTableBoardResurrectRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDRESURRECTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

