#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Texture; }

#define UIPOPUP_MINIGAMERHYTHMPAUSE_ONCLICKCONTINUEGAME_OFFSET UNITYSDK_OFFSET(0xE3F590)
#define UIPOPUP_MINIGAMERHYTHMPAUSE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE3F680)
#define UIPOPUP_MINIGAMERHYTHMPAUSE_ONCLICKGIVEUP_OFFSET UNITYSDK_OFFSET(0xE3F970)
#define UIPOPUP_MINIGAMERHYTHMPAUSE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xE3FA50)
#define UIPOPUP_MINIGAMERHYTHMPAUSE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE3FA60)
#define UIPOPUP_MINIGAMERHYTHMPAUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE3FCD0)
#define UIPOPUP_MINIGAMERHYTHMPAUSE__ONOPENED_B__13_0_OFFSET UNITYSDK_OFFSET(0xE3FCE0)
#define UIPOPUP_MINIGAMERHYTHMPAUSE_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xE3F5A0)

	inline static constexpr unsigned int UIPopup_MinigameRhythmPause_TypeDefinitionIndex = 725;

	class UIPopup_MinigameRhythmPause : public Il2CppObject
	{
	public:
		::System::Boolean IsGamePaused; // 0x118
		MXButton* ButtonX; // 0x120
		MXButton* ContinueButton; // 0x128
		MXButton* GiveUpButton; // 0x130
		Il2CppObject* DifficultyLabelSprite; // 0x138
		UITexture* DifficultyLabelSpecial; // 0x140
		UILabel* MusicTitleLabel; // 0x148
		::UnityEngine::Transform* Artist; // 0x150
		UILabel* LyricistComposerArrangerNameLabel; // 0x158
		UILabel* MusicLengthLabel; // 0x160
		UITexture* AlbumCoverTexture; // 0x168

		::System::Void OnClickContinueGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMPAUSE_ONCLICKCONTINUEGAME_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMPAUSE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickGiveUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMPAUSE_ONCLICKGIVEUP_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMPAUSE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMPAUSE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMPAUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnOpened_b__13_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMPAUSE__ONOPENED_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMPAUSE_ONCLICKCLOSE_OFFSET))(nullptr);
		}

	};

