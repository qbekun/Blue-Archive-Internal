#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41AA0)
#define MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41AB0)
#define MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41AC0)
#define MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_SET_LEAFNODEINDEX_OFFSET UNITYSDK_OFFSET(0xF41AD0)
#define MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_GET_LEAFNODEINDEX_OFFSET UNITYSDK_OFFSET(0xF41AE0)
#define MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41AF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftSelectNodeRequest_TypeDefinitionIndex = 11597;

	class CraftSelectNodeRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x40
		::System::Int64 _LeafNodeIndex_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LeafNodeIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_SET_LEAFNODEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LeafNodeIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_GET_LEAFNODEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSELECTNODEREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

	};
}

