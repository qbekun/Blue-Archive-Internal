#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Experimental::Video { class VideoClipPlayable; }

#define UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA4A8930)
#define UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4A8940)

namespace UnityEngine::Experimental::Video
{
	inline static constexpr unsigned int VideoClipPlayable_TypeDefinitionIndex = 37726;

	class VideoClipPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Video::VideoClipPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Video::VideoClipPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_VIDEO_VIDEOCLIPPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

