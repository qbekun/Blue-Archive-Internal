#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutputHandle; }

#define UNITYENGINE_PLAYABLES_IPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int IPlayableOutput_TypeDefinitionIndex = 31603;

	class IPlayableOutput : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableOutputHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableOutputHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEOUTPUT_GETHANDLE_OFFSET))(nullptr);
		}

	};
}

