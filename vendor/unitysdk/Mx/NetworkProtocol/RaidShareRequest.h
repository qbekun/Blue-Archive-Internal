#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDSHAREREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D1E0)
#define MX_NETWORKPROTOCOL_RAIDSHAREREQUEST_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF4D1F0)
#define MX_NETWORKPROTOCOL_RAIDSHAREREQUEST_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF4D200)
#define MX_NETWORKPROTOCOL_RAIDSHAREREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D210)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidShareRequest_TypeDefinitionIndex = 12039;

	class RaidShareRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RaidServerId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSHAREREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSHAREREQUEST_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSHAREREQUEST_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDSHAREREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

