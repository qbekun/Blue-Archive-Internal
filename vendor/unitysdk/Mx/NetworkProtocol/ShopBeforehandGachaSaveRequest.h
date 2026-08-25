#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xF4F3C0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xF4F3D0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4F3E0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_SET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0xF4F3F0)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4F400)
#define MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0xF4F410)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBeforehandGachaSaveRequest_TypeDefinitionIndex = 12132;

	class ShopBeforehandGachaSaveRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetIndex_k__BackingField; // 0x40
		Il2CppObject* _SlotNumber_k__BackingField; // 0x48

		::System::Void set_SlotNumber(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SlotNumber()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TargetIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_SET_TARGETINDEX_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBEFOREHANDGACHASAVEREQUEST_GET_TARGETINDEX_OFFSET))(nullptr);
		}

	};
}

