#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioPlayInfo; }

#define MX_AUDIO_AUDIOSOURCEOBJECT_SET_AUDIOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D4B390)
#define MX_AUDIO_AUDIOSOURCEOBJECT_SET_IGNOREVELOCITYAUDIOSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D4B3A0)
#define MX_AUDIO_AUDIOSOURCEOBJECT_CO_INTERRUNTANIMATIONBUG_OFFSET UNITYSDK_OFFSET(0x1D4B3B0)
#define MX_AUDIO_AUDIOSOURCEOBJECT_SET_LASTANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x1D4B440)
#define MX_AUDIO_AUDIOSOURCEOBJECT_GET_IGNOREVELOCITYAUDIOSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D4B450)
#define MX_AUDIO_AUDIOSOURCEOBJECT_ISINTERRUPT_OFFSET UNITYSDK_OFFSET(0x1D4B460)
#define MX_AUDIO_AUDIOSOURCEOBJECT_COPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D4B500)
#define MX_AUDIO_AUDIOSOURCEOBJECT_COFADEIN_OFFSET UNITYSDK_OFFSET(0x1D4B590)
#define MX_AUDIO_AUDIOSOURCEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B5D0)
#define MX_AUDIO_AUDIOSOURCEOBJECT_GET_CANUSE_OFFSET UNITYSDK_OFFSET(0x1D4B5E0)
#define MX_AUDIO_AUDIOSOURCEOBJECT_ADD_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D49600)
#define MX_AUDIO_AUDIOSOURCEOBJECT_GET_LASTANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x1D4B5F0)
#define MX_AUDIO_AUDIOSOURCEOBJECT_REMOVE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D497D0)
#define MX_AUDIO_AUDIOSOURCEOBJECT_SET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D4B600)
#define MX_AUDIO_AUDIOSOURCEOBJECT_GET_AUDIOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D4B610)
#define MX_AUDIO_AUDIOSOURCEOBJECT_GET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D4B620)
#define MX_AUDIO_AUDIOSOURCEOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x1D4B630)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioSourceObject_TypeDefinitionIndex = 20172;

	class AudioSourceObject : public ::System::Runtime::CompilerServices::IsReadOnlyAttribute
	{
	public:
		EntityVisual* _EntityVisual_k__BackingField; // 0x40
		::MX::Audio::AudioPlayInfo* _AudioPlayInfo_k__BackingField; // 0x48
		Il2CppObject* OnCompleted; // 0x50
		AnimatorStateName* _LastAnimatorState_k__BackingField; // 0x58
		::System::Boolean _IgnoreVelocityAudioSourceObject_k__BackingField; // 0x5C

		::System::Void set_AudioPlayInfo(::MX::Audio::AudioPlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_SET_AUDIOPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_IgnoreVelocityAudioSourceObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_SET_IGNOREVELOCITYAUDIOSOURCEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_InterruntAnimationBug()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_CO_INTERRUNTANIMATIONBUG_OFFSET))(nullptr);
		}

		::System::Void set_LastAnimatorState(AnimatorStateName* arg)
		{
			((::System::Void(*)(AnimatorStateName*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_SET_LASTANIMATORSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreVelocityAudioSourceObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_GET_IGNOREVELOCITYAUDIOSOURCEOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean IsInterrupt(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_ISINTERRUPT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoProgress()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_COPROGRESS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFadeIn()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_COFADEIN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_GET_CANUSE_OFFSET))(nullptr);
		}

		::System::Void add_OnCompleted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_ADD_ONCOMPLETED_OFFSET))(arg, nullptr);
		}

		AnimatorStateName* get_LastAnimatorState()
		{
			return (return (AnimatorStateName*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_GET_LASTANIMATORSTATE_OFFSET))(nullptr);
		}

		::System::Void remove_OnCompleted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_REMOVE_ONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void set_EntityVisual(EntityVisual* arg)
		{
			((::System::Void(*)(EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_SET_ENTITYVISUAL_OFFSET))(arg, nullptr);
		}

		::MX::Audio::AudioPlayInfo* get_AudioPlayInfo()
		{
			return (return (::MX::Audio::AudioPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_GET_AUDIOPLAYINFO_OFFSET))(nullptr);
		}

		EntityVisual* get_EntityVisual()
		{
			return (return (EntityVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_GET_ENTITYVISUAL_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEOBJECT_RESET_OFFSET))(nullptr);
		}

	};
}

