#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutputHandle; }

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA270860)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int TexturePlayableOutput_TypeDefinitionIndex = 31646;

	class TexturePlayableOutput : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableOutputHandle* m_Handle; // 0x10

		::UnityEngine::Playables::PlayableOutputHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableOutputHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREPLAYABLEOUTPUT_GETHANDLE_OFFSET))(nullptr);
		}

	};
}

