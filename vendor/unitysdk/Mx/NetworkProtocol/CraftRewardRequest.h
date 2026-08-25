#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41DC0)
#define MX_NETWORKPROTOCOL_CRAFTREWARDREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41DD0)
#define MX_NETWORKPROTOCOL_CRAFTREWARDREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41DE0)
#define MX_NETWORKPROTOCOL_CRAFTREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41DF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftRewardRequest_TypeDefinitionIndex = 11605;

	class CraftRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

