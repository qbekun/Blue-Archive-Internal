#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFETROPHYHISTORYRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14110)
#define MX_NETWORKPROTOCOL_CAFETROPHYHISTORYRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14120)
#define MX_NETWORKPROTOCOL_CAFETROPHYHISTORYRESPONSE_SET_RAIDSEASONRANKINGHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF14130)
#define MX_NETWORKPROTOCOL_CAFETROPHYHISTORYRESPONSE_GET_RAIDSEASONRANKINGHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF14140)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeTrophyHistoryResponse_TypeDefinitionIndex = 11395;

	class CafeTrophyHistoryResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _RaidSeasonRankingHistoryDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETROPHYHISTORYRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETROPHYHISTORYRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RaidSeasonRankingHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETROPHYHISTORYRESPONSE_SET_RAIDSEASONRANKINGHISTORYDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RaidSeasonRankingHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETROPHYHISTORYRESPONSE_GET_RAIDSEASONRANKINGHISTORYDBS_OFFSET))(nullptr);
		}

	};
}

