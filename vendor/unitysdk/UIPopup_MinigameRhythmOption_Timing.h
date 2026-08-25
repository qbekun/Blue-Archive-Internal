#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class AudioSource; }
namespace MX::SaveData { class DeviceOption; }
class PlayOptions;
namespace UnityEngine { class Transform; }
class MXButton;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace E7::Native { class NativeAudioPointer; }
namespace UnityEngine { class AudioClip; }
class ButtonActivator;
class UIPopup_MinigameOption_NoteTiming;

#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_AWAKE_OFFSET UNITYSDK_OFFSET(0xE3DB60)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_SET_OFFSETOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0xE3E350)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKAPPLYANDCLOSE_OFFSET UNITYSDK_OFFSET(0xE3E420)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_WAITANDMOVEONSTEP3_OFFSET UNITYSDK_OFFSET(0xE3E530)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKTIMINGBUTTON_OFFSET UNITYSDK_OFFSET(0xE3E5C0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_MOVEONSTEP3_OFFSET UNITYSDK_OFFSET(0xE3E910)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKRESETVALUE_OFFSET UNITYSDK_OFFSET(0xE3E990)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_.CTOR_OFFSET UNITYSDK_OFFSET(0xE3E9A0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKSTARTMEASURETIMING_OFFSET UNITYSDK_OFFSET(0xE3E9B0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKRETRY_OFFSET UNITYSDK_OFFSET(0xE3EB50)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_GET_OFFSETOPTIONVALUE_OFFSET UNITYSDK_OFFSET(0xE3ED90)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_UNLOADNATIVEAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0xE3EDA0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE3EE10)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_LOADSFXTONATIVESIDE_OFFSET UNITYSDK_OFFSET(0xE3EFA0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKDECREASEONE_OFFSET UNITYSDK_OFFSET(0xE3F040)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xE3E460)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_INITIALIZESTEP1_OFFSET UNITYSDK_OFFSET(0xE3EB60)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_WAITANDPLAYTIMINGMEASURE_OFFSET UNITYSDK_OFFSET(0xE3EAC0)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE3F070)
#define UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKINCREASEONE_OFFSET UNITYSDK_OFFSET(0xE3F0A0)

	inline static constexpr unsigned int UIPopup_MinigameRhythmOption_Timing_TypeDefinitionIndex = 724;

	class UIPopup_MinigameRhythmOption_Timing : public Il2CppObject
	{
	public:
		::System::Int32 minSpeedValue; // 0x0
		::System::Int32 maxSpeedValue; // 0x0
		UILabel* OffsetLevelValueLabel; // 0xD8
		::System::Int32 offsetOptionValue; // 0xE0
		::UnityEngine::AudioSource* MetronomePlayer; // 0xE8
		::MX::SaveData::DeviceOption* deviceOption; // 0xF0
		PlayOptions* metronomePlayOption; // 0xF8
		PlayOptions* hitSFXPlayOption; // 0x108
		::UnityEngine::Transform* Set_1; // 0x118
		::UnityEngine::Transform* Set_2; // 0x120
		::UnityEngine::Transform* Set_3; // 0x128
		MXButton* CancelButton; // 0x130
		MXButton* StartButton; // 0x138
		MXButton* ButtonX; // 0x140
		::UnityEngine::Animation* NoteTimingExampleAnimation; // 0x148
		::UnityEngine::Animation* NoteTimingAnimation; // 0x150
		::UnityEngine::ParticleSystem* TouchEffect; // 0x158
		::E7::Native::NativeAudioPointer* nativeMetronomeAudioClip; // 0x160
		::UnityEngine::AudioClip* TouchRightTimingSFX; // 0x168
		::E7::Native::NativeAudioPointer* nativeTouchRightTimingSFX; // 0x170
		::UnityEngine::AudioClip* TouchNormalSFX; // 0x178
		::E7::Native::NativeAudioPointer* nativeTouchNormalSFX; // 0x180
		MXButton* TimingButton; // 0x188
		::Il2CppArray<::System::Object*>* TimingResults; // 0x190
		::Il2CppArray<::System::Object*>* userInputTiming; // 0x198
		::System::Int32 userInputIndex; // 0x1A0
		::System::Int32 lastInputTimingInSecond; // 0x1A4
		::System::DateTime* MeasurementStartedTime; // 0x1A8
		ButtonActivator* DecreaseOne; // 0x1B0
		ButtonActivator* IncreaseOne; // 0x1B8
		MXButton* ResetButton; // 0x1C0
		MXButton* Set3CancelButton; // 0x1C8
		MXButton* Set3ConfirmButton; // 0x1D0
		UIPopup_MinigameOption_NoteTiming* uiMinigameTimingOption; // 0x1D8
		::System::Int32 currentStep; // 0x1E0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_OffsetOptionValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_SET_OFFSETOPTIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickApplyAndClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKAPPLYANDCLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitAndMoveOnStep3()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_WAITANDMOVEONSTEP3_OFFSET))(nullptr);
		}

		::System::Void OnClickTimingButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKTIMINGBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void MoveOnStep3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_MOVEONSTEP3_OFFSET))(nullptr);
		}

		::System::Void OnClickResetValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKRESETVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickStartMeasureTiming()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKSTARTMEASURETIMING_OFFSET))(nullptr);
		}

		::System::Void OnClickRetry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKRETRY_OFFSET))(nullptr);
		}

		::System::Int32 get_OffsetOptionValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_GET_OFFSETOPTIONVALUE_OFFSET))(nullptr);
		}

		::System::Void UnloadNativeAudioSource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_UNLOADNATIVEAUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, UIPopup_MinigameOption_NoteTiming* arg2)
		{
			((::System::Void(*)(::System::Int32, UIPopup_MinigameOption_NoteTiming*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void LoadSFXtoNativeSide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_LOADSFXTONATIVESIDE_OFFSET))(nullptr);
		}

		::System::Void OnClickDecreaseOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKDECREASEONE_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void InitializeStep1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_INITIALIZESTEP1_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitAndPlayTimingMeasure(::UnityEngine::Animation* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_WAITANDPLAYTIMINGMEASURE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickIncreaseOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMERHYTHMOPTION_TIMING_ONCLICKINCREASEONE_OFFSET))(nullptr);
		}

	};

