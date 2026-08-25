#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }

#define UNITYENGINE_PLAYABLES_IPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int IPlayable_TypeDefinitionIndex = 31601;

	class IPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

	};
}

