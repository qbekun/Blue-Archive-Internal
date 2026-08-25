#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class RaidEndBattleResponse; }
namespace MX::NetworkProtocol { class EliminateRaidEndBattleResponse; }
namespace MX::NetworkProtocol { class PermanentRaidEndBattleResponse; }

#define RAIDENDBATTLERESPONSEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3570)
#define RAIDENDBATTLERESPONSEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED35D0)
#define RAIDENDBATTLERESPONSEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3630)

	inline static constexpr unsigned int RaidEndBattleResponseInfo_TypeDefinitionIndex = 1795;

	class RaidEndBattleResponseInfo : public Il2CppObject
	{
	public:
		::System::Int64 RankingPoint; // 0x10
		::System::Int64 BestRankingPoint; // 0x18
		::System::Int64 ClearTimePoint; // 0x20
		::System::Int64 HPPercentScorePoint; // 0x28
		::System::Int64 DefaultClearPoint; // 0x30
		::MX::GameLogic::Parcel::ParcelResultDB* ParcelResultDB; // 0x38

		::System::Void .ctor(::MX::NetworkProtocol::RaidEndBattleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLERESPONSEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::EliminateRaidEndBattleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EliminateRaidEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLERESPONSEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::PermanentRaidEndBattleResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::PermanentRaidEndBattleResponse*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLERESPONSEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

