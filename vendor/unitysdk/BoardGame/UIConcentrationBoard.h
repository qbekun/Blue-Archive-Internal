#pragma once
#include "../unitysdk.h"

class UILabel;
class UISprite;
class MXButton;
namespace UnityEngine { class GameObject; }
class UIAdmissionDisplay;
namespace UnityEngine { class Animation; }
namespace MX::Data { class BGMPlayInfo; }
namespace BoardGame { class BoardGameUpdateData; }
namespace BoardGame { class Concentration_FlipCards; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define BOARDGAME_UICONCENTRATIONBOARD_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0xE0B8D0)
#define BOARDGAME_UICONCENTRATIONBOARD_CLOSE_OFFSET UNITYSDK_OFFSET(0xE0B9F0)
#define BOARDGAME_UICONCENTRATIONBOARD_ONCLICKOPTION_OFFSET UNITYSDK_OFFSET(0xE0BA00)
#define BOARDGAME_UICONCENTRATIONBOARD_CO_UPDATE_OFFSET UNITYSDK_OFFSET(0xE0BB00)
#define BOARDGAME_UICONCENTRATIONBOARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE0BBB0)
#define BOARDGAME_UICONCENTRATIONBOARD_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0xE0BD10)
#define BOARDGAME_UICONCENTRATIONBOARD_COREADYTOOPEN_OFFSET UNITYSDK_OFFSET(0xE0BCA0)
#define BOARDGAME_UICONCENTRATIONBOARD_ONCLICKTOLOBBY_OFFSET UNITYSDK_OFFSET(0xE0BD40)
#define BOARDGAME_UICONCENTRATIONBOARD_SETEVENTBGM_OFFSET UNITYSDK_OFFSET(0xE08A20)
#define BOARDGAME_UICONCENTRATIONBOARD_PLAYFLIPBACKANIMATION_OFFSET UNITYSDK_OFFSET(0xE0BED0)
#define BOARDGAME_UICONCENTRATIONBOARD_ONCLICKREWARD_OFFSET UNITYSDK_OFFSET(0xE0BF80)
#define BOARDGAME_UICONCENTRATIONBOARD_ONCLICKFLIPCARDS_OFFSET UNITYSDK_OFFSET(0xE0C100)
#define BOARDGAME_UICONCENTRATIONBOARD__COREADYTOOPEN_B__27_0_OFFSET UNITYSDK_OFFSET(0xE0C1C0)
#define BOARDGAME_UICONCENTRATIONBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0C1D0)
#define BOARDGAME_UICONCENTRATIONBOARD_PLAYFLIPANIMATION_OFFSET UNITYSDK_OFFSET(0xE0C1F0)
#define BOARDGAME_UICONCENTRATIONBOARD_SETPLAYINGCARDSBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0xE0C2A0)
#define BOARDGAME_UICONCENTRATIONBOARD_FLIPBACKALLCARDS_OFFSET UNITYSDK_OFFSET(0xE0C4F0)
#define BOARDGAME_UICONCENTRATIONBOARD_ONCLICKPLAYGUIDE_OFFSET UNITYSDK_OFFSET(0xE0C580)
#define BOARDGAME_UICONCENTRATIONBOARD_ONBACK_OFFSET UNITYSDK_OFFSET(0xE0C700)
#define BOARDGAME_UICONCENTRATIONBOARD_SUFFLE_OFFSET UNITYSDK_OFFSET(0xE0C7F0)
#define BOARDGAME_UICONCENTRATIONBOARD_RESET_OFFSET UNITYSDK_OFFSET(0xE0C8A0)
#define BOARDGAME_UICONCENTRATIONBOARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xE0C940)
#define BOARDGAME_UICONCENTRATIONBOARD_SETFLIPCARDBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0xE0CEC0)
#define BOARDGAME_UICONCENTRATIONBOARD_SHOWRESULT_OFFSET UNITYSDK_OFFSET(0xE0CF20)
#define BOARDGAME_UICONCENTRATIONBOARD_PLAYMATCHEDANIMATION_OFFSET UNITYSDK_OFFSET(0xE0D0B0)
#define BOARDGAME_UICONCENTRATIONBOARD_PLAYRELEASESELECTANIMATION_OFFSET UNITYSDK_OFFSET(0xE0D160)
#define BOARDGAME_UICONCENTRATIONBOARD__SHOWRESULT_B__39_0_OFFSET UNITYSDK_OFFSET(0xE0D210)
#define BOARDGAME_UICONCENTRATIONBOARD__ONBACK_B__25_0_OFFSET UNITYSDK_OFFSET(0xE0D290)

namespace BoardGame
{
	inline static constexpr unsigned int UIConcentrationBoard_TypeDefinitionIndex = 10293;

	class UIConcentrationBoard : public Il2CppObject
	{
	public:
		UILabel* remainChanceLabel; // 0xD8
		UISprite* costSprite; // 0xE0
		UILabel* costLabel; // 0xE8
		MXButton* playGuideButton; // 0xF0
		MXButton* optionButton; // 0xF8
		MXButton* lobbyButton; // 0x100
		UILabel* roundLabel; // 0x108
		MXButton* rewardButton; // 0x110
		MXButton* skipButton; // 0x118
		MXButton* flipButton; // 0x120
		::UnityEngine::GameObject* flipButtonEnableRoot; // 0x128
		::UnityEngine::GameObject* flipButtonDisableRoot; // 0x130
		UIAdmissionDisplay* flipButtonAdmissionDisplay; // 0x138
		Il2CppObject* remainCards; // 0x140
		Il2CppObject* playingCards; // 0x148
		::UnityEngine::Animation* CardListAnimation; // 0x150
		::System::Single flipBackWaitDelay; // 0x158
		::System::Single shuffleWaveDelay; // 0x15C
		::System::String* OpenAnimName; // 0x0
		::System::String* ResetAnimName; // 0x0
		::System::Boolean syncComplete; // 0x160
		::System::Boolean isReadyToOpen; // 0x161
		::System::Boolean skipped; // 0x162
		::MX::Data::BGMPlayInfo* eventBGMPlayInfo; // 0x168

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_CLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_ONCLICKOPTION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Update(::BoardGame::BoardGameUpdateData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::BoardGame::BoardGameUpdateData*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_CO_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoReadyToOpen()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_COREADYTOOPEN_OFFSET))(nullptr);
		}

		::System::Void OnClickToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_ONCLICKTOLOBBY_OFFSET))(nullptr);
		}

		::System::Void SetEventBGM(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_SETEVENTBGM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayFlipBackAnimation(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_PLAYFLIPBACKANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_ONCLICKREWARD_OFFSET))(nullptr);
		}

		::System::Void OnClickFlipCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_ONCLICKFLIPCARDS_OFFSET))(nullptr);
		}

		::System::Void _CoReadyToOpen_b__27_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD__COREADYTOOPEN_B__27_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayFlipAnimation(::BoardGame::Concentration_FlipCards* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::BoardGame::Concentration_FlipCards*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_PLAYFLIPANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlayingCardsButtonEnable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_SETPLAYINGCARDSBUTTONENABLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* FlipBackAllCards()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_FLIPBACKALLCARDS_OFFSET))(nullptr);
		}

		::System::Void OnClickPlayGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_ONCLICKPLAYGUIDE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_ONBACK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Suffle(::System::Boolean arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_SUFFLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_RESET_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetFlipCardButtonEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_SETFLIPCARDBUTTONENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowResult(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_SHOWRESULT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayMatchedAnimation(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_PLAYMATCHEDANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayReleaseSelectAnimation(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD_PLAYRELEASESELECTANIMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _ShowResult_b__39_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD__SHOWRESULT_B__39_0_OFFSET))(nullptr);
		}

		::System::Void _OnBack_b__25_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONBOARD__ONBACK_B__25_0_OFFSET))(nullptr);
		}

	};
}

