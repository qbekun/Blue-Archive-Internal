#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49C40)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49C50)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49C60)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49C70)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF49C80)
#define MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF49C90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGSweepRequest_TypeDefinitionIndex = 11925;

	class MiniGameCCGSweepRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int32 _SweepCount_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SweepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SweepCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

