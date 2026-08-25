#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Animation; }
namespace MX::Data::Excel { class EventContentDiceRaceEffectExcel; }

#define UIDICERACERESULT_DICEPLAY_OFFSET UNITYSDK_OFFSET(0x23D73D0)
#define UIDICERACERESULT_DICEPLAYVOICE_OFFSET UNITYSDK_OFFSET(0x23D7600)
#define UIDICERACERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D76C0)

	inline static constexpr unsigned int UIDiceRaceResult_TypeDefinitionIndex = 5344;

	class UIDiceRaceResult : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* diceCenterAniObject; // 0x18
		UILabel* diceNumLabel; // 0x20
		::UnityEngine::Animation* diceAnimation; // 0x28

		::System::Void DicePlay(::System::Int32 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACERESULT_DICEPLAY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void DicePlayVoice(::MX::Data::Excel::EventContentDiceRaceEffectExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentDiceRaceEffectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACERESULT_DICEPLAYVOICE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICERACERESULT_.CTOR_OFFSET))(nullptr);
		}

	};

