#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_TIMELINE_AUDIOMIXERPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19EAB0)
#define UNITYENGINE_TIMELINE_AUDIOMIXERPROPERTIES_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xA19EAC0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AudioMixerProperties_TypeDefinitionIndex = 36270;

	class AudioMixerProperties : public Il2CppObject
	{
	public:
		::System::Single volume; // 0x10
		::System::Single stereoPan; // 0x14
		::System::Single spatialBlend; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOMIXERPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOMIXERPROPERTIES_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

	};
}

