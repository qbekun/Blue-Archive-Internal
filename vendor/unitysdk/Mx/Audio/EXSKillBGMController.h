#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class EXSkillBGMData; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AudioClip; }

#define MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEPLAYTARGET_OFFSET UNITYSDK_OFFSET(0x1D50110)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_FINDPLAYTARGET_OFFSET UNITYSDK_OFFSET(0x1D50150)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_DETTACH_OFFSET UNITYSDK_OFFSET(0x1D4CD80)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D502A0)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D50350)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1D50DE0)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_ATTACH_OFFSET UNITYSDK_OFFSET(0x1D4CB10)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEVOLUME_OFFSET UNITYSDK_OFFSET(0x1D505E0)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEBGMCHANELVOLUME_OFFSET UNITYSDK_OFFSET(0x1D50930)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x1D503C0)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D50E70)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_STOPCUTINBGM_OFFSET UNITYSDK_OFFSET(0x1D4D3B0)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0x1D51160)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_PLAYBGM_OFFSET UNITYSDK_OFFSET(0x1D50200)
#define MX_AUDIO_EXSKILLBGMCONTROLLER__INITIALIZE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1D51170)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1D4CF20)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_PLAYCUTINBGM_OFFSET UNITYSDK_OFFSET(0x1D4D220)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_FORCEDETTACHALL_OFFSET UNITYSDK_OFFSET(0x1D4D110)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEREMOVETARGET_OFFSET UNITYSDK_OFFSET(0x1D50720)
#define MX_AUDIO_EXSKILLBGMCONTROLLER__INITIALIZE_B__14_1_OFFSET UNITYSDK_OFFSET(0x1D512B0)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D4C8C0)
#define MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEREMOVECUTIN_OFFSET UNITYSDK_OFFSET(0x1D508A0)

namespace MX::Audio
{
	inline static constexpr unsigned int EXSKillBGMController_TypeDefinitionIndex = 20187;

	class EXSKillBGMController : public Il2CppObject
	{
	public:
		::System::Single VolumeTransitionDuration; // 0x0
		::System::Single VolumeTransitionSpeed; // 0x0
		::System::String* AudioSourceTag; // 0x0
		Il2CppObject* pool; // 0x18
		Il2CppObject* playList; // 0x20
		Il2CppObject* removeList; // 0x28
		::MX::Audio::EXSkillBGMData* playTarget; // 0x30
		::System::Boolean _Pause_k__BackingField; // 0x38
		::UnityEngine::AudioSource* cutinBGMAudioSource; // 0x40
		::System::Single cutinBlendoutBeginTime; // 0x48

		::System::Void UpdatePlayTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEPLAYTARGET_OFFSET))(nullptr);
		}

		::MX::Audio::EXSkillBGMData* FindPlayTarget()
		{
			return (return (::MX::Audio::EXSkillBGMData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_FINDPLAYTARGET_OFFSET))(nullptr);
		}

		::System::Void Dettach(::MX::Audio::EXSkillBGMData* arg)
		{
			((::System::Void(*)(::MX::Audio::EXSkillBGMData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_DETTACH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_Pause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_SET_PAUSE_OFFSET))(arg, nullptr);
		}

		::MX::Audio::EXSkillBGMData* Attach(::UnityEngine::AudioClip* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::MX::Audio::EXSkillBGMData*(*)(::UnityEngine::AudioClip*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_ATTACH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateVolume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEVOLUME_OFFSET))(nullptr);
		}

		::System::Void UpdateBGMChanelVolume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEBGMCHANELVOLUME_OFFSET))(nullptr);
		}

		::System::Void UpdateTime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATETIME_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void StopCutinBGM()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_STOPCUTINBGM_OFFSET))(nullptr);
		}

		::System::Boolean get_Pause()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_GET_PAUSE_OFFSET))(nullptr);
		}

		::System::Void PlayBGM(::MX::Audio::EXSkillBGMData* arg)
		{
			((::System::Void(*)(::MX::Audio::EXSkillBGMData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_PLAYBGM_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__14_0(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER__INITIALIZE_B__14_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_ONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayCutinBGM(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_PLAYCUTINBGM_OFFSET))(arg, nullptr);
		}

		::System::Void ForceDettachAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_FORCEDETTACHALL_OFFSET))(nullptr);
		}

		::System::Void UpdateRemoveTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEREMOVETARGET_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__14_1(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER__INITIALIZE_B__14_1_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void UpdateRemoveCutin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_EXSKILLBGMCONTROLLER_UPDATEREMOVECUTIN_OFFSET))(nullptr);
		}

	};
}

