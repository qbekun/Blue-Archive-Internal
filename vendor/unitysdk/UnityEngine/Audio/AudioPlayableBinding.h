#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableBinding; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DF170)
#define UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATEAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0xA1DF290)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableBinding_TypeDefinitionIndex = 37481;

	class AudioPlayableBinding : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableBinding* Create(::System::String* str, ::UnityEngine::Object* arg)
		{
			return (return (::UnityEngine::Playables::PlayableBinding*(*)(::System::String*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* CreateAudioOutput(::UnityEngine::Playables::PlayableGraph* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEBINDING_CREATEAUDIOOUTPUT_OFFSET))(arg, str, nullptr);
		}

	};
}

