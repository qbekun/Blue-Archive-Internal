#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Audio { class AudioMixerGroup; }
namespace UnityEngine::Audio { class AudioMixerSnapshot; }
namespace UnityEngine::Audio { class AudioMixerUpdateMode; }

#define UNITYENGINE_AUDIO_AUDIOMIXER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DE690)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0xA1DE6E0)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SET_OUTPUTAUDIOMIXERGROUP_OFFSET UNITYSDK_OFFSET(0xA1DE720)
#define UNITYENGINE_AUDIO_AUDIOMIXER_FINDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA1DE760)
#define UNITYENGINE_AUDIO_AUDIOMIXER_FINDMATCHINGGROUPS_OFFSET UNITYSDK_OFFSET(0xA1DE7A0)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA1DE7E0)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DEAE0)
#define UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0xA1DEB30)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA1DEB90)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA1DEBD0)
#define UNITYENGINE_AUDIO_AUDIOMIXER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1DEC10)
#define UNITYENGINE_AUDIO_AUDIOMIXER_CLEARFLOAT_OFFSET UNITYSDK_OFFSET(0xA1DEC60)
#define UNITYENGINE_AUDIO_AUDIOMIXER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0xA1DECA0)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixer_TypeDefinitionIndex = 37477;

	class AudioMixer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Audio::AudioMixerGroup* get_outputAudioMixerGroup()
		{
			return (return (::UnityEngine::Audio::AudioMixerGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GET_OUTPUTAUDIOMIXERGROUP_OFFSET))(nullptr);
		}

		::System::Void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* arg)
		{
			((::System::Void(*)(::UnityEngine::Audio::AudioMixerGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SET_OUTPUTAUDIOMIXERGROUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Audio::AudioMixerSnapshot* FindSnapshot(::System::String* str)
		{
			return (return (::UnityEngine::Audio::AudioMixerSnapshot*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_FINDSNAPSHOT_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindMatchingGroups(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_FINDMATCHINGGROUPS_OFFSET))(str, nullptr);
		}

		::System::Void TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Audio::AudioMixerSnapshot*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TransitionToSnapshotInternal(::UnityEngine::Audio::AudioMixerSnapshot* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Audio::AudioMixerSnapshot*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TransitionToSnapshots(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_TRANSITIONTOSNAPSHOTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Audio::AudioMixerUpdateMode* get_updateMode()
		{
			return (return (::UnityEngine::Audio::AudioMixerUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GET_UPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_updateMode(::UnityEngine::Audio::AudioMixerUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Audio::AudioMixerUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SET_UPDATEMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetFloat(::System::String* str, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ClearFloat(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_CLEARFLOAT_OFFSET))(str, nullptr);
		}

		::System::Boolean GetFloat(::System::String* str, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXER_GETFLOAT_OFFSET))(str, arg, nullptr);
		}

	};
}

