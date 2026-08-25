#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10CC0)
#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_SET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xF10CD0)
#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_SET_AUTOREFRESHTIME_OFFSET UNITYSDK_OFFSET(0xF10CE0)
#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_GET_OPPONENTUSERDBS_OFFSET UNITYSDK_OFFSET(0xF10CF0)
#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10D00)
#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_SET_OPPONENTUSERDBS_OFFSET UNITYSDK_OFFSET(0xF10D10)
#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_GET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xF10D20)
#define MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_GET_AUTOREFRESHTIME_OFFSET UNITYSDK_OFFSET(0xF10D30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaOpponentListResponse_TypeDefinitionIndex = 11284;

	class ArenaOpponentListResponse : public Il2CppObject
	{
	public:
		::System::Int64 _PlayerRank_k__BackingField; // 0x50
		Il2CppObject* _OpponentUserDBs_k__BackingField; // 0x58
		::System::DateTime* _AutoRefreshTime_k__BackingField; // 0x60

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PlayerRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_SET_PLAYERRANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_AutoRefreshTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_SET_AUTOREFRESHTIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OpponentUserDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_GET_OPPONENTUSERDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OpponentUserDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_SET_OPPONENTUSERDBS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PlayerRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_GET_PLAYERRANK_OFFSET))(nullptr);
		}

		::System::DateTime* get_AutoRefreshTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAOPPONENTLISTRESPONSE_GET_AUTOREFRESHTIME_OFFSET))(nullptr);
		}

	};
}

