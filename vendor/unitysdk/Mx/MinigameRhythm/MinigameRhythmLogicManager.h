#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MX::Data { class MiniGameRhythmBgmInfo; }
namespace UnityEngine { class Animator; }
namespace FlatData { class JudgeGrade; }
namespace MX::Data { class MiniGameRhythmData; }
namespace MX::Data { class EventContentSeasonInfo; }

#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTGAMEEND_OFFSET UNITYSDK_OFFSET(0x1DA7A50)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTJUDGEDNOTEINDEX_OFFSET UNITYSDK_OFFSET(0x1DA7B10)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_GAMEDIFFICULTYTEXT_OFFSET UNITYSDK_OFFSET(0x1DA7B20)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTRESUMEGAME_OFFSET UNITYSDK_OFFSET(0x1DA7B40)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DA7C00)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GENERATECHARACTERVISUAL_OFFSET UNITYSDK_OFFSET(0x1DA7C10)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_HANDLEJUDGEMENT_OFFSET UNITYSDK_OFFSET(0x1DA7D10)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_GAMEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1DA8640)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x1DA8650)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x1DA8660)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_MAXHPSCORE_OFFSET UNITYSDK_OFFSET(0x1DA8670)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_BGMINFO_OFFSET UNITYSDK_OFFSET(0x1DA8680)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_HASLYRICIST_OFFSET UNITYSDK_OFFSET(0x1DA8690)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_STDDEV_OFFSET UNITYSDK_OFFSET(0x1DA86A0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DA8730)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GETNEARESTTIMETOPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1DA8740)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTNOTEGENERATED_OFFSET UNITYSDK_OFFSET(0x1DA8770)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_COUNLOADRESOURCES_OFFSET UNITYSDK_OFFSET(0x1DA8830)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_REQUESTUNSUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x1DA88D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1DA8990)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_NOTESCALEVALUE_OFFSET UNITYSDK_OFFSET(0x1DA8A50)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_COMPOSERNAME_OFFSET UNITYSDK_OFFSET(0x1DA8A60)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1DA8A70)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0x1DA8A80)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTGAMESTART_OFFSET UNITYSDK_OFFSET(0x1DA8B40)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1DA8C00)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVENOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DA8CC0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_MUSICLENGTH_OFFSET UNITYSDK_OFFSET(0x1DA8FC0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_VICTORYUIPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1DA8FD0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_MUSICTITLE_OFFSET UNITYSDK_OFFSET(0x1DA8FF0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DA9010)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_FEVERVALUE_OFFSET UNITYSDK_OFFSET(0x1DA90D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CHARACTERSPINENAME_OFFSET UNITYSDK_OFFSET(0x1DA90E0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_HANDLETAPNOTE_OFFSET UNITYSDK_OFFSET(0x1DA90F0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9390)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_PLAYCHARACTERANIMATION_OFFSET UNITYSDK_OFFSET(0x1DA83F0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTJUDGERESULT_OFFSET UNITYSDK_OFFSET(0x1DA9E60)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_MOVEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DA9F10)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ALBUMCOVERPATH_OFFSET UNITYSDK_OFFSET(0x1DAA580)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1DAA5A0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTRESUMEGAME_OFFSET UNITYSDK_OFFSET(0x1DAA5B0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_FEVERVALUE_OFFSET UNITYSDK_OFFSET(0x1DAA670)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_WAITANDBROADCASTGAMEEND_OFFSET UNITYSDK_OFFSET(0x1DAA680)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_PREPARECOMPLETEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1DAA710)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_STANDARDDEVIATION_OFFSET UNITYSDK_OFFSET(0x1DAA720)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_VICTORYUIPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1DAA730)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTGAMEEND_OFFSET UNITYSDK_OFFSET(0x1DAA740)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_FEVERON_OFFSET UNITYSDK_OFFSET(0x1DAA800)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_HANDLEGAMEEND_OFFSET UNITYSDK_OFFSET(0x1DAA810)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1DAAF50)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_RHYTHMSUMMARY_OFFSET UNITYSDK_OFFSET(0x1DAAFC0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_HPVALUE_OFFSET UNITYSDK_OFFSET(0x1DAAFD0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GETCURRENTMUSICTIME_OFFSET UNITYSDK_OFFSET(0x1DAA3B0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_BGMINFO_OFFSET UNITYSDK_OFFSET(0x1DAAFE0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0x1DAB000)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_FEVERON_OFFSET UNITYSDK_OFFSET(0x1DAB0C0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTCOMBO_OFFSET UNITYSDK_OFFSET(0x1DAB0D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_FILLMINIGAMERECORDS_OFFSET UNITYSDK_OFFSET(0x1DAAE50)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTRESETUI_OFFSET UNITYSDK_OFFSET(0x1DAB0E0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1DAB1A0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_MUSICTITLE_OFFSET UNITYSDK_OFFSET(0x1DAB1B0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTGENERATEDNOTEINDEX_OFFSET UNITYSDK_OFFSET(0x1DAB1C0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CHARACTERSPINENAME_OFFSET UNITYSDK_OFFSET(0x1DAB1D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_CLOSEUIS_OFFSET UNITYSDK_OFFSET(0x1DAB1F0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTGENERATEDNOTEINDEX_OFFSET UNITYSDK_OFFSET(0x1DAB2F0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1DAB300)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1DAB310)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_HASLYRICIST_OFFSET UNITYSDK_OFFSET(0x1DAB3D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_RHYTHMSUMMARY_OFFSET UNITYSDK_OFFSET(0x1DAB3E0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTPAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1DAB400)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_MAXHPSCORE_OFFSET UNITYSDK_OFFSET(0x1DAB4C0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTNOTEGENERATED_OFFSET UNITYSDK_OFFSET(0x1DAB4D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ISINMISSCONDITION_OFFSET UNITYSDK_OFFSET(0x1DAA520)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_STANDARDDEVIATION_OFFSET UNITYSDK_OFFSET(0x1DAB590)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GENERATENOTEDATA_OFFSET UNITYSDK_OFFSET(0x1DAB5A0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_PREPARECOMPLETEDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1DABBE0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_WAITFORPLAYSCHEDULED_OFFSET UNITYSDK_OFFSET(0x1DABBF0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1DABC90)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_GAMEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1DABCA0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_RESTART_OFFSET UNITYSDK_OFFSET(0x1DABCB0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SETCAMERAANDUIPOSITION_OFFSET UNITYSDK_OFFSET(0x1DABD40)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1DAC300)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTGAMESTART_OFFSET UNITYSDK_OFFSET(0x1DAC310)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GETNOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DAA3D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ALBUMCOVERPATH_OFFSET UNITYSDK_OFFSET(0x1DAC3D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ARTISTNAME_OFFSET UNITYSDK_OFFSET(0x1DAC3E0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER__COUNLOADRESOURCES_B__301_0_OFFSET UNITYSDK_OFFSET(0x1DAC3F0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0x1DA8330)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_SOUNDEFFECTON_OFFSET UNITYSDK_OFFSET(0x1DAC400)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x1DAC410)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1DAC420)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTRESETUI_OFFSET UNITYSDK_OFFSET(0x1DAC430)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_COMPOSERNAME_OFFSET UNITYSDK_OFFSET(0x1DAC4F0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1DAC510)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_HPVALUE_OFFSET UNITYSDK_OFFSET(0x1DAC520)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_MUSICLENGTH_OFFSET UNITYSDK_OFFSET(0x1DAC530)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1DAC540)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTGAMESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1DAC610)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1DAC6D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTJUDGEDNOTEINDEX_OFFSET UNITYSDK_OFFSET(0x1DAC6E0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTJUDGERESULT_OFFSET UNITYSDK_OFFSET(0x1DAC6F0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1DAC7A0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_HANDLEFLICKNOTE_OFFSET UNITYSDK_OFFSET(0x1DAC7B0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_UPDATEFEVERVALUE_OFFSET UNITYSDK_OFFSET(0x1DA82D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_PREPAREGAME_OFFSET UNITYSDK_OFFSET(0x1DAC930)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_GAMEDIFFICULTYTEXT_OFFSET UNITYSDK_OFFSET(0x1DACAC0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_NOTESCALEVALUE_OFFSET UNITYSDK_OFFSET(0x1DACAD0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTGAMESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1DACAE0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DACBA0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTCOMBO_OFFSET UNITYSDK_OFFSET(0x1DAD3D0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_JUDGETIMING_OFFSET UNITYSDK_OFFSET(0x1DA9340)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_STARTRHYTHMGAME_OFFSET UNITYSDK_OFFSET(0x1DAD3E0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_RESUMEGAME_OFFSET UNITYSDK_OFFSET(0x1DAD4E0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DAD5B0)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER__SETCAMERAANDUIPOSITION_G__SET2DUIDELAYED|272_0_OFFSET UNITYSDK_OFFSET(0x1DAC290)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_MAXHPVALUE_OFFSET UNITYSDK_OFFSET(0x1DAD780)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_UPDATEFEVERGAUGE_OFFSET UNITYSDK_OFFSET(0x1DAD790)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ARTISTNAME_OFFSET UNITYSDK_OFFSET(0x1DAD850)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x1DAD870)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_UPDATEFEVERGAUGE_OFFSET UNITYSDK_OFFSET(0x1DAD880)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_MAXHPVALUE_OFFSET UNITYSDK_OFFSET(0x1DAD940)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_REQUESTUNSUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0x1DAD950)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_SOUNDEFFECTON_OFFSET UNITYSDK_OFFSET(0x1DADA10)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GAMEOVER_OFFSET UNITYSDK_OFFSET(0x1DA8630)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x1DADA20)
#define MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_EVALUATEINPUT_OFFSET UNITYSDK_OFFSET(0x1DADAF0)

namespace MX::MinigameRhythm
{
	inline static constexpr unsigned int MinigameRhythmLogicManager_TypeDefinitionIndex = 20425;

	class MinigameRhythmLogicManager : public ::ToyWebViewShared::Messages::ReplyCreate
	{
	public:
		::System::DateTime* _PrepareCompletedTimeStamp_k__BackingField; // 0x20
		::System::Boolean DebugStopWatchSwitch; // 0x28
		::System::Single PauseTime; // 0x2C
		::System::Single InitialWaitTimeForGameStart; // 0x30
		::System::String* SceneName; // 0x38
		MinigameTimeManager* MinigameTimeManager; // 0x40
		MinigameInputHandler* MinigameInputHandler; // 0x48
		MinigameAudioManager* MinigameAudioManager; // 0x50
		::UnityEngine::AudioSource* AudioSource; // 0x58
		::UnityEngine::AudioSource* MinigameSFXPlayer; // 0x60
		::UnityEngine::AudioClip* EmptyHitSFX; // 0x68
		::UnityEngine::AudioClip* SingleHitSFX; // 0x70
		::UnityEngine::AudioClip* DoubleHitSFX; // 0x78
		::UnityEngine::AudioClip* FlickHitSFX; // 0x80
		::UnityEngine::AudioClip* LongHitSFX; // 0x88
		InputDelegate* BroadcastJudgeResult; // 0x0
		BroadcastGameEventDelegate* BroadcastGameStart; // 0x8
		BroadcastGameEventDelegate* BroadcastPauseGame; // 0x10
		BroadcastGameEventDelegate* BroadcastResumeGame; // 0x18
		BroadcastGameEventDelegate* BroadcastOnApplicationPause; // 0x20
		BroadcastGameEventDelegate* BroadcastResetUI; // 0x28
		BroadcastGameStateDelegate* BroadcastGameStateChange; // 0x30
		BroadcastGameStateDelegate* BroadcastNoteGenerated; // 0x38
		ActivateFeverDelegate* BroadcastActivateFever; // 0x40
		UpdateFeverGaugeDelegate* UpdateFeverGauge; // 0x48
		GameEndDelegate* BroadcastGameEnd; // 0x50
		UnloadDelegate* RequestUnsubscribeEvents; // 0x58
		::System::Single MusicBPM; // 0x90
		::System::Single GlobalSpeed; // 0x94
		::System::Single MusicEndWaitTime; // 0x98
		::System::Single WaitingTimeForShowingGameEndUI; // 0x9C
		::System::Boolean autoPlay; // 0xA0
		::System::Single initialGlobalSpeed; // 0xA4
		::System::Single musicOffset; // 0xA8
		::Il2CppArray<::System::Object*>* uiNoteNameArray; // 0xB0
		::System::Boolean isUINoteFlip; // 0xB8
		::Il2CppArray<::System::Object*>* longNoteColorArray; // 0xC0
		::System::Single _NoteScaleValue_k__BackingField; // 0xC8
		::Il2CppArray<::System::Object*>* noteScaleArray; // 0xD0
		::System::Boolean _FeverOn_k__BackingField; // 0xD8
		::System::Boolean _SoundEffectOn_k__BackingField; // 0xD9
		::UnityEngine::TextAsset* BeatmapTextAsset; // 0xE0
		::Il2CppArray<::System::Object*>* rawBeatmapBytes; // 0xE8
		MinigameNoteObject* rhythmNoteObjectLeft; // 0xF0
		MinigameNoteObject* rhythmNoteObjectRight; // 0xF8
		MinigameNoteObject* rhythmNoteObjectBoth; // 0x100
		MinigameNoteObject* rhythmNoteObjectLongEnd; // 0x108
		::System::String* rhythmNoteObjectLeftPath; // 0x110
		::System::String* rhythmNoteObjectRightPath; // 0x118
		::System::String* rhythmNoteObjectBothPath; // 0x120
		::UnityEngine::ParticleSystem* SweeperParticle; // 0x128
		::UnityEngine::ParticleSystem* SweeperParticleLeft; // 0x130
		::UnityEngine::ParticleSystem* SweeperParticleRight; // 0x138
		::UnityEngine::ParticleSystem* SweeperParticleBoth; // 0x140
		::UnityEngine::ParticleSystem* SweeperParticleFever; // 0x148
		UIRoot* UiRoot; // 0x150
		::System::Boolean _IsLoaded_k__BackingField; // 0x158
		::System::Boolean _IsStarted_k__BackingField; // 0x159
		::System::Boolean _IsPlaying_k__BackingField; // 0x15A
		::System::Int32 TotalNoteCount; // 0x15C
		UIMinigameRhythmBattle* uiMinigameMain; // 0x160
		::UnityEngine::GameObject* CutinCharacterSpine; // 0x168
		MinigameRhythmPreset* rhythmPreset; // 0x170
		::Il2CppArray<::System::Object*>* SceneNoteData; // 0x178
		MinigameUINoteComponent* UINoteComponentPrefabHolder; // 0x180
		Il2CppObject* UINoteObjectList; // 0x188
		Il2CppObject* LongNoteEndNotePool; // 0x190
		Il2CppObject* LeftNotePool; // 0x198
		Il2CppObject* RightNotePool; // 0x1A0
		Il2CppObject* BothNotePool; // 0x1A8
		Il2CppObject* AdditionalNoteQueue; // 0x1B0
		::UnityEngine::Transform* JudgeTargetObject3D; // 0x1B8
		::UnityEngine::Transform* CharacterPositionObject3D; // 0x1C0
		::UnityEngine::Vector3* CharacterOnStage3DPosition; // 0x1C8
		::UnityEngine::Vector3* JudgeTargetObject3DPosition; // 0x1D4
		::UnityEngine::Vector3* JudgeTargetObject2DPosition; // 0x1E0
		::Il2CppArray<::System::Object*>* judgeValues; // 0x1F0
		::UnityEngine::Vector3* UiNoteOffset; // 0x1F8
		::System::Single _CurrentTime_k__BackingField; // 0x204
		::System::Int32 _MusicLength_k__BackingField; // 0x208
		::System::Boolean isNoteHandledInThisFrame; // 0x20C
		::System::Int32 frontMostNoteIndex; // 0x210
		::System::Int32 _CurrentJudgedNoteIndex_k__BackingField; // 0x214
		::System::Int32 _CurrentGeneratedNoteIndex_k__BackingField; // 0x218
		::System::Boolean gameStart; // 0x21C
		::System::String* _GameDifficultyText_k__BackingField; // 0x220
		::System::String* _AlbumCoverPath_k__BackingField; // 0x228
		::System::Boolean _IsSpecial_k__BackingField; // 0x230
		::System::String* _MusicTitle_k__BackingField; // 0x238
		::System::String* _ComposerName_k__BackingField; // 0x240
		::System::String* _ArtistName_k__BackingField; // 0x248
		::System::Boolean _HasLyricist_k__BackingField; // 0x250
		::System::String* _VictoryUIPrefabName_k__BackingField; // 0x258
		::MX::Data::MiniGameRhythmBgmInfo* _BgmInfo_k__BackingField; // 0x260
		MinigameRhythmSummary* _rhythmSummary_k__BackingField; // 0x268
		::Il2CppArray<::System::Object*>* minigameJudgeRecords; // 0x270
		::System::Single accumulatedHitTiming; // 0x278
		::System::Int32 correctHitCount; // 0x27C
		::System::Single _StandardDeviation_k__BackingField; // 0x280
		::System::Int32 criticalCount; // 0x284
		::System::Int32 attackCount; // 0x288
		::System::Int32 missCount; // 0x28C
		::System::Int32 maxCombo; // 0x290
		::System::DateTime* gameStartTime; // 0x298
		::System::DateTime* gameEndTime; // 0x2A0
		::System::Int64 _UniqueId_k__BackingField; // 0x2A8
		::System::Int64 _EventContentId_k__BackingField; // 0x2B0
		::System::Single _FeverValue_k__BackingField; // 0x2B8
		::System::Int32 _CurrentCombo_k__BackingField; // 0x2BC
		::System::Int64 noteScore; // 0x2C0
		::System::Int64 comboScore; // 0x2C8
		::System::Int64 _CurrentScore_k__BackingField; // 0x2D0
		::System::Int64 _HPValue_k__BackingField; // 0x2D8
		::System::Int64 _MaxHPValue_k__BackingField; // 0x2E0
		::System::Int64 _MaxHPScore_k__BackingField; // 0x2E8
		::System::Int64 HPDeductValue; // 0x2F0
		::System::Int64 HPRestoreValue; // 0x2F8
		::System::Int32 _GameDifficulty_k__BackingField; // 0x300
		::System::Int32 rawNoteMaxScore; // 0x304
		::System::Int32 rawComboMaxScore; // 0x308
		::System::Int64 noteMaxScore; // 0x310
		::System::Int64 comboMaxScore; // 0x318
		::System::Int32 AttackScoreValue; // 0x320
		::System::Single feverActivatedTime; // 0x324
		::System::Int64 feverMultiplierValueFromExcel; // 0x328
		::System::Single feverActiveDuration; // 0x330
		::System::Int64 feverScoreMultiplier; // 0x338
		::System::Boolean feverActivated; // 0x340
		::System::Single feverAddValueCritical; // 0x344
		::System::Single feverAddValueAttack; // 0x348
		::System::Single feverAddValueMiss; // 0x34C
		::UnityEngine::GameObject* characterOnStage; // 0x350
		::UnityEngine::Animator* characterAnimator; // 0x358
		::System::String* playerCharacterName; // 0x360
		::System::Int32 longNoteAnimationIndex; // 0x368
		::System::String* _CharacterSpineName_k__BackingField; // 0x370
		::Il2CppArray<::System::Object*>* feverCharacterAttackAnimation; // 0x378
		::Il2CppArray<::System::Object*>* feverCharacterLongAttackAnimation; // 0x380
		::Il2CppArray<::System::Object*>* normalCharacterAttackAnimation; // 0x388
		::Il2CppArray<::System::Object*>* normalCharacterLongAttackAnimation; // 0x390
		::Il2CppArray<::System::Object*>* normalCharacterLongAttackEndAnimation; // 0x398
		::System::Random* rand; // 0x3A0
		::System::Boolean IsLongNotePlaySound; // 0x3A8

		::System::Void add_BroadcastGameEnd(GameEndDelegate* arg)
		{
			((::System::Void(*)(GameEndDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTGAMEEND_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentJudgedNoteIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTJUDGEDNOTEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_GameDifficultyText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_GAMEDIFFICULTYTEXT_OFFSET))(str, nullptr);
		}

		::System::Void add_BroadcastResumeGame(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTRESUMEGAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateCharacterVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GENERATECHARACTERVISUAL_OFFSET))(nullptr);
		}

		::System::Void HandleJudgement(::FlatData::JudgeGrade* arg, MinigameNoteObjectData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatData::JudgeGrade*, MinigameNoteObjectData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_HANDLEJUDGEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_GameDifficulty(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_GAMEDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTSCORE_OFFSET))(nullptr);
		}

		::System::Void set_IsStarted(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ISSTARTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxHPScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_MAXHPSCORE_OFFSET))(arg, nullptr);
		}

		::MX::Data::MiniGameRhythmBgmInfo* get_BgmInfo()
		{
			return (return (::MX::Data::MiniGameRhythmBgmInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_BGMINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_HasLyricist()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_HASLYRICIST_OFFSET))(nullptr);
		}

		::System::Single StdDev(::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_STDDEV_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Single GetNearestTimeToPlayAnimation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GETNEARESTTIMETOPLAYANIMATION_OFFSET))(nullptr);
		}

		::System::Void remove_BroadcastNoteGenerated(BroadcastGameStateDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameStateDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTNOTEGENERATED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoUnloadResources(::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_COUNLOADRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void remove_RequestUnsubscribeEvents(UnloadDelegate* arg)
		{
			((::System::Void(*)(UnloadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_REQUESTUNSUBSCRIBEEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BroadcastOnApplicationPause(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Single get_NoteScaleValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_NOTESCALEVALUE_OFFSET))(nullptr);
		}

		::System::String* get_ComposerName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_COMPOSERNAME_OFFSET))(nullptr);
		}

		::System::Void set_IsSpecial(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ISSPECIAL_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BroadcastActivateFever(ActivateFeverDelegate* arg)
		{
			((::System::Void(*)(ActivateFeverDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTACTIVATEFEVER_OFFSET))(arg, nullptr);
		}

		::System::Void add_BroadcastGameStart(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTGAMESTART_OFFSET))(arg, nullptr);
		}

		::System::Void add_BroadcastPauseGame(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTPAUSEGAME_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveNoteObject(::FlatData::JudgeGrade* arg, MinigameNoteObjectData* arg)
		{
			((::System::Void(*)(::FlatData::JudgeGrade*, MinigameNoteObjectData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVENOTEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_MusicLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_MUSICLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_VictoryUIPrefabName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_VICTORYUIPREFABNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_MusicTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_MUSICTITLE_OFFSET))(str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_FeverValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_FEVERVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* get_CharacterSpineName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CHARACTERSPINENAME_OFFSET))(nullptr);
		}

		::System::Void HandleTapNote(MinigameNoteObjectData* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(MinigameNoteObjectData*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_HANDLETAPNOTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayCharacterAnimation(::FlatData::JudgeGrade* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatData::JudgeGrade*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_PLAYCHARACTERANIMATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void add_BroadcastJudgeResult(InputDelegate* arg)
		{
			((::System::Void(*)(InputDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTJUDGERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void MoveObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_MOVEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_AlbumCoverPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ALBUMCOVERPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BroadcastResumeGame(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTRESUMEGAME_OFFSET))(arg, nullptr);
		}

		::System::Single get_FeverValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_FEVERVALUE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitAndBroadcastGameEnd(::System::Single arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_WAITANDBROADCASTGAMEEND_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* get_PrepareCompletedTimeStamp()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_PREPARECOMPLETEDTIMESTAMP_OFFSET))(nullptr);
		}

		::System::Void set_StandardDeviation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_STANDARDDEVIATION_OFFSET))(arg, nullptr);
		}

		::System::String* get_VictoryUIPrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_VICTORYUIPREFABNAME_OFFSET))(nullptr);
		}

		::System::Void remove_BroadcastGameEnd(GameEndDelegate* arg)
		{
			((::System::Void(*)(GameEndDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTGAMEEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FeverOn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_FEVERON_OFFSET))(nullptr);
		}

		::System::Void HandleGameEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_HANDLEGAMEEND_OFFSET))(arg, nullptr);
		}

		::System::Void PauseGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_PAUSEGAME_OFFSET))(nullptr);
		}

		MinigameRhythmSummary* get_rhythmSummary()
		{
			return (return (MinigameRhythmSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_RHYTHMSUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_HPValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_HPVALUE_OFFSET))(arg, nullptr);
		}

		::System::Single GetCurrentMusicTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GETCURRENTMUSICTIME_OFFSET))(nullptr);
		}

		::System::Void set_BgmInfo(::MX::Data::MiniGameRhythmBgmInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameRhythmBgmInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_BGMINFO_OFFSET))(arg, nullptr);
		}

		::System::Void add_BroadcastActivateFever(ActivateFeverDelegate* arg)
		{
			((::System::Void(*)(ActivateFeverDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTACTIVATEFEVER_OFFSET))(arg, nullptr);
		}

		::System::Void set_FeverOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_FEVERON_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentCombo(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTCOMBO_OFFSET))(arg, nullptr);
		}

		::System::Void FillMinigameRecords(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_FILLMINIGAMERECORDS_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BroadcastResetUI(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTRESETUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::String* get_MusicTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_MUSICTITLE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentGeneratedNoteIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTGENERATEDNOTEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterSpineName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CHARACTERSPINENAME_OFFSET))(str, nullptr);
		}

		::System::Void CloseUIs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_CLOSEUIS_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentGeneratedNoteIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTGENERATEDNOTEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void add_BroadcastOnApplicationPause(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasLyricist(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_HASLYRICIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_rhythmSummary(MinigameRhythmSummary* arg)
		{
			((::System::Void(*)(MinigameRhythmSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_RHYTHMSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BroadcastPauseGame(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTPAUSEGAME_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxHPScore()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_MAXHPSCORE_OFFSET))(nullptr);
		}

		::System::Void add_BroadcastNoteGenerated(BroadcastGameStateDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameStateDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTNOTEGENERATED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInMissCondition(MinigameNoteObjectData* arg)
		{
			return (return (::System::Boolean(*)(MinigameNoteObjectData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ISINMISSCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Single get_StandardDeviation()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_STANDARDDEVIATION_OFFSET))(nullptr);
		}

		::System::Void GenerateNoteData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GENERATENOTEDATA_OFFSET))(nullptr);
		}

		::System::Void set_PrepareCompletedTimeStamp(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_PREPARECOMPLETEDTIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* WaitForPlayScheduled(::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_WAITFORPLAYSCHEDULED_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GameDifficulty()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_GAMEDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Restart()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_RESTART_OFFSET))(nullptr);
		}

		::System::Void SetCameraAndUIPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SETCAMERAANDUIPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ISLOADED_OFFSET))(nullptr);
		}

		::System::Void remove_BroadcastGameStart(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTGAMESTART_OFFSET))(arg, nullptr);
		}

		MinigameNoteObject* GetNoteObject(MinigameNoteObjectData* arg, ::System::Int32 arg)
		{
			return (return (MinigameNoteObject*(*)(MinigameNoteObjectData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GETNOTEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlbumCoverPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ALBUMCOVERPATH_OFFSET))(nullptr);
		}

		::System::String* get_ArtistName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ARTISTNAME_OFFSET))(nullptr);
		}

		::System::Void _CoUnloadResources_b__301_0(UIMinigameRhythmLobbyBase* arg)
		{
			((::System::Void(*)(UIMinigameRhythmLobbyBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER__COUNLOADRESOURCES_B__301_0_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateFever(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ACTIVATEFEVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SoundEffectOn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_SOUNDEFFECTON_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStarted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ISSTARTED_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void add_BroadcastResetUI(BroadcastGameEventDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameEventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTRESETUI_OFFSET))(arg, nullptr);
		}

		::System::Void set_ComposerName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_COMPOSERNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_IsLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ISLOADED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_HPValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_HPVALUE_OFFSET))(nullptr);
		}

		::System::Void set_MusicLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_MUSICLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void add_BroadcastGameStateChange(BroadcastGameStateDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameStateDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_BROADCASTGAMESTATECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSpecial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_ISSPECIAL_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentJudgedNoteIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTJUDGEDNOTEINDEX_OFFSET))(nullptr);
		}

		::System::Void remove_BroadcastJudgeResult(InputDelegate* arg)
		{
			((::System::Void(*)(InputDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTJUDGERESULT_OFFSET))(arg, nullptr);
		}

		::System::Single get_CurrentTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTTIME_OFFSET))(nullptr);
		}

		::System::Void HandleFlickNote(MinigameNoteObjectData* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(MinigameNoteObjectData*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_HANDLEFLICKNOTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single UpdateFeverValue(::System::Single arg, ::FlatData::JudgeGrade* arg)
		{
			return (return (::System::Single(*)(::System::Single, ::FlatData::JudgeGrade*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_UPDATEFEVERVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_PREPAREGAME_OFFSET))(nullptr);
		}

		::System::String* get_GameDifficultyText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_GAMEDIFFICULTYTEXT_OFFSET))(nullptr);
		}

		::System::Void set_NoteScaleValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_NOTESCALEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_BroadcastGameStateChange(BroadcastGameStateDelegate* arg)
		{
			((::System::Void(*)(BroadcastGameStateDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_BROADCASTGAMESTATECHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Data::MiniGameRhythmBgmInfo* arg, MinigameRhythmOption* arg, ::MX::Data::MiniGameRhythmData* arg, ::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::MiniGameRhythmBgmInfo*, MinigameRhythmOption*, ::MX::Data::MiniGameRhythmData*, ::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_INITIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_CurrentCombo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_CURRENTCOMBO_OFFSET))(nullptr);
		}

		::FlatData::JudgeGrade* JudgeTiming(::System::Single arg)
		{
			return (return (::FlatData::JudgeGrade*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_JUDGETIMING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* StartRhythmGame(::MX::Data::MiniGameRhythmBgmInfo* arg, MinigameRhythmOption* arg, ::MX::Data::MiniGameRhythmData* arg, ::MX::Data::EventContentSeasonInfo* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Data::MiniGameRhythmBgmInfo*, MinigameRhythmOption*, ::MX::Data::MiniGameRhythmData*, ::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_STARTRHYTHMGAME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ResumeGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_RESUMEGAME_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _SetCameraAndUIPosition_g__Set2DUIDelayed|272_0()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER__SETCAMERAANDUIPOSITION_G__SET2DUIDELAYED|272_0_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxHPValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GET_MAXHPVALUE_OFFSET))(nullptr);
		}

		::System::Void add_UpdateFeverGauge(UpdateFeverGaugeDelegate* arg)
		{
			((::System::Void(*)(UpdateFeverGaugeDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_UPDATEFEVERGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ArtistName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_ARTISTNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_CurrentScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_CURRENTSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_UpdateFeverGauge(UpdateFeverGaugeDelegate* arg)
		{
			((::System::Void(*)(UpdateFeverGaugeDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_REMOVE_UPDATEFEVERGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxHPValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_MAXHPVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void add_RequestUnsubscribeEvents(UnloadDelegate* arg)
		{
			((::System::Void(*)(UnloadDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_ADD_REQUESTUNSUBSCRIBEEVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SoundEffectOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_SET_SOUNDEFFECTON_OFFSET))(arg, nullptr);
		}

		::System::Void GameOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_GAMEOVER_OFFSET))(nullptr);
		}

		::System::Void StartGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_STARTGAME_OFFSET))(nullptr);
		}

		::System::Void EvaluateInput(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMERHYTHM_MINIGAMERHYTHMLOGICMANAGER_EVALUATEINPUT_OFFSET))(arg, nullptr);
		}

	};
}

