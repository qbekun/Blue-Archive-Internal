#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42E60)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_GET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF42E70)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF42E80)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_SET_RAIDSERVERID_OFFSET UNITYSDK_OFFSET(0xF42E90)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF42EA0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42EB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidGiveUpRequest_TypeDefinitionIndex = 11649;

	class EliminateRaidGiveUpRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RaidServerId_k__BackingField; // 0x40
		::System::Boolean _IsPractice_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_GET_RAIDSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void set_RaidServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_SET_RAIDSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGIVEUPREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

