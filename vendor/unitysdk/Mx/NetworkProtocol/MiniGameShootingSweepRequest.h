#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF48760)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF48770)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48780)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF48790)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF487A0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF487B0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF487C0)
#define MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF487D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameShootingSweepRequest_TypeDefinitionIndex = 11877;

	class MiniGameShootingSweepRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _UniqueId_k__BackingField; // 0x48
		::System::Int64 _SweepCount_k__BackingField; // 0x50

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SweepCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMESHOOTINGSWEEPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

