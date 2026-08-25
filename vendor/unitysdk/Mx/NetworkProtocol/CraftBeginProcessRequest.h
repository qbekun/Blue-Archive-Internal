#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41C80)
#define MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41C90)
#define MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41CA0)
#define MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41CB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftBeginProcessRequest_TypeDefinitionIndex = 11601;

	class CraftBeginProcessRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x40

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTBEGINPROCESSREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

	};
}

