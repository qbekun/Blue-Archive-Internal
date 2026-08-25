#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xF43680)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF43690)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF436A0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_GET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0xF436B0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xF436C0)
#define MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_SET_TARGETSERVERID_OFFSET UNITYSDK_OFFSET(0xF436D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EquipmentItemLockRequest_TypeDefinitionIndex = 11673;

	class EquipmentItemLockRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetServerId_k__BackingField; // 0x40
		::System::Boolean _IsLocked_k__BackingField; // 0x48

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_GET_ISLOCKED_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_GET_TARGETSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_IsLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_SET_ISLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EQUIPMENTITEMLOCKREQUEST_SET_TARGETSERVERID_OFFSET))(arg, nullptr);
		}

	};
}

