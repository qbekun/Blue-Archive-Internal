#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIMULTIFLOORRAIDPERIODDISPLAY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26A43F0)
#define UIMULTIFLOORRAIDPERIODDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x26A4970)
#define UIMULTIFLOORRAIDPERIODDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A4A90)
#define UIMULTIFLOORRAIDPERIODDISPLAY_ONCLICKSEASONREWARD_OFFSET UNITYSDK_OFFSET(0x26A4AA0)

	inline static constexpr unsigned int UIMultiFloorRaidPeriodDisplay_TypeDefinitionIndex = 6851;

	class UIMultiFloorRaidPeriodDisplay : public Il2CppObject
	{
	public:
		UILabel* SeasonDescriptionLabel; // 0x18
		UILabel* SeasonPeriodLabel; // 0x20
		MXButton* SeasonRewardInfo; // 0x28

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDPERIODDISPLAY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDPERIODDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDPERIODDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickSeasonReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDPERIODDISPLAY_ONCLICKSEASONREWARD_OFFSET))(nullptr);
		}

	};

