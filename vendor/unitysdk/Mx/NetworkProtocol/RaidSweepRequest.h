#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF4D4E0)
#define MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF4D4F0)
#define MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D500)
#define MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4D510)
#define MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4D520)
#define MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D530)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidSweepRequest_TypeDefinitionIndex = 12049;

	class RaidSweepRequest : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x40
		::System::Int64 _SweepCount_k__BackingField; // 0x48

		::System::Int64 get_SweepCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SweepCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSWEEPREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

