#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UILabel;
namespace MX::Data::Excel { class EventContentDiceRaceEffectExcel; }

#define UIDICERACETRACKFINISH_PLAYVOICETRACKFINISH_OFFSET UNITYSDK_OFFSET(0x23D8040)
#define UIDICERACETRACKFINISH_SHOWTRACKFINISHPRODUCTION_OFFSET UNITYSDK_OFFSET(0x23D80C0)
#define UIDICERACETRACKFINISH_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D8340)

	inline static constexpr unsigned int UIDiceRaceTrackFinish_TypeDefinitionIndex = 5352;

	class UIDiceRaceTrackFinish : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* finishAnimation; // 0x18
		UILabel* finishCountLabel; // 0x20
		::System::String* completeLocalizeKey; // 0x28

		::System::Void PlayVoiceTrackFinish(::MX::Data::Excel::EventContentDiceRaceEffectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceEffectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACETRACKFINISH_PLAYVOICETRACKFINISH_OFFSET))(arg, nullptr);
		}

		::System::Void ShowTrackFinishProduction(::MX::Data::Excel::EventContentDiceRaceEffectExcel* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceEffectExcel*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACETRACKFINISH_SHOWTRACKFINISHPRODUCTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICERACETRACKFINISH_.CTOR_OFFSET))(nullptr);
		}

	};

