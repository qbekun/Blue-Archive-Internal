#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Experimental::Playables { class TextureMixerPlayable; }

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA270780)
#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA270790)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int TextureMixerPlayable_TypeDefinitionIndex = 31645;

	class TextureMixerPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Playables::TextureMixerPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Playables::TextureMixerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_TEXTUREMIXERPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

