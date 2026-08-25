#pragma once
#include "unitysdk.h"

class UILabel;

#define UIBATTLEWAVECOUNTDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2232990)
#define UIBATTLEWAVECOUNTDISPLAY_GET_COUNTLABEL_OFFSET UNITYSDK_OFFSET(0x22329A0)
#define UIBATTLEWAVECOUNTDISPLAY_ONENDWAVECOMMAND_OFFSET UNITYSDK_OFFSET(0x2232A30)
#define UIBATTLEWAVECOUNTDISPLAY_REFRESHWAVEALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x2232A60)

	inline static constexpr unsigned int UIBattleWaveCountDisplay_TypeDefinitionIndex = 4452;

	class UIBattleWaveCountDisplay : public Il2CppObject
	{
	public:
		UILabel* countLabel; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEWAVECOUNTDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		UILabel* get_CountLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEWAVECOUNTDISPLAY_GET_COUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void OnEndWaveCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEWAVECOUNTDISPLAY_ONENDWAVECOMMAND_OFFSET))(nullptr);
		}

		::System::Void RefreshWaveAliveCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEWAVECOUNTDISPLAY_REFRESHWAVEALIVECOUNT_OFFSET))(arg, nullptr);
		}

	};

