#pragma once
#include "unitysdk.h"

namespace UnityEngine::Audio { class AudioMixerSnapshot; }

#define AUDIOMIXERSNAPSHOTSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x221BDD0)

	inline static constexpr unsigned int AudioMixerSnapshotSetting_TypeDefinitionIndex = 4403;

	class AudioMixerSnapshotSetting : public Il2CppObject
	{
	public:
		::UnityEngine::Audio::AudioMixerSnapshot* Snapshot; // 0x10
		::System::Single TransitionTimeOpened; // 0x18
		::System::Single TransitionTimeClosed; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSETTING_.CTOR_OFFSET))(nullptr);
		}

	};

