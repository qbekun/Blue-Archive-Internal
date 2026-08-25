#pragma once
#include "unitysdk.h"

namespace UnityEngine::Audio { class AudioMixerSnapshot; }

#define AUDIOMIXERSNAPSHOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D45860)

	inline static constexpr unsigned int AudioMixerSnapshotInfo_TypeDefinitionIndex = 20144;

	class AudioMixerSnapshotInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Audio::AudioMixerSnapshot* AudioMixerSnapshot; // 0x10
		::System::Single TimeToReach; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

