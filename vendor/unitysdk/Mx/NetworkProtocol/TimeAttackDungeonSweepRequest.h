#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF50010)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50020)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50030)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF50040)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonSweepRequest_TypeDefinitionIndex = 12166;

	class TimeAttackDungeonSweepRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SweepCount_k__BackingField; // 0x40

		::System::Void set_SweepCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_SweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

	};
}

