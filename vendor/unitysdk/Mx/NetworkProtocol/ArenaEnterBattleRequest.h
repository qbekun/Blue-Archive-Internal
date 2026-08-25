#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_SET_OPPONENTACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xF10D40)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10D50)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_GET_OPPONENTINDEX_OFFSET UNITYSDK_OFFSET(0xF10D60)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_SET_OPPONENTINDEX_OFFSET UNITYSDK_OFFSET(0xF10D70)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10D80)
#define MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_GET_OPPONENTACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xF10D90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaEnterBattleRequest_TypeDefinitionIndex = 11285;

	class ArenaEnterBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _OpponentAccountServerId_k__BackingField; // 0x40
		::System::Int64 _OpponentIndex_k__BackingField; // 0x48

		::System::Void set_OpponentAccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_SET_OPPONENTACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_OpponentIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_GET_OPPONENTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_OpponentIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_SET_OPPONENTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_OpponentAccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAENTERBATTLEREQUEST_GET_OPPONENTACCOUNTSERVERID_OFFSET))(nullptr);
		}

	};
}

