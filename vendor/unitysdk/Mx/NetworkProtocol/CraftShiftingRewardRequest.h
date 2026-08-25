#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41FE0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41FF0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42000)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42010)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingRewardRequest_TypeDefinitionIndex = 11611;

	class CraftShiftingRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x40

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

