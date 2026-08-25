#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41D00)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41D10)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41D20)
#define MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41D30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftCompleteProcessRequest_TypeDefinitionIndex = 11603;

	class CraftCompleteProcessRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x40

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTCOMPLETEPROCESSREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

