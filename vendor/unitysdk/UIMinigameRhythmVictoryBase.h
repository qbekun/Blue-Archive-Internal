#pragma once
#include "unitysdk.h"

class UIMinigameRhythmVictory;
namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }

#define UIMINIGAMERHYTHMVICTORYBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD23B30)
#define UIMINIGAMERHYTHMVICTORYBASE_INITIALIZEUIRESOURCES_OFFSET UNITYSDK_OFFSET(0xD23B40)
#define UIMINIGAMERHYTHMVICTORYBASE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xD23BD0)
#define UIMINIGAMERHYTHMVICTORYBASE_SENDMINIGAMERESULT_OFFSET UNITYSDK_OFFSET(0xD23BE0)
#define UIMINIGAMERHYTHMVICTORYBASE___N__0_OFFSET UNITYSDK_OFFSET(0xD23C70)
#define UIMINIGAMERHYTHMVICTORYBASE_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xD23C80)

	inline static constexpr unsigned int UIMinigameRhythmVictoryBase_TypeDefinitionIndex = 718;

	class UIMinigameRhythmVictoryBase : public Il2CppObject
	{
	public:
		UIMinigameRhythmVictory* rhythmVictory; // 0xD8
		::MX::MinigameRhythm::MinigameRhythmLogicManager* logicManager; // 0xE0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORYBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitializeUIResources()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORYBASE_INITIALIZEUIRESOURCES_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORYBASE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SendMinigameResult()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORYBASE_SENDMINIGAMERESULT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORYBASE___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORYBASE_CO_LOADING_OFFSET))(nullptr);
		}

	};

