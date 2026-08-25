#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class MXButton;

#define UIELIMINATERAIDSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E5410)
#define UIELIMINATERAIDSEASONINFO_ONCLICKSEASONREWARD_OFFSET UNITYSDK_OFFSET(0x23E5420)
#define UIELIMINATERAIDSEASONINFO_SETSEASONPERIOD_OFFSET UNITYSDK_OFFSET(0x23E5620)
#define UIELIMINATERAIDSEASONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x23E5BD0)
#define UIELIMINATERAIDSEASONINFO_SETSEASONRANKING_OFFSET UNITYSDK_OFFSET(0x23E5CF0)
#define UIELIMINATERAIDSEASONINFO_REFRESHRANKINGONLY_OFFSET UNITYSDK_OFFSET(0x23E27F0)
#define UIELIMINATERAIDSEASONINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x23E3500)

	inline static constexpr unsigned int UIEliminateRaidSeasonInfo_TypeDefinitionIndex = 5387;

	class UIEliminateRaidSeasonInfo : public Il2CppObject
	{
	public:
		Il2CppObject* PositionSetter; // 0x18
		UILabel* SeasonDescription; // 0x20
		UILabel* SeasonPeriodTypeLabel; // 0x28
		UILabel* SeasonFrom; // 0x30
		UILabel* SeasonTo; // 0x38
		UITexture* TierIcon; // 0x40
		UILabel* Ranking; // 0x48
		UILabel* RankingPoint; // 0x50
		MXButton* SeasonRewardInfo; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDSEASONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickSeasonReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDSEASONINFO_ONCLICKSEASONREWARD_OFFSET))(nullptr);
		}

		::System::Void SetSeasonPeriod()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDSEASONINFO_SETSEASONPERIOD_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDSEASONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetSeasonRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDSEASONINFO_SETSEASONRANKING_OFFSET))(nullptr);
		}

		::System::Void RefreshRankingOnly()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDSEASONINFO_REFRESHRANKINGONLY_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDSEASONINFO_REFRESH_OFFSET))(nullptr);
		}

	};

