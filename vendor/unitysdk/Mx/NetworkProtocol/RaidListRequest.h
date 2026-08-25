#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Difficulty; }
namespace MX::NetworkProtocol { class RaidRoomSortOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDLISTREQUEST_SET_RAIDROOMSORTOPTION_OFFSET UNITYSDK_OFFSET(0xF4C5F0)
#define MX_NETWORKPROTOCOL_RAIDLISTREQUEST_SET_RAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4C600)
#define MX_NETWORKPROTOCOL_RAIDLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C610)
#define MX_NETWORKPROTOCOL_RAIDLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C620)
#define MX_NETWORKPROTOCOL_RAIDLISTREQUEST_GET_RAIDROOMSORTOPTION_OFFSET UNITYSDK_OFFSET(0xF4C630)
#define MX_NETWORKPROTOCOL_RAIDLISTREQUEST_SET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0xF4C640)
#define MX_NETWORKPROTOCOL_RAIDLISTREQUEST_GET_RAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0xF4C650)
#define MX_NETWORKPROTOCOL_RAIDLISTREQUEST_GET_RAIDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4C660)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidListRequest_TypeDefinitionIndex = 12017;

	class RaidListRequest : public Il2CppObject
	{
	public:
		::System::String* _RaidBossGroup_k__BackingField; // 0x40
		::FlatData::Difficulty* _RaidDifficulty_k__BackingField; // 0x48
		::MX::NetworkProtocol::RaidRoomSortOption* _RaidRoomSortOption_k__BackingField; // 0x4C

		::System::Void set_RaidRoomSortOption(::MX::NetworkProtocol::RaidRoomSortOption* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidRoomSortOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTREQUEST_SET_RAIDROOMSORTOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidDifficulty(::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTREQUEST_SET_RAIDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::RaidRoomSortOption* get_RaidRoomSortOption()
		{
			return ((::MX::NetworkProtocol::RaidRoomSortOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTREQUEST_GET_RAIDROOMSORTOPTION_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTREQUEST_SET_RAIDBOSSGROUP_OFFSET))(str, nullptr);
		}

		::System::String* get_RaidBossGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTREQUEST_GET_RAIDBOSSGROUP_OFFSET))(nullptr);
		}

		::FlatData::Difficulty* get_RaidDifficulty()
		{
			return ((::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTREQUEST_GET_RAIDDIFFICULTY_OFFSET))(nullptr);
		}

	};
}

