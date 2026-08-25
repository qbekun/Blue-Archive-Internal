#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF490C0)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF490D0)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF490E0)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF490F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameDreamMakerResetRequest_TypeDefinitionIndex = 11899;

	class MiniGameDreamMakerResetRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERRESETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

