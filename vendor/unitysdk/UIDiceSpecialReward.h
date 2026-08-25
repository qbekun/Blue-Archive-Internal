#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace MX::Data::Excel { class EventContentDiceRaceEffectExcel; }

#define UIDICESPECIALREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D84D0)
#define UIDICESPECIALREWARD_PLAYVOICESPECIALREWARD_OFFSET UNITYSDK_OFFSET(0x23D84E0)
#define UIDICESPECIALREWARD_SHOWSPECIALREWARDPRODUCTION_OFFSET UNITYSDK_OFFSET(0x23D8560)

	inline static constexpr unsigned int UIDiceSpecialReward_TypeDefinitionIndex = 5358;

	class UIDiceSpecialReward : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* eventAnimation; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICESPECIALREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayVoiceSpecialReward(::MX::Data::Excel::EventContentDiceRaceEffectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceEffectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICESPECIALREWARD_PLAYVOICESPECIALREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void ShowSpecialRewardProduction(::MX::Data::Excel::EventContentDiceRaceEffectExcel* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceEffectExcel*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICESPECIALREWARD_SHOWSPECIALREWARDPRODUCTION_OFFSET))(arg, arg2, nullptr);
		}

	};

