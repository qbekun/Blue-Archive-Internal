#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
class UILabel;
namespace UnityEngine { class Animation; }
class UIMinigameBgmAlbum;
class UIMinigameLobbyBgmInfo;
class DifficultyTabController;
namespace MX::Data { class MiniGameRhythmData; }
namespace MX::Data { class EventContentSeasonInfo; }
class UIMinigameRhythmMission;
class SwipeDir;
namespace FlatData { class Difficulty; }
class UIEventPlayGuide;
namespace MX::Data { class MiniGameRhythmBgmInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIMINIGAMERHYTHMLOBBY_ONCLICKOPTION_OFFSET UNITYSDK_OFFSET(0xD1B690)
#define UIMINIGAMERHYTHMLOBBY_GET_CENTERALBUM_OFFSET UNITYSDK_OFFSET(0xD1B740)
#define UIMINIGAMERHYTHMLOBBY__CHECKBGMOPEN_G__PLAYANDINIT|46_0_OFFSET UNITYSDK_OFFSET(0xD1B760)
#define UIMINIGAMERHYTHMLOBBY_SAVECURRENTBGMINDEX_OFFSET UNITYSDK_OFFSET(0xD1B7F0)
#define UIMINIGAMERHYTHMLOBBY_CHECKBGMOPEN_OFFSET UNITYSDK_OFFSET(0xD1B940)
#define UIMINIGAMERHYTHMLOBBY_ONCLICKMISSION_OFFSET UNITYSDK_OFFSET(0xD1C730)
#define UIMINIGAMERHYTHMLOBBY_GET_CURRENTEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD1C800)
#define UIMINIGAMERHYTHMLOBBY_ONCLICKPLAYGUIDE_OFFSET UNITYSDK_OFFSET(0xD1C820)
#define UIMINIGAMERHYTHMLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xD1C8F0)
#define UIMINIGAMERHYTHMLOBBY_PREPAREANIMATION_OFFSET UNITYSDK_OFFSET(0xD1C670)
#define UIMINIGAMERHYTHMLOBBY__ONCLICKMISSION_B__58_0_OFFSET UNITYSDK_OFFSET(0xD1CD60)
#define UIMINIGAMERHYTHMLOBBY_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0xD1CE20)
#define UIMINIGAMERHYTHMLOBBY_VALIDATEMINIGAMERHYTHMSAVEDATA_OFFSET UNITYSDK_OFFSET(0xD1D000)
#define UIMINIGAMERHYTHMLOBBY_RESETBGMINDEX_OFFSET UNITYSDK_OFFSET(0xD1D140)
#define UIMINIGAMERHYTHMLOBBY_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0xD1D160)
#define UIMINIGAMERHYTHMLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD1D340)
#define UIMINIGAMERHYTHMLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0xD1D360)
#define UIMINIGAMERHYTHMLOBBY_SETINDICATOR_OFFSET UNITYSDK_OFFSET(0xD1DBE0)
#define UIMINIGAMERHYTHMLOBBY_SETTOTALSCOREUI_OFFSET UNITYSDK_OFFSET(0xD1C9D0)
#define UIMINIGAMERHYTHMLOBBY_SWIPE_OFFSET UNITYSDK_OFFSET(0xD1DDD0)
#define UIMINIGAMERHYTHMLOBBY_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xD1DDF0)
#define UIMINIGAMERHYTHMLOBBY_SETBGMINFO_OFFSET UNITYSDK_OFFSET(0xD1C280)
#define UIMINIGAMERHYTHMLOBBY_ONCLICKGAMESTART_OFFSET UNITYSDK_OFFSET(0xD1DE20)
#define UIMINIGAMERHYTHMLOBBY_ONCLICKAUTOOFF_OFFSET UNITYSDK_OFFSET(0xD1E1D0)
#define UIMINIGAMERHYTHMLOBBY__ONCLICKGAMESTART_G__REQUESTSTART|49_0_OFFSET UNITYSDK_OFFSET(0xD1E030)
#define UIMINIGAMERHYTHMLOBBY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD1E300)
#define UIMINIGAMERHYTHMLOBBY_TRYSHOWEVENTCONTENTGUIDE_OFFSET UNITYSDK_OFFSET(0xD1CC50)
#define UIMINIGAMERHYTHMLOBBY_ONCLICKGAMESTARTDISABLE_OFFSET UNITYSDK_OFFSET(0xD1E550)
#define UIMINIGAMERHYTHMLOBBY_INDICATOROFF_OFFSET UNITYSDK_OFFSET(0xD1DD40)
#define UIMINIGAMERHYTHMLOBBY__ONCLICKPLAYGUIDE_B__59_0_OFFSET UNITYSDK_OFFSET(0xD1E830)
#define UIMINIGAMERHYTHMLOBBY_INDICATORON_OFFSET UNITYSDK_OFFSET(0xD1DCB0)
#define UIMINIGAMERHYTHMLOBBY_ENTERRHYTHMGAME_OFFSET UNITYSDK_OFFSET(0xD1EA20)
#define UIMINIGAMERHYTHMLOBBY_GET_OTHERALBUM_OFFSET UNITYSDK_OFFSET(0xD1C660)
#define UIMINIGAMERHYTHMLOBBY_ONCLICKAUTOON_OFFSET UNITYSDK_OFFSET(0xD1EAD0)
#define UIMINIGAMERHYTHMLOBBY_HANDLEMINIGAMEENTERSTAGERESPONSE_OFFSET UNITYSDK_OFFSET(0xD1EC00)

	inline static constexpr unsigned int UIMinigameRhythmLobby_TypeDefinitionIndex = 693;

	class UIMinigameRhythmLobby : public Il2CppObject
	{
	public:
		MXButton* GameStartButton; // 0x18
		MXButton* GameStartDisableButton; // 0x20
		MXButton* AutoOnButton; // 0x28
		MXButton* AutoOffButton; // 0x30
		MXButton* BackButton; // 0x38
		MXButton* OptionButton; // 0x40
		MXButton* PrevButton; // 0x48
		MXButton* NextButton; // 0x50
		MXButton* MissionButton; // 0x58
		::UnityEngine::GameObject* MissionReddot; // 0x60
		MXButton* PlayGuideButton; // 0x68
		::UnityEngine::ParticleSystem* MusicEqualizerEffect; // 0x70
		UILabel* TotalAccumulatedScoreLabel; // 0x78
		UILabel* TotalBestScoreLabel; // 0x80
		::UnityEngine::GameObject* SpecialTag; // 0x88
		Il2CppObject* IndiCatorList; // 0x90
		::UnityEngine::Animation* UILobbyEnteringAni; // 0x98
		::UnityEngine::Animation* StartButtonOpenAni; // 0xA0
		UIMinigameBgmAlbum* CurrentAlbum; // 0xA8
		UIMinigameBgmAlbum* NextAlbum; // 0xB0
		::System::Boolean currentAlbumIsCenter; // 0xB8
		UIMinigameLobbyBgmInfo* UIMinigameBgmInfo; // 0xC0
		::UnityEngine::GameObject* MinigameRhythmLogicObject; // 0xC8
		DifficultyTabController* difficultyTabController; // 0xD0
		::MX::Data::MiniGameRhythmData* currentRhythmData; // 0xD8
		::System::Int32 currentBgmIndex; // 0xE0
		::System::Int32 previousBgmIndex; // 0xE4
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0xE8
		Il2CppObject* bgmList; // 0xF0
		::System::Int64 totalAccumulatedScore; // 0xF8
		::System::Boolean fromWorkLobby; // 0x100

		::System::Void OnClickOption()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKOPTION_OFFSET))(nullptr);
		}

		UIMinigameBgmAlbum* get_centerAlbum()
		{
			return ((UIMinigameBgmAlbum*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_GET_CENTERALBUM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _CheckBgmOpen_g__PlayAndInit|46_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY__CHECKBGMOPEN_G__PLAYANDINIT|46_0_OFFSET))(nullptr);
		}

		::System::Void SaveCurrentBgmIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_SAVECURRENTBGMINDEX_OFFSET))(nullptr);
		}

		::System::Void CheckBgmOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_CHECKBGMOPEN_OFFSET))(nullptr);
		}

		::System::Void OnClickMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKMISSION_OFFSET))(nullptr);
		}

		::System::Int64 get_currentEventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_GET_CURRENTEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void OnClickPlayGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKPLAYGUIDE_OFFSET))(nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void PrepareAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_PREPAREANIMATION_OFFSET))(nullptr);
		}

		::System::Void _OnClickMission_b__58_0(UIMinigameRhythmMission* arg)
		{
			((::System::Void(*)(UIMinigameRhythmMission*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY__ONCLICKMISSION_B__58_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Void ValidateMinigameRhythmSaveData(::MX::SaveData::MiniGameRhythmSaveData&* arg)
		{
			((::System::Void(*)(::MX::SaveData::MiniGameRhythmSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_VALIDATEMINIGAMERHYTHMSAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ResetBgmIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_RESETBGMINDEX_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetIndiCator(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_SETINDICATOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetTotalScoreUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_SETTOTALSCOREUI_OFFSET))(nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_SWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, ::FlatData::Difficulty* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetBgmInfo(::System::Int32 arg, UIMinigameBgmAlbum* arg2)
		{
			((::System::Void(*)(::System::Int32, UIMinigameBgmAlbum*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_SETBGMINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickGameStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKGAMESTART_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKAUTOOFF_OFFSET))(nullptr);
		}

		::System::Void _OnClickGameStart_g__RequestStart|49_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY__ONCLICKGAMESTART_G__REQUESTSTART|49_0_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::EventContentSeasonInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void TryShowEventContentGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_TRYSHOWEVENTCONTENTGUIDE_OFFSET))(nullptr);
		}

		::System::Void OnClickGameStartDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKGAMESTARTDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* IndiCatorOff(::System::Int32 arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_INDICATOROFF_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPlayGuide_b__59_0(UIEventPlayGuide* arg)
		{
			((::System::Void(*)(UIEventPlayGuide*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY__ONCLICKPLAYGUIDE_B__59_0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* IndiCatorOn(::System::Int32 arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_INDICATORON_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* EnterRhythmGame(::MX::Data::MiniGameRhythmBgmInfo* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Data::MiniGameRhythmBgmInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ENTERRHYTHMGAME_OFFSET))(arg, nullptr);
		}

		UIMinigameBgmAlbum* get_otherAlbum()
		{
			return ((UIMinigameBgmAlbum*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_GET_OTHERALBUM_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoOn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_ONCLICKAUTOON_OFFSET))(nullptr);
		}

		::System::Boolean HandleMinigameEnterStageResponse(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMLOBBY_HANDLEMINIGAMEENTERSTAGERESPONSE_OFFSET))(arg, nullptr);
		}

	};

