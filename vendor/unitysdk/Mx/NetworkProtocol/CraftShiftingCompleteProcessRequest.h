#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41F40)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41F50)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41F60)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41F70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingCompleteProcessRequest_TypeDefinitionIndex = 11609;

	class CraftShiftingCompleteProcessRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x40

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGCOMPLETEPROCESSREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

	};
}

