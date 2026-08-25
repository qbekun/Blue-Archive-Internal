#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF157C0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xF157D0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF157E0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF157F0)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_SET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF15800)
#define MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_SET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0xF15810)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterGearUnlockRequest_TypeDefinitionIndex = 11456;

	class CharacterGearUnlockRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterServerId_k__BackingField; // 0x40
		::System::Int32 _SlotIndex_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_SET_CHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERGEARUNLOCKREQUEST_SET_SLOTINDEX_OFFSET))(arg, nullptr);
		}

	};
}

