#pragma once
#include "unitysdk.h"

class AudioMixerSnapshotInfo;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x2049FC0)
#define AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_GET_RAIDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204A1F0)
#define AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x204A200)
#define AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_GET_NORMALSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204A2C0)
#define AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_SET_RAIDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204A2D0)
#define AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_SET_NORMALSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204A2E0)
#define AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204A2F0)

	inline static constexpr unsigned int AudioMixerSnapshotsTransitionController_TypeDefinitionIndex = 3281;

	class AudioMixerSnapshotsTransitionController : public Il2CppObject
	{
	public:
		AudioMixerSnapshotInfo* _NormalSnapshot_k__BackingField; // 0x10
		AudioMixerSnapshotInfo* _RaidSnapshot_k__BackingField; // 0x18

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		AudioMixerSnapshotInfo* get_RaidSnapshot()
		{
			return ((AudioMixerSnapshotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_GET_RAIDSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		AudioMixerSnapshotInfo* get_NormalSnapshot()
		{
			return ((AudioMixerSnapshotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_GET_NORMALSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void set_RaidSnapshot(AudioMixerSnapshotInfo* arg)
		{
			((::System::Void(*)(AudioMixerSnapshotInfo*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_SET_RAIDSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_NormalSnapshot(AudioMixerSnapshotInfo* arg)
		{
			((::System::Void(*)(AudioMixerSnapshotInfo*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_SET_NORMALSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSTRANSITIONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

