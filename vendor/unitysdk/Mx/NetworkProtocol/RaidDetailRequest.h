#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4C7B0)
#define MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4C7C0)
#define MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C7D0)
#define MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C7E0)
#define MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF4C7F0)
#define MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF4C800)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidDetailRequest_TypeDefinitionIndex = 12021;

	class RaidDetailRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RaidServerId_k__BackingField; // 0x40
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x48

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDDETAILREQUEST_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

	};
}

