#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48260)
#define MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF48270)
#define MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF48280)
#define MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48290)
#define MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF482A0)
#define MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF482B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameEnterStageRequest_TypeDefinitionIndex = 11861;

	class MiniGameEnterStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _UniqueId_k__BackingField; // 0x48

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEENTERSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

