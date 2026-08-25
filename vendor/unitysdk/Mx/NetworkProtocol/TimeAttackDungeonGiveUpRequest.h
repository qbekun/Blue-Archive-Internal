#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4FF30)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPREQUEST_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xF4FF40)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPREQUEST_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xF4FF50)
#define MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4FF60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int TimeAttackDungeonGiveUpRequest_TypeDefinitionIndex = 12164;

	class TimeAttackDungeonGiveUpRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RoomId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RoomId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPREQUEST_SET_ROOMID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RoomId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPREQUEST_GET_ROOMID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_TIMEATTACKDUNGEONGIVEUPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

