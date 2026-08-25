#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF43260)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF43270)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF43280)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43290)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET UNITYSDK_OFFSET(0xF432A0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xF432B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidSweepRequest_TypeDefinitionIndex = 11661;

	class EliminateRaidSweepRequest : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x40
		::System::Int32 _SweepCount_k__BackingField; // 0x48

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SweepCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_SET_SWEEPCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int32 get_SweepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_GET_SWEEPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDSWEEPREQUEST_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

