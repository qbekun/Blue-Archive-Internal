#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF48840)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48850)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48860)
#define MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48870)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameTableBoardSyncRequest_TypeDefinitionIndex = 11879;

	class MiniGameTableBoardSyncRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMETABLEBOARDSYNCREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

