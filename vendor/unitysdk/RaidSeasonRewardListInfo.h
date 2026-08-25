#pragma once
#include "unitysdk.h"

class RaidRewardSubTab;
namespace MX::Data { class RaidRankingRewardInfo; }

#define RAIDSEASONREWARDLISTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x278A670)

	inline static constexpr unsigned int RaidSeasonRewardListInfo_TypeDefinitionIndex = 7416;

	class RaidSeasonRewardListInfo : public Il2CppObject
	{
	public:
		RaidRewardSubTab* Type; // 0x10
		::System::String* ItemText; // 0x18
		Il2CppObject* Rewards; // 0x20
		::System::Boolean AlreadyReceive; // 0x28
		::MX::Data::RaidRankingRewardInfo* RaidRankingRewardInfo; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSEASONREWARDLISTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

