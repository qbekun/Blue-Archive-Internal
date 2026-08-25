#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioSourceStates; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Coroutine; }

#define MX_AUDIO_AUDIOSOURCEBASE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1D4A970)
#define MX_AUDIO_AUDIOSOURCEBASE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1D4A980)
#define MX_AUDIO_AUDIOSOURCEBASE_GET_CANUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_AUDIOSOURCEBASE_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1D4A990)
#define MX_AUDIO_AUDIOSOURCEBASE_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1D4A9A0)
#define MX_AUDIO_AUDIOSOURCEBASE_GET_AUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D4A9B0)
#define MX_AUDIO_AUDIOSOURCEBASE_SET_AUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D4A9C0)
#define MX_AUDIO_AUDIOSOURCEBASE_GET_COROUTINEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D4A9D0)
#define MX_AUDIO_AUDIOSOURCEBASE_SET_COROUTINEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D4A9E0)
#define MX_AUDIO_AUDIOSOURCEBASE_GET_PROGRESSCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D4A9F0)
#define MX_AUDIO_AUDIOSOURCEBASE_SET_PROGRESSCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D4AA00)
#define MX_AUDIO_AUDIOSOURCEBASE_GET_FADEINOUTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D4AA10)
#define MX_AUDIO_AUDIOSOURCEBASE_SET_FADEINOUTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D4AA20)
#define MX_AUDIO_AUDIOSOURCEBASE_STARTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D4AA30)
#define MX_AUDIO_AUDIOSOURCEBASE_STARTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D492B0)
#define MX_AUDIO_AUDIOSOURCEBASE_STOPPROGRESSBUG_OFFSET UNITYSDK_OFFSET(0x1D4AAB0)
#define MX_AUDIO_AUDIOSOURCEBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1D4AB30)
#define MX_AUDIO_AUDIOSOURCEBASE_FADEOUTANDRESET_OFFSET UNITYSDK_OFFSET(0x1D4AC20)
#define MX_AUDIO_AUDIOSOURCEBASE_COFADEOUT_OFFSET UNITYSDK_OFFSET(0x1D4ACB0)
#define MX_AUDIO_AUDIOSOURCEBASE_COFADEIN_OFFSET UNITYSDK_OFFSET(0x1D4AD00)
#define MX_AUDIO_AUDIOSOURCEBASE_COFADE_OFFSET UNITYSDK_OFFSET(0x1D4AD40)
#define MX_AUDIO_AUDIOSOURCEBASE_COPROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_AUDIOSOURCEBASE_COSTOPBUG_OFFSET UNITYSDK_OFFSET(0x1D4AE10)
#define MX_AUDIO_AUDIOSOURCEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AEA0)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioSourceBase_TypeDefinitionIndex = 20169;

	class AudioSourceBase : public Il2CppObject
	{
	public:
		::MX::Audio::AudioSourceStates* _State_k__BackingField; // 0x10
		::System::Single _Delay_k__BackingField; // 0x14
		::UnityEngine::AudioSource* _AudioSource_k__BackingField; // 0x18
		::UnityEngine::MonoBehaviour* _CoroutineObject_k__BackingField; // 0x20
		::UnityEngine::Coroutine* _ProgressCoroutine_k__BackingField; // 0x28
		::UnityEngine::Coroutine* _FadeInOutCoroutine_k__BackingField; // 0x30
		Il2CppObject* isPlayableGetter; // 0x38

		::MX::Audio::AudioSourceStates* get_State()
		{
			return (return (::MX::Audio::AudioSourceStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::MX::Audio::AudioSourceStates* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceStates*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_GET_CANUSE_OFFSET))(nullptr);
		}

		::System::Single get_Delay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_AudioSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_GET_AUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_AudioSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_SET_AUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::MonoBehaviour* get_CoroutineObject()
		{
			return (return (::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_GET_COROUTINEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_CoroutineObject(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_SET_COROUTINEOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* get_ProgressCoroutine()
		{
			return (return (::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_GET_PROGRESSCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void set_ProgressCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_SET_PROGRESSCOROUTINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* get_FadeInOutCoroutine()
		{
			return (return (::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_GET_FADEINOUTCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void set_FadeInOutCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_SET_FADEINOUTCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void StartProgress(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_STARTPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void StartProgress(::System::Single arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Single, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_STARTPROGRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StopProgressBug()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_STOPPROGRESSBUG_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_RESET_OFFSET))(nullptr);
		}

		::System::Void FadeOutAndReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_FADEOUTANDRESET_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFadeOut()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_COFADEOUT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFadeIn()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_COFADEIN_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFade(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_COFADE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoProgress()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_COPROGRESS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoStopBug()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_COSTOPBUG_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

