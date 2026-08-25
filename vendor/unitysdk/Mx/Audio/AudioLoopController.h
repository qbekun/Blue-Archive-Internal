#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }

#define MX_AUDIO_AUDIOLOOPCONTROLLER_SETMAXVOLUME_OFFSET UNITYSDK_OFFSET(0x1D45870)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_STOPTEST_OFFSET UNITYSDK_OFFSET(0x1D459C0)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_COSTART_OFFSET UNITYSDK_OFFSET(0x1D45C10)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_PLAYLOOPAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D45CA0)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_LOOPING_OFFSET UNITYSDK_OFFSET(0x1D45D40)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_COSTARTLOOP_OFFSET UNITYSDK_OFFSET(0x1D45E30)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D45EC0)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D46480)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_STARTTEST_OFFSET UNITYSDK_OFFSET(0x1D465C0)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D466F0)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_STARTLOOP_OFFSET UNITYSDK_OFFSET(0x1D46660)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_COLOOP_OFFSET UNITYSDK_OFFSET(0x1D45DC0)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D467B0)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_VALIDATECURVE_OFFSET UNITYSDK_OFFSET(0x1D46320)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_ENDLOOP_OFFSET UNITYSDK_OFFSET(0x1D459F0)
#define MX_AUDIO_AUDIOLOOPCONTROLLER_COENDLOOP_OFFSET UNITYSDK_OFFSET(0x1D468F0)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioLoopController_TypeDefinitionIndex = 20151;

	class AudioLoopController : public Il2CppObject
	{
	public:
		::UnityEngine::AudioSource* startAudioSource; // 0x18
		::UnityEngine::AudioSource* loopAudioSource; // 0x20
		::UnityEngine::AudioSource* endAudioSource; // 0x28
		::UnityEngine::AudioSource* loopAudioSourceDuplicated; // 0x30
		::System::Single maxVolume; // 0x38
		::System::Boolean startFadeIn; // 0x3C
		::System::Single startFadeInTime; // 0x40
		::UnityEngine::AnimationCurve* startFadeInCurve; // 0x48
		::System::Boolean startFadeOut; // 0x50
		::System::Single startFadeOutTime; // 0x54
		::UnityEngine::AnimationCurve* startFadeOutCurve; // 0x58
		::System::Single startToLoopOffset; // 0x60
		::System::Boolean loopFadeIn; // 0x64
		::System::Single loopFadeInTime; // 0x68
		::UnityEngine::AnimationCurve* loopFadeInCurve; // 0x70
		::System::Boolean loopFadeOut; // 0x78
		::System::Single loopFadeOutTime; // 0x7C
		::UnityEngine::AnimationCurve* loopFadeOutCurve; // 0x80
		::System::Single loopToLoopOffset; // 0x88
		::System::Boolean endFadeIn; // 0x8C
		::System::Single endFadeInTime; // 0x90
		::UnityEngine::AnimationCurve* endFadeInCurve; // 0x98
		::System::Boolean endFadeOut; // 0xA0
		::System::Single endFadeOutTime; // 0xA4
		::UnityEngine::AnimationCurve* endFadeOutCurve; // 0xA8
		::UnityEngine::Coroutine* loopStart; // 0xB0
		::UnityEngine::Coroutine* loopOriginal; // 0xB8
		::UnityEngine::Coroutine* loopDuplicate; // 0xC0
		::UnityEngine::Coroutine* loopEnd; // 0xC8
		::System::Boolean isLooping; // 0xD0
		::System::Boolean isPlaying; // 0xD1

		::System::Void SetMaxVolume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_SETMAXVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void StopTest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_STOPTEST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoStart()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_COSTART_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayLoopAudioSource(::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_PLAYLOOPAUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void Looping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_LOOPING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoStartLoop()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_COSTARTLOOP_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void StartTest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_STARTTEST_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void StartLoop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_STARTLOOP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoop()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_COLOOP_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ValidateCurve(::UnityEngine::AnimationCurve* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_VALIDATECURVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndLoop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_ENDLOOP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoEndLoop()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOLOOPCONTROLLER_COENDLOOP_OFFSET))(nullptr);
		}

	};
}

