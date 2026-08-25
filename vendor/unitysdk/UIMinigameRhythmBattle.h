#pragma once
#include "unitysdk.h"

class UILabel;
namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Animation; }
class UIWidget;
class MXButton;
class UIMinigameStartBgmInfo;
class UITexture;
class UIProgressBar;
class UIMinigameRhythmBattleHpBar;
class UISlider;
namespace UnityEngine { class Vector3; }
namespace FlatData { class JudgeGrade; }
class NoteLine;
class UIPopup_MinigameRhythmPause;

#define UIMINIGAMERHYTHMBATTLE_DEBUGINPUT_OFFSET UNITYSDK_OFFSET(0xD18540)
#define UIMINIGAMERHYTHMBATTLE_ONCLICKPAUSE_OFFSET UNITYSDK_OFFSET(0xD186F0)
#define UIMINIGAMERHYTHMBATTLE_FEVEREFFECTFADEOUT_OFFSET UNITYSDK_OFFSET(0xD18840)
#define UIMINIGAMERHYTHMBATTLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD18900)
#define UIMINIGAMERHYTHMBATTLE_RESETMINIGAMEUI_OFFSET UNITYSDK_OFFSET(0xD189D0)
#define UIMINIGAMERHYTHMBATTLE_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xD18F30)
#define UIMINIGAMERHYTHMBATTLE_SETFEVERSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0xD18F50)
#define UIMINIGAMERHYTHMBATTLE_UNLOADUIRESOURCES_OFFSET UNITYSDK_OFFSET(0xD191A0)
#define UIMINIGAMERHYTHMBATTLE_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xD19210)
#define UIMINIGAMERHYTHMBATTLE_ONOPENED_OFFSET UNITYSDK_OFFSET(0xD194A0)
#define UIMINIGAMERHYTHMBATTLE_REMAINHPBONUSSCOREANI_OFFSET UNITYSDK_OFFSET(0xD19BA0)
#define UIMINIGAMERHYTHMBATTLE_SETHPBAR_OFFSET UNITYSDK_OFFSET(0xD19C50)
#define UIMINIGAMERHYTHMBATTLE_SENDAWAYALLJUDGEMENTIMAGEFONT_OFFSET UNITYSDK_OFFSET(0xD18E30)
#define UIMINIGAMERHYTHMBATTLE_PLAYUISTARTANIMATION_OFFSET UNITYSDK_OFFSET(0xD19DD0)
#define UIMINIGAMERHYTHMBATTLE_UPDATEUI_OFFSET UNITYSDK_OFFSET(0xD1A150)
#define UIMINIGAMERHYTHMBATTLE_PLAYFANFARE_OFFSET UNITYSDK_OFFSET(0xD1A7E0)
#define UIMINIGAMERHYTHMBATTLE_COUNTDOWNTORESUMEGAME_OFFSET UNITYSDK_OFFSET(0xD1A810)
#define UIMINIGAMERHYTHMBATTLE__ONCLICKPAUSE_B__66_0_OFFSET UNITYSDK_OFFSET(0xD1A890)
#define UIMINIGAMERHYTHMBATTLE_ACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0xD18BF0)
#define UIMINIGAMERHYTHMBATTLE_PLAYGAMEENDANIMATION_OFFSET UNITYSDK_OFFSET(0xD1A910)
#define UIMINIGAMERHYTHMBATTLE_UPDATEACTIVATEDFEVERGAUGE_OFFSET UNITYSDK_OFFSET(0xD1A9B0)
#define UIMINIGAMERHYTHMBATTLE_ONGAMEEND_OFFSET UNITYSDK_OFFSET(0xD1A9E0)
#define UIMINIGAMERHYTHMBATTLE_RESTOREEFFECT_OFFSET UNITYSDK_OFFSET(0xD1A750)
#define UIMINIGAMERHYTHMBATTLE_POPUPPAUSEWINDOWFROMAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xD1ABD0)
#define UIMINIGAMERHYTHMBATTLE_ONBACK_OFFSET UNITYSDK_OFFSET(0xD1ABE0)
#define UIMINIGAMERHYTHMBATTLE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD1ABF0)

	inline static constexpr unsigned int UIMinigameRhythmBattle_TypeDefinitionIndex = 684;

	class UIMinigameRhythmBattle : public Il2CppObject
	{
	public:
		UILabel* DebugStopWatch; // 0xD8
		::MX::MinigameRhythm::MinigameRhythmLogicManager* logicManager; // 0xE0
		::UnityEngine::Transform* JudgeTargetObject2D; // 0xE8
		::UnityEngine::Transform* SpinePosTransform; // 0xF0
		UILabel* MinigamecurrentCombo; // 0xF8
		UILabel* MinigameScore; // 0x100
		::Il2CppArray<::System::Object*>* judgeTextObjects; // 0x108
		::UnityEngine::ParticleSystem* HPToScoreBonusEffect; // 0x110
		::UnityEngine::ParticleSystem* HPBonusCompleteEffect; // 0x118
		::UnityEngine::Animation* UIIntroOutroAnimation; // 0x120
		::UnityEngine::Animation* JudgementAnimationEffect; // 0x128
		::UnityEngine::Animation* ComboAnimationEffect; // 0x130
		::UnityEngine::Animation* HundredthComboCutinAnimation; // 0x138
		UIWidget* HundredthSpriteRenderQueueTarget; // 0x140
		::UnityEngine::Animation* CountdownResumeAnimation; // 0x148
		::UnityEngine::ParticleSystem* HundredthComboEffect; // 0x150
		UILabel* HundredthComboText; // 0x158
		UILabel* ComboText; // 0x160
		UILabel* InputDebugger; // 0x168
		MXButton* PauseButton; // 0x170
		UIMinigameStartBgmInfo* startAniBgmInfo; // 0x178
		UITexture* FeverImage; // 0x180
		::UnityEngine::Animation* FeverImageAnimation; // 0x188
		::UnityEngine::Transform* FeverGaugeObject; // 0x190
		UIProgressBar* FeverGauge; // 0x198
		::UnityEngine::Transform* FeverActivatedFeverGaugeObject; // 0x1A0
		UIProgressBar* FeverActivatedFeverGaugeBar; // 0x1A8
		::UnityEngine::ParticleSystem* FeverActivatedGaugeEffect; // 0x1B0
		::UnityEngine::ParticleSystem* FeverActivatedScreenEffect; // 0x1B8
		::UnityEngine::ParticleSystem* FeverActivatedScreenEffectFadeout; // 0x1C0
		::UnityEngine::ParticleSystem* FeverActivatedImageFontEffect; // 0x1C8
		::UnityEngine::Transform* HpBarWidgetTransform; // 0x1D0
		UIMinigameRhythmBattleHpBar* UiHpBar; // 0x1D8
		UISlider* HPGauge; // 0x1E0
		::System::Int32 currentCombo; // 0x1E8
		::System::Int32 totalNoteCount; // 0x1EC
		::System::Text::StringBuilder* inputDebugText; // 0x1F0
		Il2CppObject* JudgementCriticalPool; // 0x1F8
		Il2CppObject* JudgementAttackPool; // 0x200
		::UnityEngine::ParticleSystem* JudgementCriticalEffect; // 0x208
		::UnityEngine::ParticleSystem* JudgementAttackEffect; // 0x210
		::UnityEngine::ParticleSystem* JudgementLongPressEffect; // 0x218
		::UnityEngine::ParticleSystem* judgeEffect; // 0x220
		::UnityEngine::Vector3* initialTargetObject2DPosition; // 0x228
		::UnityEngine::Vector3* heightOffset; // 0x234
		::System::Single duration; // 0x240
		UILabel* HPBonusValueUI; // 0x248
		::UnityEngine::ParticleSystem* GameEndFanfareParticleEffect; // 0x250
		::System::String* zeroText; // 0x0
		::System::String* emptyText; // 0x0
		::Il2CppArray<::System::Object*>* judgeTextAnimName; // 0x258
		::Il2CppArray<::System::Object*>* comboTextAnimName; // 0x260
		::System::DateTime* PrepareCompletedTimeStamp; // 0x268

		::System::Void DebugInput(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_DEBUGINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_ONCLICKPAUSE_OFFSET))(nullptr);
		}

		::System::Void FeverEffectFadeOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_FEVEREFFECTFADEOUT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ResetMinigameUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_RESETMINIGAMEUI_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetFeverScreenEffect(::UnityEngine::ParticleSystem* arg, ::UnityEngine::ParticleSystem* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystem*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_SETFEVERSCREENEFFECT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void UnloadUIResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_UNLOADUIRESOURCES_OFFSET))(nullptr);
		}

		::System::Void UnsubscribeEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_UNSUBSCRIBEEVENT_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RemainHPBonusScoreAni(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_REMAINHPBONUSSCOREANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetHpBar(UIMinigameRhythmBattleHpBar* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(UIMinigameRhythmBattleHpBar*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_SETHPBAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SendAwayAllJudgementImageFont()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_SENDAWAYALLJUDGEMENTIMAGEFONT_OFFSET))(nullptr);
		}

		::System::Void PlayUIStartAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_PLAYUISTARTANIMATION_OFFSET))(nullptr);
		}

		::System::Void UpdateUI(::FlatData::JudgeGrade* arg, NoteLine* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::FlatData::JudgeGrade*, NoteLine*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_UPDATEUI_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void PlayFanfare()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_PLAYFANFARE_OFFSET))(nullptr);
		}

		::System::Void CountdownToResumeGame()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_COUNTDOWNTORESUMEGAME_OFFSET))(nullptr);
		}

		::System::Void _OnClickPause_b__66_0(UIPopup_MinigameRhythmPause* arg)
		{
			((::System::Void(*)(UIPopup_MinigameRhythmPause*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE__ONCLICKPAUSE_B__66_0_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateFever(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_ACTIVATEFEVER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayGameEndAnimation(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_PLAYGAMEENDANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateActivatedFeverGauge(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_UPDATEACTIVATEDFEVERGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnGameEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_ONGAMEEND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RestoreEffect(::UnityEngine::ParticleSystem* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_RESTOREEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void PopUpPauseWindowFromApplicationPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_POPUPPAUSEWINDOWFROMAPPLICATIONPAUSE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLE_AWAKE_OFFSET))(nullptr);
		}

	};

