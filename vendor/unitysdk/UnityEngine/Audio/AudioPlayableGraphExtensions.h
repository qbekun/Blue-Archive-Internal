#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableGraph&; }
namespace UnityEngine::Playables { class PlayableOutputHandle&; }

#define UNITYENGINE_AUDIO_AUDIOPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEAUDIOOUTPUT_OFFSET UNITYSDK_OFFSET(0xA1DF440)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioPlayableGraphExtensions_TypeDefinitionIndex = 37482;

	class AudioPlayableGraphExtensions : public Il2CppObject
	{
	public:
		::System::Boolean InternalCreateAudioOutput(::UnityEngine::Playables::PlayableGraph&* arg, ::System::String* str, ::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEAUDIOOUTPUT_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

