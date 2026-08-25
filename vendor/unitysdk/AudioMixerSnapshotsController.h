#pragma once
#include "unitysdk.h"

class AudioMixerSnapshotInfo;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define AUDIOMIXERSNAPSHOTSCONTROLLER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x204A450)
#define AUDIOMIXERSNAPSHOTSCONTROLLER_GET_DEFAULTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204A4D0)
#define AUDIOMIXERSNAPSHOTSCONTROLLER_SET_DEFAULTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204A4E0)
#define AUDIOMIXERSNAPSHOTSCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204A4F0)
#define AUDIOMIXERSNAPSHOTSCONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x204A500)
#define AUDIOMIXERSNAPSHOTSCONTROLLER_SET_AUDIOMIXERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204A650)
#define AUDIOMIXERSNAPSHOTSCONTROLLER_GET_AUDIOMIXERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x204A660)

	inline static constexpr unsigned int AudioMixerSnapshotsController_TypeDefinitionIndex = 3283;

	class AudioMixerSnapshotsController : public Il2CppObject
	{
	public:
		AudioMixerSnapshotInfo* _AudioMixerSnapshot_k__BackingField; // 0x10
		::System::Boolean _DefaultSnapShot_k__BackingField; // 0x18

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSCONTROLLER_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DefaultSnapShot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSCONTROLLER_GET_DEFAULTSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void set_DefaultSnapShot(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSCONTROLLER_SET_DEFAULTSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSCONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_AudioMixerSnapshot(AudioMixerSnapshotInfo* arg)
		{
			((::System::Void(*)(AudioMixerSnapshotInfo*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSCONTROLLER_SET_AUDIOMIXERSNAPSHOT_OFFSET))(arg, nullptr);
		}

		AudioMixerSnapshotInfo* get_AudioMixerSnapshot()
		{
			return ((AudioMixerSnapshotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOMIXERSNAPSHOTSCONTROLLER_GET_AUDIOMIXERSNAPSHOT_OFFSET))(nullptr);
		}

	};

