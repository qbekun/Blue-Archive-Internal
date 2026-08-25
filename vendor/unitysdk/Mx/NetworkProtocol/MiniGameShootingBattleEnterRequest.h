#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48660)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF48670)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF48680)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF48690)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF486A0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF486B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameShootingBattleEnterRequest_TypeDefinitionIndex = 11873;

	class MiniGameShootingBattleEnterRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _UniqueId_k__BackingField; // 0x48

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGBATTLEENTERREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

