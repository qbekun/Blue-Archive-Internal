#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
class UISprite;
class MXButton;

#define UIMINIGAMERHYTHMVICTORY_ONCLICKTOLOBBY_OFFSET UNITYSDK_OFFSET(0xD22CE0)
#define UIMINIGAMERHYTHMVICTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD22E30)
#define UIMINIGAMERHYTHMVICTORY_COINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD23070)
#define UIMINIGAMERHYTHMVICTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0xD23100)

	inline static constexpr unsigned int UIMinigameRhythmVictory_TypeDefinitionIndex = 713;

	class UIMinigameRhythmVictory : public Il2CppObject
	{
	public:
		UILabel* MusicTitle; // 0x18
		UITexture* SpecialDifficultyLabel; // 0x20
		UISprite* NormalDifficultyLabel; // 0x28
		UILabel* NormalDifficultyText; // 0x30
		UILabel* ThisPlayScoreLabel; // 0x38
		UILabel* BestScoreLabel; // 0x40
		UILabel* AccumulatedPlayScoreLabel; // 0x48
		UILabel* CriticalCountLabel; // 0x50
		UILabel* AttackCountLabel; // 0x58
		UILabel* MissCountLabel; // 0x60
		UILabel* ComboCountLabel; // 0x68
		UITexture* IsFullComboTexture; // 0x70
		UITexture* IsBestRecordTexture; // 0x78
		UITexture* AlbumCoverTexture; // 0x80
		MXButton* ToLobbyButton; // 0x88
		::Il2CppArray<::System::Object*>* difficultyText; // 0x90

		::System::Void OnClickToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORY_ONCLICKTOLOBBY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoInitialize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORY_COINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMVICTORY_AWAKE_OFFSET))(nullptr);
		}

	};

