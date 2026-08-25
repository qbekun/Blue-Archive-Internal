#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameShootingStageRewardExcel; }

#define MX_DATA_MINIGAMESHOOTINGSTAGEREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x19093A0)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameShootingStageRewardInfo_TypeDefinitionIndex = 16226;

	class MiniGameShootingStageRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 RewardId; // 0x10
		::System::Int64 ClearSection; // 0x18
		Il2CppObject* Rewards; // 0x20

		::System::Void .ctor(::MX::Data::Excel::MiniGameShootingStageRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameShootingStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMESHOOTINGSTAGEREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

