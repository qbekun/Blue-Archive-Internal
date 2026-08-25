#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class Coroutine; }
class RoadPuzzleTrainStartMessage;
class RoadPuzzleLeverStateChangedMessage;
class RoadPuzzleTrainEndMessage;

#define ROADPUZZLETRAINSOUNDHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BBEE0)
#define ROADPUZZLETRAINSOUNDHANDLER_ONTRAINSTART_OFFSET UNITYSDK_OFFSET(0x27BBEF0)
#define ROADPUZZLETRAINSOUNDHANDLER__ONTRAINSTART_G__PLAYSTARTSOUND|14_0_OFFSET UNITYSDK_OFFSET(0x27BBF80)
#define ROADPUZZLETRAINSOUNDHANDLER__ONTRAINSTART_B__14_1_OFFSET UNITYSDK_OFFSET(0x27BC010)
#define ROADPUZZLETRAINSOUNDHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x27BC020)
#define ROADPUZZLETRAINSOUNDHANDLER_ONSPEEDCHANGE_OFFSET UNITYSDK_OFFSET(0x27BC2D0)
#define ROADPUZZLETRAINSOUNDHANDLER_ONTRAINEND_OFFSET UNITYSDK_OFFSET(0x27BC510)
#define ROADPUZZLETRAINSOUNDHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x27BC5D0)

	inline static constexpr unsigned int RoadPuzzleTrainSoundHandler_TypeDefinitionIndex = 7549;

	class RoadPuzzleTrainSoundHandler : public Il2CppObject
	{
	public:
		::System::Single StartToLoopCrossFadeDuration; // 0x18
		::System::Single LoopToEndCrossFadeDuration; // 0x1C
		::System::Single StartToLoopOffset; // 0x20
		::System::Single LoopToLoopCrossFadeDuration; // 0x24
		::UnityEngine::AudioSource* Start; // 0x28
		::UnityEngine::AudioSource* LoopSpeed1; // 0x30
		::UnityEngine::AudioSource* LoopSpeed2; // 0x38
		::UnityEngine::AudioSource* End; // 0x40
		::UnityEngine::AudioSource* CurrentLoopAudio; // 0x48
		::UnityEngine::Coroutine* _loopCrossFadeCoroutine; // 0x50
		::UnityEngine::Coroutine* startToLoopFadeInCoroutine; // 0x58
		::System::Boolean startCrossFadeStarted; // 0x60
		::UnityEngine::Coroutine* fadeOutCoroutine; // 0x68
		::UnityEngine::Coroutine* fadeInCoroutine; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSOUNDHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnTrainStart(RoadPuzzleTrainStartMessage* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleTrainStartMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSOUNDHANDLER_ONTRAINSTART_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _OnTrainStart_g__PlayStartSound|14_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSOUNDHANDLER__ONTRAINSTART_G__PLAYSTARTSOUND|14_0_OFFSET))(nullptr);
		}

		::System::Void _OnTrainStart_b__14_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSOUNDHANDLER__ONTRAINSTART_B__14_1_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSOUNDHANDLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean OnSpeedChange(RoadPuzzleLeverStateChangedMessage* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleLeverStateChangedMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSOUNDHANDLER_ONSPEEDCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnTrainEnd(RoadPuzzleTrainEndMessage* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleTrainEndMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSOUNDHANDLER_ONTRAINEND_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSOUNDHANDLER_AWAKE_OFFSET))(nullptr);
		}

	};

