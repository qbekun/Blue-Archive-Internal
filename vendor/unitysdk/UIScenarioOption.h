#pragma once
#include "unitysdk.h"

namespace FlatData { class ConstCommonExcel; }
namespace MX::SaveData { class ClientOption; }

#define UISCENARIOOPTION_GET_AUTOWAITTIME_OFFSET UNITYSDK_OFFSET(0x2030180)
#define UISCENARIOOPTION_GET_AUTONEXTEPISODE_OFFSET UNITYSDK_OFFSET(0x20302F0)
#define UISCENARIOOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2030310)
#define UISCENARIOOPTION_GET_SELECTIONWAITTIME_OFFSET UNITYSDK_OFFSET(0x20303A0)
#define UISCENARIOOPTION_GET_AUTOSELECT_OFFSET UNITYSDK_OFFSET(0x20303D0)
#define UISCENARIOOPTION_GET_CLIENTOPTION_OFFSET UNITYSDK_OFFSET(0x2030220)
#define UISCENARIOOPTION_GET_AUTOSKIPREWARD_OFFSET UNITYSDK_OFFSET(0x20303F0)
#define UISCENARIOOPTION_GET_REWARDWAITTIME_OFFSET UNITYSDK_OFFSET(0x2030410)
#define UISCENARIOOPTION_GET_EPISODECONTINUEWAITTIME_OFFSET UNITYSDK_OFFSET(0x2030440)
#define UISCENARIOOPTION_GETTEXTDISPLAYSPEED_OFFSET UNITYSDK_OFFSET(0x2030470)

	inline static constexpr unsigned int UIScenarioOption_TypeDefinitionIndex = 3211;

	class UIScenarioOption : public Il2CppObject
	{
	public:
		::FlatData::ConstCommonExcel* constCommon; // 0x10

		::System::Single get_AutoWaitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GET_AUTOWAITTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoNextEpisode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GET_AUTONEXTEPISODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_SelectionWaitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GET_SELECTIONWAITTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GET_AUTOSELECT_OFFSET))(nullptr);
		}

		::MX::SaveData::ClientOption* get_clientOption()
		{
			return ((::MX::SaveData::ClientOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GET_CLIENTOPTION_OFFSET))(nullptr);
		}

		::System::Boolean get_AutoSkipReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GET_AUTOSKIPREWARD_OFFSET))(nullptr);
		}

		::System::Single get_RewardWaitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GET_REWARDWAITTIME_OFFSET))(nullptr);
		}

		::System::Single get_EpisodeContinueWaitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GET_EPISODECONTINUEWAITTIME_OFFSET))(nullptr);
		}

		::System::Single GetTextDisplaySpeed(::System::Single arg)
		{
			return ((::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOOPTION_GETTEXTDISPLAYSPEED_OFFSET))(arg, nullptr);
		}

	};

