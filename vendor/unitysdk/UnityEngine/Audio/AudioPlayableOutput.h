#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutputHandle; }
namespace UnityEngine::Audio { class AudioPlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayableOutputHandle&; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DF2E0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DF510)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0xA1DF490)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1DF630)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1DF400)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0xA1DF640)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETTARGET_OFFSET UNITYSDK_OFFSET(0xA1DF5F0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETEVALUATEONSEEK_OFFSET UNITYSDK_OFFSET(0xA1DF710)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET UNITYSDK_OFFSET(0xA1DF6D0)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETEVALUATEONSEEK_OFFSET UNITYSDK_OFFSET(0xA1DF750)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableOutput_TypeDefinitionIndex = 37483;

	class AudioPlayableOutput : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableOutputHandle* m_Handle; // 0x10

		::UnityEngine::Audio::AudioPlayableOutput* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::String* str, ::UnityEngine::AudioSource* arg)
		{
			return (return (::UnityEngine::Audio::AudioPlayableOutput*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::String*, ::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableOutputHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Audio::AudioPlayableOutput* get_Null()
		{
			return (return (::UnityEngine::Audio::AudioPlayableOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GET_NULL_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableOutputHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableOutputHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* op_Implicit(::UnityEngine::Audio::AudioPlayableOutput* arg)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::UnityEngine::Audio::AudioPlayableOutput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Audio::AudioPlayableOutput* op_Explicit(::UnityEngine::Playables::PlayableOutput* arg)
		{
			return (return (::UnityEngine::Audio::AudioPlayableOutput*(*)(::UnityEngine::Playables::PlayableOutput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTarget(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void SetEvaluateOnSeek(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_SETEVALUATEONSEEK_OFFSET))(arg, nullptr);
		}

		::System::Void InternalSetTarget(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InternalSetEvaluateOnSeek(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEOUTPUT_INTERNALSETEVALUATEONSEEK_OFFSET))(arg, arg, nullptr);
		}

	};
}

